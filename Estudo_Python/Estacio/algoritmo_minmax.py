tabela = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
p = 0
min = tabela[p]
max = tabela[p]

for i in range(1, len(tabela)):
  if tabela[i] < min:
    min = tabela[i]
  if tabela[i] > max:
    max = tabela[i]

print(f"O menor valor é {min} e o maior valor é {max}")