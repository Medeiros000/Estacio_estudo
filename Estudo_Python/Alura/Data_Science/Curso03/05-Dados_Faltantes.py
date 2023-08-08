import pandas as pd

dados = pd.read_csv('aluguel_residencial.csv', sep=';')

# print(dados.isnull())

# print(dados.notnull())

# print(dados.info)

# print(dados[dados['Valor'].isnull()])

# A = dados.shape[0]
# dados.dropna(subset=['Valor'], inplace=True)
# B = dados.shape[0]
# print(A - B)

# print(dados[dados['Condominio'].isnull()].shape[0])

selecao = (dados['Tipo'] == 'Apartamento') & (dados['Condominio'].isnull())

# print(selecao.shape[0])

A = dados.shape[0]
dados = dados[~selecao]
B = dados.shape[0]
print('Resultado')
print(A - B)

print('Condomínio com valor nulo')
print(dados[dados['Condominio'].isnull()].shape[0])

# print(dados.info())

dados = dados.fillna({'Condominio': 0, 'IPTU': 0})

print('Condominio com valor nulo')
print(dados[dados['Condominio'].isnull()].shape[0])
print('IPTU com valor nulo')
print(dados[dados['IPTU'].isnull()].shape[0])

dados.to_csv('aluguel_residencial.csv', sep=';', index=False)

