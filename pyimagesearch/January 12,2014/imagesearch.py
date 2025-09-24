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
