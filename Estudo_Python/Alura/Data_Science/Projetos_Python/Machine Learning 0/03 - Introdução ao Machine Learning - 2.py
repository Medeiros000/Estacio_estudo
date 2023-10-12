import pandas as pd
from sklearn.svm import LinearSVC
from sklearn.metrics import accuracy_score      
from sklearn.model_selection import train_test_split

uri = "https://gist.githubusercontent.com/guilhermesilveira/2d2efa37d66b6c84a722ea627a897ced/raw/10968b997d885cbded1c92938c7a9912ba41c615/tracking.csv"

dados = pd.read_csv(uri)

mapa = {
        "home" : "principal",
        "how_it_works" : "como_funciona",
        "contact" : "contato",
        "bought" : "comprou"
}

dados = dados.rename(mapa, axis=1)

# print(dados.head())

x = dados[['principal', 'como_funciona', 'contato']]
y = dados["comprou"]
# print(y.head()) 

# print(dados.shape)

treino_x = x[:75]
treino_y = y[:75]
teste_x = x[75:]
teste_y = y[75:]

# print("Treinaremos com %d elementos e testaremos com %d elementos" % (len(treino_x), len(teste_x)))

modelo = LinearSVC()
modelo.fit(treino_x, treino_y)
previsoes = modelo.predict(teste_x)

acuracia = accuracy_score(teste_y, previsoes) * 100
# print("A acurácia foi %.2f%%" % acuracia)

# Usando o train_test_split

SEED = 20

treino_x, teste_x, treino_y, teste_y = train_test_split(x, y, random_state=20, test_size=0.25, stratify=y)
print('treino')
print("Treinaremos com %d elementos e testaremos com %d elementos 2" % (len(treino_x), len(teste_x)))

modelo = LinearSVC()
modelo.fit(treino_x, treino_y)
previsoes = modelo.predict(teste_x)

acuracia = accuracy_score(teste_y, previsoes) * 100
print("A acurácia foi %.2f%%" % acuracia)

print(treino_y.value_counts())
print(teste_y.value_counts())



