"""
Faça um programa que receba os dados de 12 produtos, sendo eles:

- o preço unitário;
- a indicação se o produto necessita de refrigeração (S — sim; N — não);
- a categoria do produto (A — alimentação; L — limpeza; V — vestuário).

Para cada produto, calcule o custo de estocagem de acordo com a tabela:

PREÇO UNITÁRIO          REFRIGERAÇÃO     CATEGORIA       CUSTO DE ESTOCAGEM
Até R$ 20,00                              A               R$ 2,00
                                          L               R$ 3,00
                                          V               R$ 4,00

Entre R$ 20,00 e R$ 50,00  S                              R$ 6,00
                           N                              R$ 0,00

Acima de R$ 50,00          S              A               R$ 5,00
                                          L               R$ 2,00
                                          V               R$ 4,00
                           N              A ou V          R$ 0,00
                                          L               R$ 1,00

Calcule também o imposto de cada produto. Se o produto não possuir
simultaneamente categoria A e refrigeração S, o imposto será de 2%
sobre o preço unitário. Caso possua ambos os requisitos, o imposto
será de 4%.

Para cada produto, calcule o preço final, definido como:

preço final = preço unitário + custo de estocagem + imposto

Ao final, mostre:

- a média dos valores adicionais dos 12 produtos, considerando os
  custos de estocagem e os impostos;
- o maior preço final;
- o menor preço final;
- o total de impostos;
- a quantidade de produtos classificados como "Barato";
- a quantidade de produtos classificados como "Normal";
- a quantidade de produtos classificados como "Caro".

A classificação deve seguir:

- preço final até R$ 20,00: Barato;
- preço final entre R$ 20,00 e R$ 100,00: Normal;
- preço final acima de R$ 100,00: Caro.
"""

total_imposto = 0
total_adicional = 0

qtd_caro = 0
qtd_normal = 0
qtd_barato = 0

for i in range(1, 13):

    print(f"PRODUTO {i}:\n")

    preco = float(input("Digite o preço unitário: "))

    refrigeracao = input("Necessita de refrigeração? (S/N): ").upper()

    categoria = input("Digite a categoria (A/L/V): ").upper()

    print()

    if preco <= 20:

        if categoria == "A":
            estocagem = 2

        if categoria == "L":
            estocagem = 3

        if categoria == "V":
            estocagem = 4

    if preco > 20 and preco <= 50:

        if refrigeracao == "S":
            estocagem = 6

        if refrigeracao == "N":
            estocagem = 0

    if preco > 50:

        if refrigeracao == "S":

            if categoria == "A":
                estocagem = 5

            if categoria == "L":
                estocagem = 2

            if categoria == "V":
                estocagem = 4

        if refrigeracao == "N":

            if categoria == "A" or categoria == "V":
                estocagem = 0

            if categoria == "L":
                estocagem = 1

    if categoria == "A" and refrigeracao == "S":
        imposto = 0.04 * preco
    else:
        imposto = 0.02 * preco

    total_imposto += imposto

    adicional = estocagem + imposto
    total_adicional += adicional

    preco_final = preco + estocagem + imposto

    if i == 1:
        maior = preco_final
        menor = preco_final

    else:

        if preco_final > maior:
            maior = preco_final

        if preco_final < menor:
            menor = preco_final

    print(f"Custo de estocagem: R$ {estocagem:.2f}")
    print(f"Imposto: R$ {imposto:.2f}")
    print(f"Preço final: R$ {preco_final:.2f}")

    if preco_final > 100:
        print("Classificação: Caro")
        qtd_caro += 1

    elif preco_final > 20:
        print("Classificação: Normal")
        qtd_normal += 1

    else:
        print("Classificação: Barato")
        qtd_barato += 1

    print()

media = total_adicional / 12

print(f"Média dos valores adicionais: R$ {media:.2f}")
print(f"Maior preço final: R$ {maior:.2f}")
print(f"Menor preço final: R$ {menor:.2f}")
print(f"Total de impostos: R$ {total_imposto:.2f}")
print(f"Quantidade de produtos com preço barato: {qtd_barato}")
print(f"Quantidade de produtos com preço normal: {qtd_normal}")
print(f"Quantidade de produtos com preço caro: {qtd_caro}")