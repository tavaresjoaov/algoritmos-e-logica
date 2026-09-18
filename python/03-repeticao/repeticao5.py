"""
Faça um programa que receba a idade, o peso, a altura, 
a cor dos olhos (A — azul; P — preto; V — verde; e C — castanho) 
e a cor dos cabelos (P — preto; C — castanho; L — louro; e R — ruivo) 
de seis pessoas, e que calcule e mostre:

■ a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
■ a média das idades das pessoas com altura inferior a 1,50 m;
■ a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas; e
■ a quantidade de pessoas ruivas e que não possuem olhos azuis.
"""

qtd_idade_peso = 0
soma_idade = 0
cont_idade = 0
cont_azul = 0
cont_ruivo = 0

for i in range(1, 7):

    print(f"PESSOA {i}:")

    idade = int(input("Digite a idade: "))

    peso = float(input("Digite o peso: "))

    altura = float(input("Digite a altura: "))

    olho = input("Digite a cor dos olhos (A/P/V/C): ").upper()

    cabelo = input("Digite a cor do cabelo (P/C/L/R): ").upper()

    if idade > 50 and peso < 60:
        qtd_idade_peso += 1

    if altura < 1.50:
        soma_idade += idade
        cont_idade += 1

    if olho == "A":
        cont_azul += 1

    if cabelo == "R" and olho != "A":
        cont_ruivo += 1

    print()

if cont_idade > 0:
    media = soma_idade / cont_idade
else:
    media = 0

porcentagem = cont_azul / 6 * 100

print(f"Pessoas com idade > 50 e peso < 60: {qtd_idade_peso}")
print(f"Média das idades das pessoas com altura < 1,50: {media:.2f}")
print(f"Porcentagem de pessoas com olhos azuis: {porcentagem:.2f}%")
print(f"Quantidade de pessoas ruivas e que não possuem olhos azuis: {cont_ruivo}")