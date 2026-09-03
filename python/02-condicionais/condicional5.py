"""
Faça um programa que receba a altura e o sexo de uma pessoa e calcule e 
mostre seu peso ideal, utilizando as seguintes fórmulas (onde h é a altura):

■ para homens: (72.7 * h) – 58.
■ para mulheres: (62.1 * h) – 44.7.
"""

altura = float(input("Digite a sua altura: "))
sexo = input("Digite o seu sexo: ")

if sexo == 'M' or sexo == 'm':
    peso_ideal = (72.7 * altura) - 58
    
elif sexo == 'F' or sexo == 'f':
    peso_ideal = (62.1 * altura) - 44.7
else:
    print("Erro: opcao invalida")
    exit()
    
print(f"Peso ideal = {peso_ideal:.2f} kg")
    