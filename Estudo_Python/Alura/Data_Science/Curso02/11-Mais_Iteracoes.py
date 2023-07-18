dados = {'Crossfox': 72832.16, 'DS5': 124549.07, 'Jetta Variant': 88078.64, 'Passat': 106161.95, 'Fusca': 150000}

print('## Chaves ##')
print(dados.keys())

print('## Valores ##')
print(dados.values())

print('## Chaves desempacotadas ##')
for key in dados.keys():
    print(key)

print('## Valores desempacotados ##')
for key in dados.keys():
    print(dados[key])

print('## Itens em tuplas ##')
print(dados.items())

print('## Itens separados em tuplas ##')
for item in dados.items():
    print(item)

print('## Itens separados em tuplas e desempacotados ##')
for key, value in dados.items():
    print(key, value)

print('## Itens separados em tuplas e desempacotados com condicoes ##')
for key, value in dados.items():
    if(value > 100000):
        print(key)
