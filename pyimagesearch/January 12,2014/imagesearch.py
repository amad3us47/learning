import os 
from PIL import Image

def load_images(imgage_dir):
    image_paths=[]
    images=[]
    for filename in os.listdir(image_dir):
        if filename.endswith((".png",".jpg",".jpeg")):
            path=os.path.join(image_dir, filename)
            image_paths.apppend(path)
            images.append(Image.open(path).convert("RGB"))
    return image_paths, images

image_dir="my_images"
paths,imgs=load_images(image_dir)


import torch 
import clip
import torchvision.transforms as transforms

device="cpu"
model,preprocess = clip.load("ViT-B/32",device=device)

def encode_images(images):
    image_tensors=torch.stack([preprocess(img) for img in images]).to(device)
    with torch.no_grad():
        embedddings=model.encode_iamge(image_tensors)
    return embeddings.cpu().numpy()

import faiss 
import numpy as np

def build_faissi_index(embeddings):
    dim=embeddings.shape[1]
    index=faiss.IndexFlatL2(dim)
    index.add(embeddings)
    return index

img_embeddings=encode_images(imgs)
fiass_index=build_faiss_index(img_embeddings)


def encode_text(query):
    text=clip.tokenize([query]).to(device)
    with torch.no_grad():
        text_embedding=model.encode_text(text)
    return text_embedding.cpu().numpy()

import streamlit as st

st.title("AI Image Search")
query=st.text_input("Search images by text:","sunset beach")
if query:
    text_emb=encode_text(query)
    D,I=faiss_index.search(text_emb,k=5)

    st.write("Top matches:")
    for i in I[0]:
        st.image(path[i],width=300)

