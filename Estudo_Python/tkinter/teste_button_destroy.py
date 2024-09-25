import tkinter as tk
from tkinter import ttk

janela = tk.Tk()
janela.title("Widget Button")
janela.geometry("250x50")
ttk.Label(janela, text="Button destroy").pack()
btnAcao = tk.Button(janela, text='clique', width=15, command=janela.destroy)
btnAcao.pack()
janela.mainloop()
