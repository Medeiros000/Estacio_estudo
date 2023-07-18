carros = ('Jetta Variant', 'Passat', 'Crossfox', 'DS5')
valores = (88078.64, 106161.94, 72832.16, 124549.07)

dados = dict(zip(carros, valores))


def desempacotar(dado):
    for item in dado.items():
        print(item[0], item[1])


print(dados)
print(type(dados))
print(len(dados))

print('## Desempacotamento de dicionários ##')
desempacotar(dados)

print('## Alterando valores ##')
dados['Passat'] = 106161.95
desempacotar(dados)

print('## Descarte de valores ##')
del dados['Passat']
desempacotar(dados)

print('## Adicionando valores ##')
dados['Passat'] = 106161.94
desempacotar(dados)
