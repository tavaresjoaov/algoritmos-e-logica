"""
DESAFIO 01 — ANÁLISE GEOMÉTRICA COMPLETA DE UM TRIÂNGULO

Faça um programa que receba os comprimentos de três lados de um
triângulo, em centímetros.

O programa deverá inicialmente verificar se os valores fornecidos
são válidos.

Considere inválidos:
- valores menores ou iguais a zero;
- valores que não possam formar um triângulo.

Caso os valores sejam inválidos, informe o motivo e encerre o programa.

Caso formem um triângulo válido, realize todas as análises abaixo.

A) CLASSIFICAÇÃO QUANTO AOS LADOS

Determine se o triângulo é:
- Equilátero
- Isósceles
- Escaleno

B) IDENTIFICAÇÃO DOS LADOS

Determine:
- maior lado;
- menor lado;
- diferença entre o maior e o menor lado.

C) CLASSIFICAÇÃO QUANTO AOS ÂNGULOS

Utilizando o maior lado como referência, determine se o triângulo é:
- Acutângulo
- Retângulo
- Obtusângulo

Utilize o Teorema de Pitágoras generalizado.

D) CÁLCULO DOS ÂNGULOS

Calcule os três ângulos internos do triângulo utilizando a
Lei dos Cossenos.

Para encontrar cada ângulo, utilize as fórmulas:
cos(A) = (b² + c² - a²) / (2bc)
cos(B) = (a² + c² - b²) / (2ac)
cos(C) = (a² + b² - c²) / (2ab)

Após calcular o valor do cosseno de cada ângulo, utilize a função
trigonométrica inversa "arco cosseno" para descobrir o ângulo:

A = acos(cos(A))
B = acos(cos(B))
C = acos(cos(C))

IMPORTANTE:

A função acos() retorna o ângulo em RADIANOS.
Faça a conversão necessária para obter os resultados em GRAUS.

Ao final, informe os três ângulos com duas casas decimais:

Angulo A: XX.XX°
Angulo B: XX.XX°
Angulo C: XX.XX°


E) ÁREA PELO TEOREMA DE HERON

Calcule a área:
s = (a + b + c) / 2
Area = sqrt(s * (s - a) * (s - b) * (s - c))


F) RAIO DA CIRCUNFERÊNCIA INSCRITA

Calcule o raio da circunferência inscrita no triângulo.

Utilize:
r = Area / s

Informe o resultado em centímetros.


G) RAIO DA CIRCUNFERÊNCIA CIRCUNSCRITA

Calcule o raio da circunferência circunscrita utilizando:

R = (a * b * c) / (4 * Area)

Informe o resultado em centímetros.


H) CLASSIFICAÇÃO DA RELAÇÃO ENTRE OS RAIOS

Calcule:

R / r

e classifique a relação:

- R/r < 2 → Relação pequena
- 2 <= R/r < 3 → Relação moderada
- R/r >= 3 → Relação elevada


I) DETERMINAÇÃO DO MAIOR ÂNGULO

Utilizando os ângulos calculados, determine qual é:
- o maior ângulo;
- o menor ângulo;
- a diferença entre eles.

Não basta utilizar a classificação anterior.
Você deverá realmente comparar os três valores dos ângulos.

J) IDENTIFICAÇÃO DO TRIÂNGULO QUANTO À SIMETRIA ANGULAR

Analise os três ângulos calculados e determine:

- Equiangular → três ângulos iguais;
- Bisimétrico → exatamente dois ângulos iguais;
- Assimétrico → três ângulos diferentes.

Como os ângulos são calculados utilizando valores do tipo double,
pequenas diferenças podem surgir mesmo quando, matematicamente,
os valores deveriam ser iguais.

Considere dois ângulos iguais quando a diferença entre eles for
menor que 0.000001.

Para verificar a diferença independentemente de ela ser positiva
ou negativa, utilize a função abs(), que retorna o valor absoluto
de um número:

abs(5)  → 5
abs(-5) → 5

K) VERIFICAÇÃO DA SOMA DOS ÂNGULOS

Calcule:

soma = A + B + C

Verifique se a soma é aproximadamente 180°.

Devido aos cálculos com double, utilize a mesma tolerância de
0.000001 para determinar se a soma pode ser considerada igual
a 180°.

Informe:

- Soma angular válida
ou
- Erro na soma angular

RESTRIÇÕES

O programa não pode utilizar:

- for
- while
- do while
- vetores
- strings para armazenar dados
- funções criadas pelo usuário
"""

import math

print("Digite o primeiro lado do triângulo:")
a = float(input())

print("Digite o segundo lado do triângulo:")
b = float(input())

print("Digite o terceiro lado do triângulo:")
c = float(input())

invalido = a <= 0 or b <= 0 or c <= 0 or \
           a >= b + c or b >= a + c or c >= a + b

if invalido:
    print("Dados inválidos.")
    exit()

if a == b and b == c:
    print("Triângulo Equilátero.")
elif a == b or b == c or a == c:
    print("Triângulo Isósceles.")
else:
    print("Triângulo Escaleno.")

maior = a

if b > maior:
    maior = b

if c > maior:
    maior = c

menor = a

if b < menor:
    menor = b

if c < menor:
    menor = c

diferenca = maior - menor

print("Maior lado =", maior)
print("Menor lado =", menor)
print("Diferença do maior pelo menor =", diferenca)

maior_quadrado = maior * maior

if maior == a:
    soma_outros_quadrados = b * b + c * c
elif maior == b:
    soma_outros_quadrados = a * a + c * c
else:
    soma_outros_quadrados = a * a + b * b

if maior_quadrado > soma_outros_quadrados:
    print("Triângulo Obtusângulo.")
elif maior_quadrado == soma_outros_quadrados:
    print("Triângulo Retângulo.")
else:
    print("Triângulo Acutângulo.")

cosA = (b * b + c * c - a * a) / (2 * b * c)
cosB = (a * a + c * c - b * b) / (2 * a * c)
cosC = (a * a + b * b - c * c) / (2 * a * b)

anguloA = math.acos(cosA)
anguloB = math.acos(cosB)
anguloC = math.acos(cosC)

anguloA = anguloA * 180.0 / math.pi
anguloB = anguloB * 180.0 / math.pi
anguloC = anguloC * 180.0 / math.pi

print(f"Ângulo A: {anguloA:.2f} graus")
print(f"Ângulo B: {anguloB:.2f} graus")
print(f"Ângulo C: {anguloC:.2f} graus")

perimetro = a + b + c
s = perimetro / 2.0

area = math.sqrt(s * (s - a) * (s - b) * (s - c))

print(f"Perímetro: {perimetro:.2f}")
print(f"Área: {area:.2f}")

raio_inscrita = area / s

print(f"Raio da circunferência inscrita: {raio_inscrita:.2f}")

raio_circunscrita = (a * b * c) / (4 * area)

print(f"Raio da circunferência circunscrita: {raio_circunscrita:.2f}")

relacao = raio_circunscrita / raio_inscrita

if relacao >= 3:
    print("Relação entre os raios: elevada.")
elif relacao >= 2:
    print("Relação entre os raios: moderada.")
else:
    print("Relação entre os raios: pequena.")

maior_angulo = anguloA

if anguloB > maior_angulo:
    maior_angulo = anguloB

if anguloC > maior_angulo:
    maior_angulo = anguloC

menor_angulo = anguloA

if anguloB < menor_angulo:
    menor_angulo = anguloB

if anguloC < menor_angulo:
    menor_angulo = anguloC

diferenca_angulo = maior_angulo - menor_angulo

print(f"Maior ângulo: {maior_angulo:.2f} graus")
print(f"Menor ângulo: {menor_angulo:.2f} graus")
print(f"Diferença entre os ângulos: {diferenca_angulo:.2f} graus")

TOLERANCIA = 0.000001

angulos_iguais_AB = abs(anguloA - anguloB) < TOLERANCIA
angulos_iguais_AC = abs(anguloA - anguloC) < TOLERANCIA
angulos_iguais_BC = abs(anguloB - anguloC) < TOLERANCIA

if angulos_iguais_AB and angulos_iguais_AC:
    print("Classificação angular: Equiangular.")
elif angulos_iguais_AB or angulos_iguais_AC or angulos_iguais_BC:
    print("Classificação angular: Bisimétrico.")
else:
    print("Classificação angular: Assimétrico.")

soma_angulos = anguloA + anguloB + anguloC

if abs(soma_angulos - 180.0) < TOLERANCIA:
    print(f"Soma angular válida: {soma_angulos:.2f} graus")
else:
    print(f"Erro na soma angular: {soma_angulos:.2f} graus")