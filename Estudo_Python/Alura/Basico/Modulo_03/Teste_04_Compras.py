preco_unitario = 10
desconto10 = 0.1
desconto20 = 0.2
quantidade = eval(input("Digite a quantidade de itens que vai comprar: "))

if quantidade < 10:
    print("Você não ganhou desconto")
    valor_final = preco_unitario * quantidade
elif quantidade >= 10:
    print("Você ganhou um desconto de 10%")
    valor_final = preco_unitario * quantidade * (1- desconto10)
else:
    print("Você ganhou um desconto de 20%")
    valor_final = preco_unitario * quantidade * (1- desconto20)

print(f'O valor final da compra é: {valor_final}')