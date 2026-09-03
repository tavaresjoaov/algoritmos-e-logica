"""
Considere duas equações de reta no plano cartesiano:

    y = a1*x + b1

    y = a2*x + b2

Faça um programa que receba os coeficientes a1, b1, a2 e b2 das duas
retas e determine se elas possuem um ponto de interseção.

Caso as retas se intersectem, calcule e mostre as coordenadas (x, y)
do ponto de interseção.

O programa também deverá identificar os casos em que:

- as retas são paralelas e distintas;
- as retas são coincidentes.

Apresente uma mensagem adequada para cada situação.

Utilize os conceitos de equações lineares e plano cartesiano.
"""

print("Digite os coeficientes das duas retas:")

a1 = float(input("a1: "))
b1 = float(input("b1: "))
a2 = float(input("a2: "))
b2 = float(input("b2: "))

if a1 == a2:
    if b1 == b2:
        print("Retas coincidentes.")
    else:
        print("Retas paralelas e distintas.")

    exit()

x = (b2 - b1) / (a1 - a2)
y = a1 * x + b1

print("Retas possuem ponto de interseccao.")
print(f"Coordenadas: ({x:.2f}, {y:.2f})")