"""
Faça um programa que receba quatro números reais distintos.

Determine quais são os dois menores valores entre os quatro números
e calcule a soma desses dois valores.

Ao final, mostre:

- o menor número;
- o segundo menor número;
- a soma dos dois menores números.

Não utilize vetores ou estruturas de repetição.

Resolva o problema utilizando apenas variáveis e estruturas
condicionais.
"""

n1 = float(input("Digite o primeiro numero: "))
n2 = float(input("Digite o segundo numero: "))
n3 = float(input("Digite o terceiro numero: "))
n4 = float(input("Digite o quarto numero: "))

if n1 < n2:
    menor = n1
    segundo_menor = n2
else:
    menor = n2
    segundo_menor = n1

if n3 < menor:
    segundo_menor = menor
    menor = n3
elif n3 < segundo_menor:
    segundo_menor = n3

if n4 < menor:
    segundo_menor = menor
    menor = n4
elif n4 < segundo_menor:
    segundo_menor = n4

soma = menor + segundo_menor

print(f"Menor numero: {menor}")
print(f"Segundo menor numero: {segundo_menor}")
print(f"Soma dos dois menores numeros: {soma}")