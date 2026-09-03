"""
Uma fonte sonora emite energia acústica igualmente em todas as direções. 
Considere que a energia se distribui pela superfície de uma esfera ao redor da fonte.
Faça um programa que receba:

- a potência sonora P da fonte, em watts (W);
- a distância d entre a fonte e o observador, em metros (m).

O programa deverá calcular e mostrar:

a) a área da superfície esférica atingida pelo som na distância informada;
b) a intensidade sonora I, em W/m²;
c) o nível sonoro L, em decibéis (dB).

Considere:
A = 4πd²
I= P/A

Para calcular o nível sonoro, utilize:
L= 10 * log 10 (I/I0)

Considere a intensidade de referência:
I0 = 10-¹² W/m²
"""

import math

pot_som = float(input("Digite a potencia sonora em watts: "))
dist = float(input("Digite a distancia em metros: "))

area = 4 * math.pi * dist ** 2
intens = pot_som / area
intens_ref = 10 ** -12
nivel_sonoro = 10 * math.log10(intens/intens_ref)

print(f"Area da superficie esferica = {area:.2f} m2")
print(f"Intensidade sonora = {intens:.6e} W/m2")
print(f"Nivel sonoro =  {nivel_sonoro:.2f} dB")

