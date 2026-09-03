"""
Faça um programa que receba um número inteiro de exatamente cinco
dígitos e determine se ele é um palíndromo.

Um número é considerado palíndromo quando pode ser lido da esquerda
para a direita e da direita para a esquerda apresentando o mesmo valor.

Exemplos:

    92929 → palíndromo
    97379 → palíndromo
    12345 → não é palíndromo

O programa deverá verificar inicialmente se o número possui
exatamente cinco dígitos.

Depois, analise seus dígitos para determinar se o número é ou não
um palíndromo.

Não utilize strings, vetores ou estruturas de repetição.
"""

numero = int(input("Digite um número de 5 digitos: "))

if numero < 10000 or numero > 99999:
    print("Número inválido.")
    exit()

unidade = numero % 10
numero = numero // 10

dezena = numero % 10
numero = numero // 10

centena = numero % 10
numero = numero // 10

milhar = numero % 10
numero = numero // 10

dezena_milhar = numero % 10

if unidade == dezena_milhar and dezena == milhar:
    print("É palíndromo.")
else:
    print("Não é palíndromo.")