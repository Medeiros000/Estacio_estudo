import pandas as pd

dados = {
    'Nome': ['Jetta', 'Passat', 'Crossfox', 'DS5', 'Fusca'],
    'Motor': ['Motor 4.0 Turbo', 'Motor Diesel', 'Motor Diesel V8', 'Motor 2.0', 'Motor 1.6'],
    'Ano': [2019, 2003, 1991, 2019, 1990],
    'Quilometragem': [0.0, 5712.0, 37123.0, 0.0, 120000.0],
    'Zero_km': [True, False, False, True, False],
    'Valor': [88000.0, 106000.0, 72000.0, 89000.0, 32000.0]
}

dataset = pd.DataFrame(dados)


print(dataset[['Nome', 'Ano', 'Quilometragem', 'Valor']][1:3])
print(dataset.loc[[1, 2], ['Nome', 'Ano', 'Quilometragem', 'Valor']])
print(dataset.iloc[[1, 2], [0, 2, 3, 5]])
print(dataset[1:3][['Nome', 'Ano', 'Quilometragem', 'Valor']])

