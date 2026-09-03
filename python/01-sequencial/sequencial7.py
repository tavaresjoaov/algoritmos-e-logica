""" Uma empresa deseja fabricar uma placa metálica composta por um 
retângulo de base B e altura H, unido a um semicírculo cujo diâmetro é igual à altura do retângulo.

Faça um programa que receba:
- a base do retângulo, em centímetros;
- a altura do retângulo, em centímetros;
- o preço do material por metro quadrado.

O programa deverá calcular e mostrar:

a) a área do retângulo;
b) o raio do semicírculo;
c) a área do semicírculo;
d) a área total da placa;
e) a quantidade de material necessária em metros quadrados;
f) o custo total da fabricação da placa. """

import math

b = float(input("Digite a base do retângulo: "))
h = float(input("Digite a altura do retângulo: "))
preco = float(input("Digite o preço do material: "))

area_ret = b * h
raio = h / 2
area_semic = (math.pi * raio ** 2) / 2
area_total = area_ret + area_semic
area_m2 = area_total / 10000
custo = preco * area_m2

print(f"Area do Retangulo = {area_ret:.2f} cm2")
print(f"Raio do Semicirculo = {raio:.2f} cm")
print(f"Area do Semicirculo =  {area_semic:.2f} cm2")
print(f"Area Total = {area_total:.2f} cm2")
print(f"Quantidade de material em m2 = {area_m2:.2f} m2")
print(f"Custo total = {custo:.2f} reais")
