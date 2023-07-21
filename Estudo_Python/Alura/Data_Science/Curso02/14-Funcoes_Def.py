def media():
    valor = (1 + 2 + 3) / 3
    print(valor)


media()


def media2(numero1, numero2, numero3):
    valor = (numero1 + numero2 + numero3) / 3
    print(valor)


media2(1, 2, 3)

media2(23, 45, 67)


def media_lista(lista):
    valor = sum(lista) / len(lista)
    return valor


resultado = media_lista([1, 2, 3, 4, 5, 6, 7, 8])

print(resultado)


def media_lista2(lista):
    valor = sum(lista) / len(lista)
    return valor, len(lista)


resultado2, n = media_lista2([1, 2, 3, 4, 5, 6, 7, 8, 9])


print(resultado2), print(n)
