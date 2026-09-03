"""
Faça um programa que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado.
"""

peso = float(input("Digite o peso: "))

novo_peso1 = peso * 1.15
novo_peso2 = peso * 0.80

print(f"Se a pessoa engordar: {novo_peso1:.2f} kg")
print(f"Se a pessoa emagrecer: {novo_peso2:.2f} kg")