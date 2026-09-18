"""

Faça um programa que receba o valor de um carro e mostre 
uma tabela com os seguintes dados: preço final, quantidade 
de parcelas e valor da parcela. Considere o seguinte:

■ o preço final para compra à vista tem desconto de 20%;
■ a quantidade de parcelas pode ser: 6, 12, 18, 24, 30, 
36, 42, 48, 54 e 60;

Os percentuais de acréscimo encontram-se na tabela a seguir:

QUANTIDADE DE PARCELAS      PERCENTUAL DE ACRÉSCIMO SOBRE O PREÇO FINAL

6                           3%
12                          6%
18                          9%
24                          12%
30                          15%
36                          18%
42                          21%
48                          24%
54                          27%
60                          30%
"""

preco = float(input("Digite o valor do carro: R$ "))

valor_parcela = 0
qtd_parcelas = 0
acrescimo = 0
percentual = 0

preco_vista = 0.8 * preco

print("Preço final\tParcelas\tValor da parcela")
print(f"R$ {preco_vista:.2f}\t1x\t\tR$ {preco_vista:.2f}")

for i in range(1, 11):
    qtd_parcelas += 6
    percentual += 0.03

    acrescimo = percentual * preco_vista
    preco_parcelado = preco_vista + acrescimo
    valor_parcela = preco_parcelado / qtd_parcelas

    print(f"R$ {preco_parcelado:.2f}\t{qtd_parcelas}x\t\tR$ {valor_parcela:.2f}")