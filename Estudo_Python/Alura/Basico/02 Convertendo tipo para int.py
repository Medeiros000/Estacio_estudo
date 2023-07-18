def verifica_se_pode_dirigir_sem_parametros():
    idade = int(input('Qual a sua idade? '))
    if idade >= 18:
        print('Tem permissão para dirigir')
    else:
        print('Não tem permissão para dirigir')

verifica_se_pode_dirigir_sem_parametros()