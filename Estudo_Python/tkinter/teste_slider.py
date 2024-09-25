import tkinter as tk
from tkinter import ttk
def mostrar_valores():
  v1 = round(w1.get())
  v2 = round(w2.get())
  
  print (v1, v2)
janela = tk.Tk()
w1 = ttk.Scale(janela, from_=0, to=50)
w1.pack()
w2 = ttk.Scale(janela, from_=0, to=100, orient=tk.HORIZONTAL)
w2.pack()
ttk.Button(janela, text='Mostrar a Escala', command=mostrar_valores).pack()
janela.mainloop()