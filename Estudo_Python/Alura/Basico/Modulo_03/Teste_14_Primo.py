numero = int(input('Digite um número para testar se é primo: '))

def e_primo(n):
    if n < 2:
        return False
    i=n//2
    while i > 1:
        if n%i == 0:
            return False
        i -= 1
    return True

def imprimir_resultado(n):
    if e_primo(n):
        print(f'O número {n} é primo')
    else:
        print(f'O número {n} não é primo')


imprimir_resultado(numero)