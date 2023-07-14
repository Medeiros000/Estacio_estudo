from random import randrange, seed

randrange(0, 11)

print(type(randrange))
#print(randrange(0, 11))

notas_matematica = []
seed(11)
for notas in range(8):
    notas_matematica.append(randrange(0, 11))

print(len(notas_matematica))
print(notas_matematica)