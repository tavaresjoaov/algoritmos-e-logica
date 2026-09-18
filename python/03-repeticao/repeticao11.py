"""
Foi feita uma pesquisa sobre a audiência de canal de TV em várias casas de uma cidade, em determinado
dia. Para cada casa consultada foi fornecido o número do canal (4, 5, 7, 12) e o número de pessoas que
estavam assistindo àquele canal. Se a televisão estivesse desligada, nada era anotado, ou seja, essa casa
não entrava na pesquisa. Faça um programa que:

■ leia um número indeterminado de dados (número do canal e número de pessoas que estavam as-
sistindo); e

■ calcule e mostre a porcentagem de audiência de cada canal.

Para encerrar a entrada de dados, digite o número do canal ZERO.
"""

canal = int(input("Digite o número do canal (4, 5, 7, 12) ou 0 para encerrar: "))

cont4 = 0
cont5 = 0
cont7 = 0
cont12 = 0
soma = 0

while canal != 0:

    if canal != 4 and canal != 5 and canal != 7 and canal != 12:
        print("Erro: canal inválido!")
    else:

        pessoas = int(input("Digite o número de pessoas assistindo: "))

        if canal == 4:
            cont4 += pessoas

        if canal == 5:
            cont5 += pessoas

        if canal == 7:
            cont7 += pessoas

        if canal == 12:
            cont12 += pessoas

        soma += pessoas

    print()

    canal = int(input("Digite o número do canal (4, 5, 7, 12) ou 0 para encerrar: "))

audiencia4 = 0
audiencia5 = 0
audiencia7 = 0
audiencia12 = 0

if soma > 0:
    audiencia4 = cont4 / soma * 100
    audiencia5 = cont5 / soma * 100
    audiencia7 = cont7 / soma * 100
    audiencia12 = cont12 / soma * 100

print(f"\nAudiência do canal 4: {audiencia4:.2f}%")
print(f"Audiência do canal 5: {audiencia5:.2f}%")
print(f"Audiência do canal 7: {audiencia7:.2f}%")
print(f"Audiência do canal 12: {audiencia12:.2f}%")