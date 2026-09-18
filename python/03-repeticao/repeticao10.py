"""
Uma empresa fez uma pesquisa de mercado para saber se as pessoas 
gostaram ou não de um novo produto lançado. Para cada entrevistado, 
informe o sexo (M — masculino; F — feminino) e sua resposta em relação 
ao produto (S — sim; N — não). Faça um programa que calcule e mostre:

■ o número de pessoas que responderam sim;
■ o número de pessoas que responderam não;
■ o número de mulheres que responderam sim; e
■ a percentagem de homens que responderam não, entre todos os homens
  analisados.

As entrevistas deverão continuar enquanto houver novos entrevistados.
Para encerrar a pesquisa, o usuário deverá informar 0 no campo do sexo.
"""

sexo = input("Digite o sexo (M/F) ou 0 para encerrar: ").upper()

total_sim = 0
total_nao = 0
fem_sim = 0
total_masc = 0
masc_nao = 0

while sexo != '0':

    resposta = input("Gostou do produto? (S/N): ").upper()

    if resposta == 'S':
        total_sim += 1

    if resposta == 'N':
        total_nao += 1

    if sexo == 'F' and resposta == 'S':
        fem_sim += 1

    if sexo == 'M':
        total_masc += 1

    if sexo == 'M' and resposta == 'N':
        masc_nao += 1

    sexo = input("\nDigite o sexo (M/F) ou 0 para encerrar: ").upper()

porcentagem = 0

if total_masc > 0:
    porcentagem = masc_nao / total_masc * 100

print("\nPessoas que responderam SIM:", total_sim)
print("Pessoas que responderam NÃO:", total_nao)
print("Mulheres que responderam SIM:", fem_sim)
print(f"Porcentagem de homens que responderam NÃO: {porcentagem:.2f}%")
