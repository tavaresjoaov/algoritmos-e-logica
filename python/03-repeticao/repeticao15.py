"""
Em uma eleição presidencial existem quatro candidatos. Os votos são 
informados por meio de código. Os códigos utilizados são:

1, 2, 3, 4      Votos para os respectivos candidatos
5               Voto nulo
6               Voto em branco

Faça um programa que calcule e mostre:

■ o total de votos para cada candidato;
■ o total de votos nulos;
■ o total de votos em branco;
■ a porcentagem de votos nulos sobre o total de votos; e
■ a porcentagem de votos em branco sobre o total de votos.

Para finalizar o conjunto de votos, tem-se o valor zero e, 
para códigos inválidos, o programa deverá mostrar uma mensagem.
"""

cont = cont1 = cont2 = cont3 = cont4 = cont5 = cont6 = 0

print("\nELEIÇÃO PRESIDENCIAL")
print("0. Encerrar")
print("1 ao 4. Candidatos")
print("5. Voto nulo")
print("6. Voto em branco")

print()

codigo = int(input("Digite um código: "))

while codigo != 0:

    if codigo < 0 or codigo > 6:
        print("Erro: código inválido!")

    else:

        cont += 1

        if codigo == 1:
            cont1 += 1

        if codigo == 2:
            cont2 += 1

        if codigo == 3:
            cont3 += 1

        if codigo == 4:
            cont4 += 1

        if codigo == 5:
            cont5 += 1

        if codigo == 6:
            cont6 += 1

    codigo = int(input("\nDigite um código: "))

porcent5 = 0
porcent6 = 0

if cont > 0:
    porcent5 = cont5 / cont * 100
    porcent6 = cont6 / cont * 100


print("\nELEIÇÃO PRESIDENCIAL")
print(f"\nCandidato 1: {cont1} votos")
print(f"Candidato 2: {cont2} votos")
print(f"Candidato 3: {cont3} votos")
print(f"Candidato 4: {cont4} votos")
print(f"Voto nulo: {cont5} votos")
print(f"Voto em branco: {cont6} votos")
print(f"Porcentagem de votos nulos: {porcent5:.2f}%")
print(f"Porcentagem de votos em branco: {porcent6:.2f}%")