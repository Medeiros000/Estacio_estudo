carros = ('Jetta Variant', 'Passat', 'Crossfox', 'DS5')
valores = (88078.64, 106161.94, 72832.16, 124549.07)

zip(carros, valores)

print('Listando com zip')
print(list(zip(carros, valores)))

print('Listando com for')
for item in zip(carros, valores):
    print(item)

print('Listando com for e desempacotamento')
for carro, valor in zip(carros, valores):
    print(carro, valor)

print('Listando com for e desempacotamento e com if para filtrar informação')
for carro, valor in zip(carros, valores):
    if(valor > 100000):
        print(carro)