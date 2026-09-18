"""
Faça um programa para ler o código, o sexo (M — masculino; F — feminino) 
e o número de horas/aula dadas mensalmente pelos professores de uma 
universidade, sabendo-se que cada hora/aula vale R$ 30,00. 

Emita uma listagem contendo o código, o salário bruto e o salário líquido 
(levando em consideração os descontos explicados a seguir) de todos os 
professores. Mostre também a média dos salários líquidos dos professores 
do sexo masculino e a média dos salários líquidos dos professores do
sexo feminino.

Considere:
■ desconto para homens, 10%, e, para mulheres, 5%;
■ após o cadastro de cada professor, pergunte se deseja cadastrar outro
  professor (S — sim; N — não);
■ o programa deverá cadastrar pelo menos um professor.
"""

codigo = 0
hora_aula = 0

cont_masc = 0
soma_masc = 0

cont_fem = 0
soma_fem = 0

continuar = ""

while True:

    codigo = int(input("Digite o código: "))

    sexo = input("Digite o sexo (M/F): ").upper()

    hora_aula = int(input("Digite o número de horas/aula: "))

    salario_bruto = 30 * hora_aula
    salario_liquido = 0

    if sexo == "M":
        salario_liquido = salario_bruto * 0.90

        cont_masc += 1
        soma_masc += salario_liquido

    elif sexo == "F":
        salario_liquido = salario_bruto * 0.95

        cont_fem += 1
        soma_fem += salario_liquido

    else:
        print("Sexo inválido!")
        continue

    print(f"\nCódigo: {codigo}")
    print(f"Salário bruto: R$ {salario_bruto:.2f}")
    print(f"Salário líquido: R$ {salario_liquido:.2f}")

    continuar = input("\nDeseja cadastrar outro professor? (S/N): ")

    print()

    continuar = continuar.upper()

    if continuar != "S":
        break


media_masc = 0
media_fem = 0

if cont_masc > 0:
    media_masc = soma_masc / cont_masc
else:
    media_masc = 0

if cont_fem > 0:
    media_fem = soma_fem / cont_fem
else:
    media_fem = 0

print("\n----------------------------------------")
print(f"Média dos salários líquidos masculinos: R$ {media_masc:.2f}")
print(f"Média dos salários líquidos femininos: R$ {media_fem:.2f}")