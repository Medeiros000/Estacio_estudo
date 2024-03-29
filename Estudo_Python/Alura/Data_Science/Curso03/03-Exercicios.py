import pandas as pd

alunos = pd.DataFrame({'Nome': ['Ary', 'Cátia', 'Denis', 'Beto', 'Bruna', 'Dara', 'Carlos', 'Alice'],
                       'Sexo': ['M', 'F', 'M', 'M', 'F', 'F', 'M', 'F'],
                       'Idade': [15, 27, 56, 32, 42, 21, 19, 35],
                       'Notas': [7.5, 2.5, 5.0, 10, 8.2, 7, 6, 5.6],
                       'Aprovado': [True, False, False, True, True, True, False, False]},
                      columns=['Nome', 'Idade', 'Sexo', 'Notas', 'Aprovado'])

# print(alunos)

selecao = alunos['Aprovado'] == True
aprovados = alunos[selecao]
# print(aprovados)

selecao2 = (alunos['Aprovado'] == True) & (alunos['Sexo'] == 'F')
alunas_aprovadas = alunos[selecao2]
# print(alunas_aprovadas)

selecao3 = ((alunos['Idade'] > 10) & (alunos['Idade'] < 20)) | (alunos['Idade'] >= 40)
idade_alunos = alunos[selecao]
print(idade_alunos)

