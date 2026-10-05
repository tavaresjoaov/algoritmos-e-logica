"""
Uma empresa deseja realizar um levantamento sobre os candidatos que
se apresentaram para preenchimento de vagas em seu quadro de
funcionários.

Faça um programa que leia, para cada candidato:

- a idade;
- o sexo (M — masculino ou F — feminino);
- se possui experiência no serviço (S — sim ou N — não).

A entrada de dados deve continuar até que seja informada a idade zero.

O programa deverá calcular e mostrar:

- o número de candidatos do sexo feminino;
- o número de candidatos do sexo masculino;
- a idade média dos candidatos que possuem experiência no serviço;
- a porcentagem dos homens com mais de 45 anos em relação ao total
  de homens;
- o número de mulheres com idade inferior a 21 anos e que possuem
  experiência no serviço;
- a menor idade entre as mulheres que possuem experiência no serviço.

Caso não exista nenhum candidato que satisfaça uma das condições
necessárias para determinado cálculo, informe uma mensagem adequada
em vez de realizar uma divisão por zero.
"""

total = 1

total_fem = 0
total_masc = 0

idade_45 = 0
idade_21_s = 0
soma_idade = 0
total_exp = 0

primeira_mulher_exp = True

print("PARA ENCERRAR O PROGRAMA DIGITE UMA IDADE IGUAL A 0\n")

print(f"Candidato {total}:\n")
idade = int(input("Digite a idade: "))

while idade != 0:

    if idade < 0:
        print("Erro: idade inválida")

    else:

        sexo = input("Digite o sexo (M/F): ").upper()
        experiencia = input("Possui experiência no serviço? (S/N): ").upper()

        if sexo == "F":
            total_fem += 1

            if idade < 21 and experiencia == "S":
                idade_21_s += 1

            if experiencia == "S":

                if primeira_mulher_exp:
                    menor_idade = idade
                    primeira_mulher_exp = False

                else:
                    if idade < menor_idade:
                        menor_idade = idade

        if sexo == "M":
            total_masc += 1

            if idade > 45:
                idade_45 += 1

        if experiencia == "S":
            soma_idade += idade
            total_exp += 1

    total += 1

    print(f"\nCandidato {total}:\n")
    idade = int(input("Digite a idade: "))


if total_exp > 0:
    media = soma_idade / total_exp
else:
    media = 0


if total_masc > 0:
    porcentagem = idade_45 / total_masc * 100
else:
    porcentagem = 0


print(f"\nNúmero de candidatos do sexo feminino: {total_fem}")
print(f"Número de candidatos do sexo masculino: {total_masc}")
print(f"Idade média dos candidatos que possuem experiência: {media:.2f}")
print(f"Porcentagem dos homens com idade > 45: {porcentagem:.2f}%")
print(f"Número de mulheres com idade < 21 e que possuem experiência: {idade_21_s}")


if primeira_mulher_exp:
    print("Não há mulheres com experiência para calcular a menor idade.")
else:
    print(f"Menor idade entre as mulheres que possuem experiência: {menor_idade}")