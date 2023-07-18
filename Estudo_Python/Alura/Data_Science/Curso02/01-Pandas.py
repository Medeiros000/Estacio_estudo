import pandas as pd
pd.set_option('display.max_rows', 1000)
dataset = pd.read_csv('db.csv', sep=';')
#print(dataset[['Nome', 'Quilometragem', 'Valor']])
#print(dataset.describe())
print(dataset.info())
