"""
Uma fábrica possui 15 operadores. Cada operador é classificado de
acordo com a quantidade de peças produzidas por mês:

- Classe 1: até 30 peças por mês;
- Classe 2: de 31 a 50 peças por mês;
- Classe 3: mais de 50 peças por mês.

A Classe 1 recebe salário mínimo.

A Classe 2 recebe salário mínimo mais 3% desse salário por peça
produzida acima das 30 peças iniciais.

A Classe 3 recebe salário mínimo mais 5% desse salário por peça
produzida acima das 30 peças iniciais.

Faça um programa que receba, para cada um dos 15 operadores:

- o número do operador;
- a quantidade de peças produzidas no mês;
- o sexo do operador (M — masculino ou F — feminino);
- o valor do salário mínimo.

Para cada operador, calcule e mostre seu número e seu salário.

Ao final, calcule e mostre:

- o total da folha de pagamento da fábrica;
- o número total de peças produzidas no mês;
- a média de peças produzidas pelos homens;
- a média de peças produzidas pelas mulheres;
- o número do operador que recebeu o maior salário;
- o valor do maior salário.

Caso não exista nenhum operador de determinado sexo, informe que não
há operadores desse sexo para calcular a média.
"""

total_folha = 0
total_pecas = 0

total_pecas_homens = 0
total_homens = 0

total_pecas_mulheres = 0
total_mulheres = 0

for i in range(1, 16):

    print(f"OPERADOR {i}\n")

    operador = int(input("Digite o número do operador: "))

    pecas = int(input("Digite a quantidade de peças produzidas: "))

    sexo = input("Digite o sexo (M/F): ").upper()

    salario_minimo = float(input("Digite o valor do salário mínimo: R$ "))

    print()

    if pecas <= 30:
        salario = salario_minimo

    elif pecas <= 50:
        salario = salario_minimo + (pecas - 30) * salario_minimo * 0.03

    else:
        salario = salario_minimo + (pecas - 30) * salario_minimo * 0.05

    print(f"Número do operador: {operador}")
    print(f"Salário: R$ {salario:.2f}")

    print()

    total_folha += salario
    total_pecas += pecas

    if sexo == "M":
        total_homens += 1
        total_pecas_homens += pecas

    elif sexo == "F":
        total_mulheres += 1
        total_pecas_mulheres += pecas

    if i == 1:
        maior_salario = salario
        operador_maior = operador

    elif salario > maior_salario:
        maior_salario = salario
        operador_maior = operador


print(f"Total da folha de pagamento: R$ {total_folha:.2f}")

print(f"Total de peças produzidas: {total_pecas}")

if total_homens > 0:

    media_homens = total_pecas_homens / total_homens

    print(f"Média de peças produzidas pelos homens: {media_homens:.2f}")

else:
    print("Não há operadores homens para calcular a média.")


if total_mulheres > 0:

    media_mulheres = total_pecas_mulheres / total_mulheres

    print(f"Média de peças produzidas pelas mulheres: {media_mulheres:.2f}")

else:
    print("Não há operadoras mulheres para calcular a média.")


print(f"Operador que recebeu o maior salário: {operador_maior}")
print(f"Maior salário: R$ {maior_salario:.2f}")