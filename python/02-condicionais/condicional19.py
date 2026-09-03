"""
Faça um programa que receba a medida de um ângulo em graus.

Determine em qual quadrante da circunferência trigonométrica o ângulo
se encontra.

Para ângulos maiores que 360° ou menores que -360°, reduza o ângulo
para sua posição equivalente dentro de uma volta completa.

O programa também deverá:

- identificar quando o ângulo está exatamente sobre um dos eixos;
- informar a quantidade de voltas realizadas;
- informar o sentido da volta:
    ângulo positivo → sentido anti-horário;
    ângulo negativo → sentido horário.

O programa deverá funcionar corretamente tanto para ângulos positivos
quanto negativos.
"""

angulo = int(input("Digite a medida de um ângulo em graus: "))

angulo_original = angulo

# Calcula a quantidade de voltas completas
if angulo < 0:
    voltas = (-angulo) // 360
else:
    voltas = angulo // 360

# Reduz o ângulo para uma volta completa
angulo = angulo % 360

# Ajusta ângulos negativos
if angulo < 0:
    angulo = angulo + 360

print(f"\nÂngulo equivalente: {angulo}°")
print(f"Voltas completas: {voltas}")

if angulo_original > 0:
    print("Sentido: anti-horário")
elif angulo_original < 0:
    print("Sentido: horário")
else:
    print("Sem movimento.")

if angulo == 0 or angulo == 180:
    print("Sobre o eixo X")
elif angulo == 90 or angulo == 270:
    print("Sobre o eixo Y")
elif angulo > 0 and angulo < 90:
    print("Primeiro quadrante")
elif angulo > 90 and angulo < 180:
    print("Segundo quadrante")
elif angulo > 180 and angulo < 270:
    print("Terceiro quadrante")
elif angulo > 270 and angulo < 360:
    print("Quarto quadrante")