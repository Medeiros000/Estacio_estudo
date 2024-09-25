import tkinter as tk
from tkinter import ttk

janela = tk.Tk()
janela.title("Aplicação GUI com o Widget Label")
janela.geometry("400x150")
ttk.Label(janela, text="Componente Label" ).grid(column=0, row=0)
janela.mainloop()
