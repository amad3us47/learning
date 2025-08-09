import tkinter as tk

# Initialize the counter value
counter = 0

# Function to update the label
def update_label():
    label.config(text=f"Count: {counter}")

# Button actions
def increment():
    global counter
    counter += 1
    update_label()

def decrement():
    global counter
    counter -= 1
    update_label()

def reset():
    global counter
    counter = 0
    update_label()

# Create main window
root = tk.Tk()
root.title("Counter App")
root.geometry("300x200")

# Create and place label
label = tk.Label(root, text=f"Count: {counter}", font=("Arial", 24))
label.pack(pady=20)

# Create and place buttons
frame = tk.Frame(root)
frame.pack()

btn_inc = tk.Button(frame, text="Increment", command=increment, width=10)
btn_inc.grid(row=0, column=0, padx=5)

btn_dec = tk.Button(frame, text="Decrement", command=decrement, width=10)
btn_dec.grid(row=0, column=1, padx=5)

btn_reset = tk.Button(root, text="Reset", command=reset, width=22)
btn_reset.pack(pady=10)

# Run the GUI loop
root.mainloop()

