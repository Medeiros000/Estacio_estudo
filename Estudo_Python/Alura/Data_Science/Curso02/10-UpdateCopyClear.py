dados = {'Crossfox': 72832.16, 'DS5': 124549.07, 'Jetta Variant': 88078.64}
print(dados)

print('## Update ##')
dados.update({'Passat': 106161.94})
print(dados)

print('## Alterando valores com Update ##')
dados.update({'Passat': 106161.95, 'Fusca': 150000})
print(dados)

print('## Outra forma de alterar valores com Update ##')
dados.update(Passat=106161.96, Fusca=150001)
print(dados)

print('## Copiando um dicionario com Copy ##')
dadosCopy = dados.copy()
print(dadosCopy)

print('## Deletando dado com Del ##')
del dadosCopy['Fusca']
print(dadosCopy)

print('## Limpando um dicionario com Clear ##')
dadosCopy.clear()
print(dadosCopy)

print('## Verificando o Dicionario Dados ##')
print(dados)

print('## Deletando dado com Pop ##')
dadosCopy = dados.copy()
print(dadosCopy.pop('Passat'))
print(dadosCopy.pop('Passat', 'Chave não encontrada'))

print(dadosCopy)
