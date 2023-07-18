nomes = ['Passat', 'Crossfox', 'DS5', 'C4', 'Jetta']
kms = [15000, 12000, 32000, 8000, 50000]

zip(nomes, kms)

for nome, km in zip(nomes, kms):
    if(km < 20000):
        print(nome)