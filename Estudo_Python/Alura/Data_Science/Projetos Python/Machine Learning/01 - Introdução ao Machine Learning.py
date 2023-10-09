
# Definir um modelo de treino.
# Definir uma lista com dados para treino e dados com os resultados esperados.
# Treinar com base na lista de dados e nos resultados esperados.

# features (1 sim, 0 não)
# pelo longo?
# perna curta?
# faz auau?
porco1 = [0, 1, 0]
porco2 = [0, 1, 1]
porco3 = [1, 1, 0]

cachorro1 = [0, 1, 1]

from sklearn.svm import LinearSVC

# features (1 sim, 0 não)
# pelo longo?
# perna curta?
# faz auau?

dados = [porco1, porco2, porco3, cachorro1]
classes = [1, 1, 1, 0]

model = LinearSVC()
model.fit(dados, classes)

misterio1 = [1, 1, 1]
misterio2 = [1, 1, 0]
misterio3 = [0, 1, 1]

teste_x = [misterio1, misterio2, misterio3]
teste_y = [0, 1, 1]


