lista = [10, 2, 5, 7, 6, 3]

#estrategia 1
soma = 0
n = len(lista)

for i in range(n):
    if lista[i] % 2 == 0:
        soma += lista[i]

print(f' A soma dos números pares da lista foi {soma}')

#estrategia 2
soma2 = 0

for numero in lista:
    if numero % 2 == 0:
        soma2 += numero

print(f' A soma dos números pares da lista foi {soma2}')