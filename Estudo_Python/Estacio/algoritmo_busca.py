# Algoritmo simples de busca em vetor

num = int(input('Qual número de 1 à 10 você está procurando?>> '))

tab = [2, 6, 3, 4, 8, 10, 1, 5, 9, 7]
pos = 0
achou = False

for i in range(len(tab)):
  if tab[i] == num:
    achou = True
    pos = i
    i = len(tab)

if achou == True:
  print(f'O número foi encontrado e ele esta na posição {pos} do vetor.')
