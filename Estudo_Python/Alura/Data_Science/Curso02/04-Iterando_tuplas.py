nomes_carros = ('Jetta Variant', 'Passat', 'Crossfox', 'DS5')

print('Iterando tuplas')

for item in nomes_carros:
    print(item)

print('Desempacotamento de tuplas')

carro_1, carro_2, carro_3, carro_4 = nomes_carros

print(carro_1)
print(carro_2)
print(carro_3)
print(carro_4)

print('Desempacotamento de tuplas com descarte de valores')

_, A, _, B = nomes_carros

print(A)
print(B)

print('Desempacotamento de tuplas com descarte de valores')

_, C, *_ = nomes_carros

print(C)
