import pandas as pd

pd.set_option('display.max_rows', 1000)
pd.set_option('display.max_columns', 1000)

dataset = pd.read_csv('db.csv', sep=';', index_col=0)

# print(dataset.info())

# print(dataset.Quilometragem.isna())

# print(dataset[dataset.Quilometragem.isna()])

# dataset.fillna(0, inplace=True)

# print(dataset.query('Zero_km == True'))

dataset.dropna(subset=['Quilometragem'], inplace=True)

print(dataset)
