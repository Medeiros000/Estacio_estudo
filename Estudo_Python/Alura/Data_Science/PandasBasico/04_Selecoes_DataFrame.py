import pandas as pd

pd.set_option('display.max_rows', 1000)
pd.set_option('display.max_columns', 1000)

dataset = pd.read_csv('db.csv', sep=';', index_col=0)

# var = pd.DataFrame(dataset)
# print(dataset['Valor'])

# print(type(dataset['Valor']))

# print(type(dataset[['Valor']]))

# print(dataset.loc['Passat'])

# print(dataset.loc[['Passat', 'DS5']])

# print(dataset.loc[['Passat', 'DS5'], ['Motor', 'Valor']])

# print(dataset.loc[:, ['Motor', 'Valor']])

# print(dataset.iloc[1])

# print(dataset.iloc[[1]])

# print(dataset.iloc[1:4, [0, 5, 2]])

# print(dataset.iloc[[1, 42, 22], [0, 5, 2]])

print(dataset.iloc[:, [0, 5, 2]])

print(dataset.Nome == 'Jetta Variant')
