"""
Faça um programa que receba:

■ o preço do produto;
■ a categoria:
  1 — Limpeza
  2 — Alimentação
  3 — Vestuário
■ a situação:
  R — Produtos que necessitam de refrigeração;
  N — Produtos que não necessitam de refrigeração.

Calcule e mostre:

■ O valor do aumento, usando as regras que se seguem.

   PREÇO         CATEGORIA       AUMENTO
   <= R$ 25         1              5%
   <= R$ 25         2              8%
   <= R$ 25         3             10%

   > R$ 25          1             12%
   > R$ 25          2             15%
   > R$ 25          3             18%

O produto que preencher pelo menos um dos seguintes 
requisitos pagará imposto equivalente a 5% do preço; 
caso contrário, pagará 8%. Os requisitos são:

Categoria: 2
Situação: R

■ O novo preço, ou seja, o preço mais aumento menos imposto.
■ A classificação, usando as regras a seguir.

   NOVO PREÇO                       CLASSIFICAÇÃO
   <= R$ 50,00                          Barato
   Entre R$ 50,00 e R$ 120,00           Normal
   >= R$ 120,00                         Caro

"""

preco = float(input("Digite o preco do produto: "))

print("1 — Limpeza")
print("2 — Alimentação")
print("3 — Vestuário")
categoria = int(input("Digite a categoria: "))

situacao = input("Digite a situação (R/N): ")

if situacao != 'R' and situacao != 'r' and situacao != 'N' and situacao != 'n':
    print("Erro: situação inválida.")
    exit()

if preco <= 25:
    match categoria:
        case 1:
            aumento = preco * 0.05
        case 2:
            aumento = preco * 0.08
        case 3:
            aumento = preco * 0.10
        case _:
            print("Erro: categoria inválida")
            exit()
else:
    match categoria:
        case 1:
            aumento = preco * 0.12
        case 2:
            aumento = preco * 0.15
        case 3:
            aumento = preco * 0.18
        case _:
            print("Erro: categoria inválida")
            exit()
            
if categoria == 2 or situacao == 'R' or situacao == 'r':
    imposto = preco * 0.05
else:
    imposto = preco * 0.08

novo_preco = preco + aumento - imposto

print(f"Valor do aumento: R$ {aumento:.2f}")
print(f"Novo preco: R$ {novo_preco:.2f}")

if novo_preco >= 120:
    print("Caro")
elif novo_preco > 50:
    print("Normal")
else:
    print("Barato")