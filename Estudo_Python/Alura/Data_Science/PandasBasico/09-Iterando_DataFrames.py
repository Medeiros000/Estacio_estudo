import pandas as pd

pd.set_option('display.max_rows', 1000)
pd.set_option('display.max_columns', 1000)

dataset = pd.read_csv('db.csv', sep=';', index_col=0)

for index, row in dataset.iterrows():
    if 2019 - row['Ano'] != 0:
        dataset.loc[index, 'Km_media'] = row['Quilometragem'] / (2019 - row['Ano'])
    else:
        dataset.loc[index, 'Km_media'] = 0

print(dataset)

