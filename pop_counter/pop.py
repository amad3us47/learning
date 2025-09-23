import tkinter as tk

# Initialize counters
lc_counter = 0
report_counter = 0

# Functions for LC counter
def update_lc_label():
    lc_label.config(text=f"LC Count: {lc_counter}")

def lc_increment():
    global lc_counter
    lc_counter += 1
    update_lc_label()

def lc_decrement():
    global lc_counter
    lc_counter -= 1
    update_lc_label()

def lc_reset():
    global lc_counter
    lc_counter = 0
    update_lc_label()

# Functions for Report counter
def update_report_label():
    report_label.config(text=f"Report Count: {report_counter}")

def report_increment():
    global report_counter
    report_counter += 1
    update_report_label()

def report_decrement():
    global report_counter
    report_counter -= 1
    update_report_label()

def report_reset():
    global report_counter
    report_counter = 0
    update_report_label()

# Create main window
root = tk.Tk()
root.title("LC & Reports Counter")
root.geometry("400x300")

# ================= LC Counter =================
lc_label = tk.Label(root, text=f"LC Count: {lc_counter}", font=("Arial", 18))
lc_label.pack(pady=10)

lc_frame = tk.Frame(root)
lc_frame.pack()

btn_lc_inc = tk.Button(lc_frame, text="Increment", command=lc_increment, width=10)
btn_lc_inc.grid(row=0, column=0, padx=5)

btn_lc_dec = tk.Button(lc_frame, text="Decrement", command=lc_decrement, width=10)
btn_lc_dec.grid(row=0, column=1, padx=5)

btn_lc_reset = tk.Button(root, text="Reset LC", command=lc_reset, width=22)
btn_lc_reset.pack(pady=5)

# ================= Reports Counter =================
report_label = tk.Label(root, text=f"Report Count: {report_counter}", font=("Arial", 18))
report_label.pack(pady=10)

report_frame = tk.Frame(root)
report_frame.pack()

btn_report_inc = tk.Button(report_frame, text="Increment", command=report_increment, width=10)
btn_report_inc.grid(row=0, column=0, padx=5)

btn_report_dec = tk.Button(report_frame, text="Decrement", command=report_decrement, width=10)
btn_report_dec.grid(row=0, column=1, padx=5)

btn_report_reset = tk.Button(root, text="Reset Reports", command=report_reset, width=22)
btn_report_reset.pack(pady=5)

# Run the GUI loop
root.mainloop()

