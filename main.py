import os
import io
from tkinter import *
from tkinter import filedialog

root = Tk()


template_dir = os.path.join(os.path.dirname(__file__), 'project blanks')

selected_dir = StringVar()
selected_dir.set("No Directory Selected")

def browseDirs():
    global selected_dir
    filename = filedialog.askdirectory(initialdir = "/")
    selected_dir.set(filename)


class app():
    def __init__(self, master):
        self.master = master
        self.master.geometry("1024x768")
        self.master.title("Project Creator")
        self.start()

    def start(self):
        for i in self.master.winfo_children():
            i.destroy()
        self.startFrame = Frame(self.master, width=1024, height=768)
        self.startFrame.pack()
        self.reg_txt = Label(self.startFrame, text="Welcome to the Project Creator")
        self.reg_txt.config(font=("Courier", 24, "bold", "underline"))
        self.reg_txt.pack(pady = (200, 25), anchor='center')
        self.descrip_txt = Label(self.startFrame, text="Selected Directory:")
        self.descrip_txt.config(font=("Courier", 16, "bold"))
        self.descrip_txt.pack(pady=25, anchor='center')
        self.directory_lbl = Label(self.startFrame, textvariable= selected_dir)
        self.directory_lbl.config(font=("Courier", 12))
        self.directory_lbl.pack(pady=25, anchor='center')
        self.fs_btn = Button(self.startFrame, text="Select a Directory", command=browseDirs) 
        self.fs_btn.pack(pady=(25, 25), anchor='center')
        self.next_btn = Button(self.startFrame, text="Next", command=self.device)
        self.next_btn.pack(padx=50, pady=(75, 100), anchor='center')
        
    def device(self):
        for i in self.master.winfo_children():
            i.destroy()
        self.deviceFrame = Frame(self.master, width=1024, height=768)
        self.deviceFrame.pack()
       



app(root)
root.mainloop()