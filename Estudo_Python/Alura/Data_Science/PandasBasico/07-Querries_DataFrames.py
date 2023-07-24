import pandas as pd

pd.set_option('display.max_rows', 1000)
pd.set_option('display.max_columns', 1000)

dataset = pd.read_csv('db.csv', sep=';', index_col=0)

# print(dataset.Motor == 'Motor Diesel')

select = dataset.Motor == 'Motor Diesel'
# print(dataset[select])

select2 = [(dataset.Motor == 'Motor Diesel') & (dataset.Zero_km == True)]
# print(dataset[select2])

querry1 = dataset.query('Motor == "Motor Diesel" and Zero_km == True')

print(querry1)

