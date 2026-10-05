"""
5. Uma turma deseja analisar as notas obtidas pelos alunos em uma
avaliação. Faça um programa que leia a quantidade n de notas e 
armazene-as em um vetor de números reais.

Após a leitura, realize uma análise das notas e mostre:

■ a soma de todas as notas;
■ a média aritmética das notas;
■ a maior nota e a posição em que ela foi encontrada;
■ a menor nota e a posição em que ela foi encontrada;
■ a quantidade de notas acima da média;
■ a quantidade de notas abaixo da média;
■ a quantidade de notas iguais à média.

Considere que:
■ n deve estar entre 1 e 100;
■ a média deve ser apresentada com 2 casas decimais;
"""

notas = []
n = int(input("Digite a quantidade de notas: "))

soma = 0

print("\nDigite as notas armazenadas no vetor:")

for i in range(n):
    nota = float(input())
    notas.append(nota)

    soma += notas[i]

media = soma / n

print(f"\nSoma de todas as notas: {soma:.2f}")
print(f"Média das notas: {media:.2f}")

maior = notas[0]
menor = notas[0]

for i in range(1, n):

    if notas[i] > maior:
        maior = notas[i]

    if notas[i] < menor:
        menor = notas[i]

print(f"Maior nota: {maior:.2f}")
print(f"Menor nota: {menor:.2f}")

acima = 0
abaixo = 0
igual = 0

for i in range(n):

    if notas[i] > media:
        acima += 1

    elif notas[i] < media:
        abaixo += 1

    else:
        igual += 1

print(f"Quantidade de notas acima da média: {acima}")
print(f"Quantidade de notas abaixo da média: {abaixo}")
print(f"Quantidade de notas iguais à média: {igual}")