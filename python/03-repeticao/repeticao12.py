"""
"""

idade = int(input("Digite a idade: "))

soma = 0
cont = 0
cont_fem = 0

maior = 0
menor = 0

menor_salario = 0
idade_salario = 0
sexo_salario = ""

print("\nPESQUISA ENTRE OS HABITANTES DE UMA REGIÃO")
print("Para encerrar, digite uma idade negativa")

while idade >= 0:

    sexo = input("Digite o sexo (M/F): ").upper()

    salario = float(input("Digite o salário: "))

    soma += salario
    cont += 1

    # Primeira pessoa: inicializa maior, menor e menor salário
    if cont == 1:
        maior = idade
        menor = idade

        menor_salario = salario
        idade_salario = idade
        sexo_salario = sexo

    else:
        if idade > maior:
            maior = idade

        if idade < menor:
            menor = idade

        if salario < menor_salario:
            menor_salario = salario
            idade_salario = idade
            sexo_salario = sexo

    if sexo == 'F' and salario <= 200:
        cont_fem += 1

    idade = int(input("\nDigite a idade: "))


media = 0

if cont > 0:
    media = soma / cont

print(f"\nMédia dos salários do grupo: R$ {media:.2f}")
print(f"Maior idade do grupo: {maior}")
print(f"Menor idade do grupo: {menor}")
print(f"Quantidade de mulheres com salário <= R$ 200,00: {cont_fem}")
print(f"Idade da pessoa com menor salário: {idade_salario}")
print(f"Sexo da pessoa com menor salário: {sexo_salario}")