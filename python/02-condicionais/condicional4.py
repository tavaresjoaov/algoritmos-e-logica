"""
Faça um programa que receba o preço de um produto, calcule e mostre, 
de acordo com as tabelas a seguir, o novo preço e a classificação.

TABELA 1 — PERCENTUAL DE AUMENTO

PREÇO                           %
Até R$ 50,00                    5
Entre R$ 50,00 e R$ 100,00      10
Acima de R$ 100,00              15


TABELA 2 — CLASSIFICAÇÕES

NOVO PREÇO                                  CLASSIFICAÇÃO
Até R$ 80,00                                Barato
Entre R$ 80,00 e R$ 120,00 (inclusive)      Normal
Entre R$ 120,00 e R$ 200,00 (inclusive)     Caro
Maior que R$ 200,00                         Muito caro

"""

preco = float(input("Digite o preço do produto: "))

if preco > 100:
    novo_preco = preco * 1.15
elif preco > 50:
    novo_preco = preco * 1.10
else:
    novo_preco = preco * 1.05
    
print(f"Novo preço = R$ {novo_preco:.2f}")

if novo_preco > 200:
    print("Muito caro")
elif novo_preco > 120:
    print("Caro")
elif novo_preco > 80:
    print("Normal")
else:
    print("Barato")