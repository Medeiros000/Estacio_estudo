input_usuario = eval(input('Digite um número para calcular seu fatorial: '))

# Estratégia 01
numero = input_usuario

def fatorial(n):
    fatorial = 1
    for i in range(n, 0, -1):
        fatorial *= i
    return fatorial

print(f'O fatorial de {numero} é {fatorial(numero)}')

# Estratégia 02
numero2 = input_usuario

def fatorial_iterativo(n):
    f = 1
    for i in range(1, n+1):
        f=f*i
    return f

print(f'O fatorial de {numero2} é {fatorial_iterativo(numero2)}')


# Estratégia 03
numero3 = input_usuario

def fatorial_recursivo(n):
    if (n == 0) or (n == 1):
        return 1
    else:
        return n * fatorial_recursivo(n-1)
    
print(f'O fatorial de {numero3} é {fatorial_recursivo(numero3)}') 