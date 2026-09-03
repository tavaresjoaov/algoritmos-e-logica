""" Uma prefeitura deseja construir uma pequena praça formada por um triângulo equilátero, com uma fonte circular instalada exatamente no centro da praça.

Faça um programa que receba:

o lado l do triângulo, em metros;
o raio r da fonte circular, em metros;
o preço do revestimento por metro quadrado.

O programa deverá calcular e mostrar:

a) a altura do triângulo equilátero;
b) a área total da praça triangular;
c) a área da fonte circular;
d) a área efetivamente revestida, considerando que a área ocupada pela fonte não receberá revestimento;
e) o perímetro externo da praça;
f) a quantidade de revestimento necessária em metros quadrados, considerando ainda 5% de material adicional para perdas e recortes;
g) o custo total do revestimento. """

import math

lado = float(input("Digite o valor do lado do triângulo: "))
raio = float(input("Digite o valor do raio da fonte circular: "))
preco = float(input("Digite o preço do revestimento por metro quadrado: "))

altura = (lado * math.sqrt(3)) / 2
area_tri = (lado * altura) / 2
area_fonte = math.pi * raio ** 2
area_rev = area_tri - area_fonte
perimetro = 3 * lado
area_m2 = area_rev * 1.05
custo = preco * area_m2

print(f"Altura do Triângulo = {altura:.2f} m")
print(f"Área total da praca triangular = {area_tri:.2f} m2")
print(f"Área da fonte circular = {area_fonte:.2f} m2")
print(f"Area revestida = {area_rev:.2f} m2")
print(f"Perímetro externo = {perimetro:.2f} m")
print(f"Quantidade de revestimento em m2 = {area_m2:.2f} m2")
print(f"Custo total = {custo:.2f} reais")