"""
* Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) a idade dessa pessoa em anos;
b) a idade dessa pessoa em meses;
c) a idade dessa pessoa em dias;
d) a idade dessa pessoa em semanas.
"""

ano_nascimento = int(input("Digite o ano de nascimento: "))
ano_atual = int(input("Digite o ano atual: "))

idade_anos = ano_atual - ano_nascimento
idade_meses = 12 * idade_anos
idade_dias = 365 * idade_anos
idade_semanas = idade_dias // 7

print(f"Idade em anos: {idade_anos} anos")
print(f"Idade em meses: {idade_meses} meses")
print(f"Idade em dias: {idade_dias} dias")
print(f"Idade em semanas: {idade_semanas} semanas")