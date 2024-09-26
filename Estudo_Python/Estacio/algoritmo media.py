# Execício sobre vetores

qt_alunos = int(input('Quantos alunos tem na sala: '))
medias = []

for n in range(qt_alunos):
  valor = int(input(f'Digite a nota do aluno {n+1}: '))
  medias.append(valor)

soma_media_geral = 0

for media in medias:
  soma_media_geral += media

media_da_turma = soma_media_geral / qt_alunos

print(f'A média da turma de {qt_alunos} alunos foi {media_da_turma}')
