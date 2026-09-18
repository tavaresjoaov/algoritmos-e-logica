"""
"""

amostra = 0

for i in range(1, 6):

    cont = 0
    soma = 0
    media = 0
    maior = 0
    menor = 0

    print(f"LOTE {i}")

    print("\nDigite a concentração de cada amostra em mg/L (-1 para encerrar):")
    amostra = float(input())

    while amostra != -1:

        if amostra < 0:
            print("Erro: valor negativo!")

        else:

            soma += amostra
            cont += 1

            if cont == 1:
                menor = amostra
                maior = amostra

            else:
                if amostra > maior:
                    maior = amostra

                if amostra < menor:
                    menor = amostra

        amostra = float(input())

    if cont > 0:
        media = soma / cont

    print(f"\nAmostras analisadas: {cont}")
    print(f"Concentração média: {media:.2f} mg/L")
    print(f"Maior concentração: {maior:.2f} mg/L")
    print(f"Menor concentração: {menor:.2f} mg/L")

    print()