def fatorial(n):
  if n == 0:
    return 1
  else:
    return n * fatorial(n-1)


n = 5
resultado = fatorial(n)
print(resultado)

def fatorial_iterativo(n):
  fat = 1
  for i in range(1, n+1):
    fat *= i
  return fat

n = 5
resultado = fatorial_iterativo(n)
print(resultado)