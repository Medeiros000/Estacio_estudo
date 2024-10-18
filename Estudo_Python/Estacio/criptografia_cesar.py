letras = [
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
]


def criptografar(texto, chave):
  texto = texto.lower()
  texto_criptografado = ''

  for letra in texto:
    if letra in letras:
      posicao = letras.index(letra)
      posicao = (posicao + chave) % 26
      texto_criptografado += letras[posicao]
    else:
      texto_criptografado += letra

  return texto_criptografado

 
print(criptografar(input('Digite uma palavra para criptografar >> '), 3))


def descriptografar(texto, chave): 
  texto = texto.lower()
  texto_descriptografado = ''

  for letra in texto:
    if letra in letras:
      posicao = letras.index(letra)
      posicao = (posicao - chave) % 26
      texto_descriptografado += letras[posicao]
    else:
      texto_descriptografado += letra

  return texto_descriptografado


# print(descriptografar('dwdfdu', 3))
