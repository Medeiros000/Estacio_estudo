import random

# Lista aleatória
lista = random.sample(range(0, 100), 20)

def merge_sort(lista):
    if len(lista) <= 1:
        return lista

    meio = len(lista) // 2

    lista_esquerda = lista[:meio]
    lista_direita = lista[meio:]

    lista_esquerda = merge_sort(lista_esquerda)
    lista_direita = merge_sort(lista_direita)

    return merge(lista_esquerda, lista_direita)

def merge(lista_esquerda, lista_direita):
    lista = []

    while len(lista_esquerda) > 0 and len(lista_direita) > 0:
        if lista_esquerda[0] < lista_direita[0]:
            lista.append(lista_esquerda[0])
            lista_esquerda.pop(0)
        else:
            lista.append(lista_direita[0])
            lista_direita.pop(0)

    for i in lista_esquerda:
        lista.append(i)
    for i in lista_direita:
        lista.append(i)

    return lista

print('Lista original:', lista)
print('Lista ordenada:', merge_sort(lista))