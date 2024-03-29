dados = {
    'Crossfox': {'km': 35000, 'ano': 2005},
    'DS5': {'km': 17000, 'ano': 2015},
    'Fusca': {'km': 130000, 'ano': 1979},
    'Jetta': {'km': 56000, 'ano': 2011},
    'Passat': {'km': 62000, 'ano': 1999}
}


def km_media(dataset, ano_atual):
    for item in dataset.items():
        result = item[1]['km'] / (ano_atual - item[1]['ano'])
        print(result)


km_media(dados, 2019)


def km_media2(dataset, ano_atual):
    result = {}
    for item in dataset.items():
        media = item[1]['km'] / (ano_atual - item[1]['ano'])
        result.update({item[0]: media})
    return result


# s = km_media2(dados, 2019)
# print(s)


def km_media3(dataset, ano_atual):
    result = {}
    for item in dataset.items():
        media = item[1]['km'] / (ano_atual - item[1]['ano'])
        item[1].update({'km_media': media})
        result.update({item[0]: item[1]})
    return result


t = km_media3(dados, 2019)
print(t)
