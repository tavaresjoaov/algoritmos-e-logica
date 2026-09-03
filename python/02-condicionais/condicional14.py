"""
Faça um programa que receba um par de coordenadas inteiras (x, y),
representando um ponto no plano cartesiano.

Determine e mostre em qual quadrante o ponto está localizado:

- 1º quadrante;
- 2º quadrante;
- 3º quadrante;
- 4º quadrante.

O programa também deverá identificar corretamente os casos em que
o ponto está:

- sobre o eixo X;
- sobre o eixo Y;
- exatamente na origem.

Apresente uma mensagem adequada para cada situação.
"""
print("Digite as coordenadas do plano cartesiano:")
x = int(input("x: "))
y = int(input("y: "))

if x > 0 and y > 0:
    print("Está no primeiro quadrante.")
elif x < 0 and y > 0:
    print("Está no segundo quadrante.")
elif x < 0 and y < 0:
    print("Está no terceiro quadrante.")
elif x > 0 and y < 0:
    print("Está no quarto quadrante.")

if y == 0 and x != 0:
    print("Está sobre o eixo x.")
elif x == 0 and y != 0:
    print("Está sobre o eixo y.")
elif x == 0 and y == 0:
    print("Está na origem.")