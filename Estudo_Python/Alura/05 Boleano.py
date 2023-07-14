idade = 15
print(str(idade>=18))

permissoes = []
idades = [20, 14, 40]

def verifica_se_pode_dirigir(idades, permissoes):
    for idade in idades:
        if idade >= 18:
            permissoes.append(True)
        else:
            permissoes.append(False)

verifica_se_pode_dirigir(idades, permissoes)

print(permissoes)

for permissao in permissoes:
    if permissao == True:
        print('Tem permissão para dirigir')
    else:
        print('Não tem permissão para dirigir')