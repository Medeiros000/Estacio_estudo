def OperacaoMatriz(n):
  A = [0] * n
  i = 1
  while i < n:
    A[i] = 0
    i += 1

  for i in range(1, n):
    for j in range(1, n):
      A[i] += i * j
  return A

# Exemplo de uso
n = 5
resultado = OperacaoMatriz(n)
print(resultado)


# Output:
#     1   2    3     4
# 1   1   3    6    10
# 2	  2	  6	  12	  20
# 3	  3	  9	  18	  30
# 4	  4	  12	24	  40
