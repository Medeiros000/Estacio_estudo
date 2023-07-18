def e_par(n):
    r = (n%2 == 0)
    print(r)
    return r
    

def soma_par(lst):
    soma = 0
    for num in lst:
        if e_par(num):
            soma += num
    return soma

lista = [10, 2, 5, 7, 6, 3]
soma = soma_par(lista)

print(f' A soma dos números pares da lista foi {soma}')