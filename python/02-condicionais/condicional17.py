"""
Uma empresa deseja calcular o salário líquido de seus funcionários.

Faça um programa que receba:

- o valor do salário mínimo;
- o turno de trabalho:
    M — Matutino
    V — Vespertino
    N — Noturno
- a categoria do funcionário:
    O — Operário
    G — Gerente
- o número de horas trabalhadas no mês.

O programa deverá calcular:

a) o coeficiente do salário, de acordo com o turno:

    M — 10% do salário mínimo;
    V — 15% do salário mínimo;
    N — 12% do salário mínimo.

b) o salário bruto, calculado pelo número de horas trabalhadas
multiplicado pelo coeficiente do salário;

c) o imposto, de acordo com a categoria e o salário bruto:

Operário:
    salário bruto >= R$ 300,00 → imposto de 5%;
    salário bruto <  R$ 300,00 → imposto de 3%.

Gerente:
    salário bruto >= R$ 400,00 → imposto de 6%;
    salário bruto <  R$ 400,00 → imposto de 4%.

d) a gratificação:

O funcionário receberá R$ 50,00 caso atenda simultaneamente aos
seguintes requisitos:

    - turno noturno;
    - mais de 80 horas trabalhadas.

Caso contrário, receberá R$ 30,00.

e) o auxílio-alimentação:

O funcionário receberá um auxílio correspondente a um terço do
salário bruto caso atenda a pelo menos um dos seguintes requisitos:

    - categoria Operário;
    - coeficiente do salário menor ou igual a R$ 25,00.

Caso contrário, o auxílio será correspondente à metade do salário
bruto.

f) o salário líquido, calculado como:

    salário bruto - imposto + gratificação + auxílio-alimentação.

g) a classificação do salário líquido:

    menor que R$ 350,00 → Mal remunerado;
    de R$ 350,00 até R$ 600,00 → Normal;
    maior que R$ 600,00 → Bem remunerado.

Mostre todos os valores calculados e a classificação final.
"""

salario_minimo = float(input("Digite o salário mínimo: "))

print("\nTurnos de trabalho:")
print("M - Matutino")
print("V - Vespertino")
print("N - Noturno")
turno = input("Digite o turno de trabalho: ")

print("\nCategorias de funcionário:")
print("O - Operário")
print("G - Gerente")
categoria = input("Digite a categoria do funcionário: ")

print("\nDigite o número de horas trabalhadas no mês: ")
horas_trabalhadas = int(input())

turno = turno.upper()
categoria = categoria.upper()

match turno:
    case 'M':
        coeficiente = salario_minimo * 0.10

    case 'V':
        coeficiente = salario_minimo * 0.15

    case 'N':
        coeficiente = salario_minimo * 0.12

    case _:
        print("Turno inválido.")
        exit()

salario_bruto = horas_trabalhadas * coeficiente

match categoria:
    case 'O':
        if salario_bruto >= 300.00:
            imposto = salario_bruto * 0.05
        else:
            imposto = salario_bruto * 0.03

    case 'G':
        if salario_bruto >= 400.00:
            imposto = salario_bruto * 0.06
        else:
            imposto = salario_bruto * 0.04

    case _:
        print("Categoria inválida.")
        exit()

if turno == 'N' and horas_trabalhadas > 80:
    gratificacao = 50.00
else:
    gratificacao = 30.00

if categoria == 'O' or coeficiente <= 25.00:
    auxilio = salario_bruto / 3.00
else:
    auxilio = salario_bruto / 2.00

salario_liquido = salario_bruto - imposto + gratificacao + auxilio

print(f"\nCoeficiente: R$ {coeficiente:.2f}")
print(f"Salário bruto: R$ {salario_bruto:.2f}")
print(f"Imposto: R$ {imposto:.2f}")
print(f"Gratificação: R$ {gratificacao:.2f}")
print(f"Auxílio-alimentação: R$ {auxilio:.2f}")
print(f"Salário líquido: R$ {salario_liquido:.2f}")

if salario_liquido > 600.00:
    print("Classificação: Bem remunerado.")
elif salario_liquido >= 350.00:
    print("Classificação: Normal.")
else:
    print("Classificação: Mal remunerado.")