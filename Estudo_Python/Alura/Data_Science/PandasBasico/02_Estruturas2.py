import pandas as pd

pd.set_option('display.max_rows', 1000)
pd.set_option('display.max_columns', 1000)

dataset = pd.read_csv('db.csv', sep=';', index_col=0)

var = pd.DataFrame(dataset)
print(var.info)

