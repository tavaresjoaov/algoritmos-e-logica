"""
Uma loja utiliza o código V para transação à vista e 
P para transação a prazo. Faça um programa que receba
o código e o valor de quinze transações, calcule e mostre:

■ o valor total das compras à vista;
■ o valor total das compras a prazo;
■ o valor total das compras efetuadas; e
■ o valor da primeira prestação das compras a prazo juntas, 
sabendo-se que serão pagas em três vezes.
"""

qtd_vista = 0
qtd_prazo = 0

for i in range(1, 16):

    codigo = input("Digite o código (V/P): ").upper()

    valor = float(input("Digite o valor da transação: "))

    if codigo == "V":
        qtd_vista += valor

    elif codigo == "P":
        qtd_prazo += valor

    else:
        print("Erro: código inválido.")
        break

    print()

total = qtd_vista + qtd_prazo

print(f"Valor total à vista: R$ {qtd_vista:.2f}")
print(f"Valor total a prazo: R$ {qtd_prazo:.2f}")
print(f"Valor total de compras efetuadas: R$ {total:.2f}")
print(f"Valor da primeira prestação das compras a prazo: R$ {qtd_prazo / 3:.2f}")