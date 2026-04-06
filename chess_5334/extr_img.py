import pdfplumber
import os

pdf_path = "chess_set.pdf"
output_folder = "extracted_images"

os.makedirs(output_folder, exist_ok=True)

image_count = 0

with pdfplumber.open(pdf_path) as pdf:
    for page_num, page in enumerate(pdf.pages):
        for img_index, img in enumerate(page.images):
            try:
                image_data = page.crop(img["bbox"]).to_image()
                
                image_path = os.path.join(output_folder, f"page_{page_num+1}_img_{img_index+1}.png")
                image_data.save(image_path)
                print(f"Saved: {image_path}")
                image_count += 1
            except:
                pass

print(f"✓ Extracted {image_count} images")
