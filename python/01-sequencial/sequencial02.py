"""
Faça um programa que receba duas notas,
calcule emostre a média ponderada dessas notas, 
considerando peso 2 para a primeira e peso 3 para a segunda.
"""

n1 = float(input("Digite a primeira nota: "))
n2 = float(input("Digite a segunda nota: "))

media = (n1 * 2 + n2 * 3)/5

print(f"Media Ponderada = {media:.2f}")