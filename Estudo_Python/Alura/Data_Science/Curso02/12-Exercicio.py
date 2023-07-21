dados = {
    'Crossfox': {'valor': 72000, 'ano': 2005},
    'DS5': {'valor': 125000, 'ano': 2015},
    'Fusca': {'valor': 150000, 'ano': 1976},
    'Jetta': {'valor': 88000, 'ano': 2010},
    'Passat': {'valor': 106000, 'ano': 1998}
}

for item in dados.items():
    if(item[1]['ano'] >= 2000):
        print(item[0])

