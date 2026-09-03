"""
Uma empresa deseja calcular o preço final de seus produtos.

Faça um programa que receba:

- o preço de um produto;
- o tipo do produto:
    A — Alimentação;
    L — Limpeza;
    V — Vestuário;
- a situação de refrigeração:
    S — necessita de refrigeração;
    N — não necessita de refrigeração.

Calcule e mostre:

a) o valor adicional, de acordo com o tipo, preço e necessidade de
refrigeração.

Quando o produto NÃO necessita de refrigeração:

    Alimentação:
        preço < R$ 15,00 → adicional de R$ 2,00;
        preço >= R$ 15,00 → adicional de R$ 5,00.

    Limpeza:
        preço < R$ 10,00 → adicional de R$ 1,50;
        preço >= R$ 10,00 → adicional de R$ 2,50.

    Vestuário:
        preço < R$ 30,00 → adicional de R$ 3,00;
        preço >= R$ 30,00 → adicional de R$ 2,50.

Quando o produto NECESSITA de refrigeração:

    Alimentação → adicional de R$ 8,00;
    Limpeza → adicional de R$ 0,00;
    Vestuário → adicional de R$ 0,00.

b) o imposto:

    preço < R$ 25,00 → 5%;
    preço >= R$ 25,00 → 8%.

c) O preço de custo, ou seja, preço mais imposto.

d) o desconto:

O produto que não preencher nenhum dos requisitos a seguir terá 
desconto de 3%, caso contrário, 0 (zero).

    - tipo Alimentação;
    - necessita de refrigeração.

e) o novo preço:

    preço de custo + valor adicional - desconto.

f) a classificação:

    novo preço < R$ 50,00 → Barato;
    R$ 50,00 <= novo preço < R$ 100,00 → Normal;
    novo preço >= R$ 100,00 → Caro.

Mostre todos os valores calculados e a classificação final.
"""

preco = float(input("Digite o preço do produto: "))

print("\nTipos de produto:")
print("A - Alimentação")
print("L - Limpeza")
print("V - Vestuário")
tipo = input("Digite o tipo do produto: ")

print("\nSituação de refrigeração:")
print("S - Necessita de refrigeração")
print("N - Não necessita de refrigeração")
situacao = input("Digite a situação: ")

tipo = tipo.upper()
situacao = situacao.upper()

match situacao:

    case 'S':
        match tipo:

            case 'A':
                adicional = 8.00

            case 'L':
                adicional = 0.00

            case 'V':
                adicional = 0.00

            case _:
                print("Tipo de produto inválido.")
                exit()

    case 'N':
        match tipo:

            case 'A':
                if preco < 15.00:
                    adicional = 2.00
                else:
                    adicional = 5.00

            case 'L':
                if preco < 10.00:
                    adicional = 1.50
                else:
                    adicional = 2.50

            case 'V':
                if preco < 30.00:
                    adicional = 3.00
                else:
                    adicional = 2.50

            case _:
                print("Tipo de produto inválido.")
                exit()

    case _:
        print("Situação de refrigeração inválida.")
        exit()

if preco < 25.00:
    imposto = preco * 0.05
else:
    imposto = preco * 0.08

custo = preco + imposto

if not (tipo == 'A' and situacao == 'S'):
    desconto = custo * 0.03
else:
    desconto = 0.00

novo_preco = custo + adicional - desconto

print(f"\nAdicional: R$ {adicional:.2f}")
print(f"Imposto: R$ {imposto:.2f}")
print(f"Preço de custo: R$ {custo:.2f}")
print(f"Desconto: R$ {desconto:.2f}")
print(f"Novo preço: R$ {novo_preco:.2f}")

if novo_preco >= 100.00:
    print("Classificação: Caro.")
elif novo_preco >= 50.00:
    print("Classificação: Normal.")
else:
    print("Classificação: Barato.")