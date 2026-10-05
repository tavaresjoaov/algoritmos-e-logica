"""
2. Leia do teclado a quantidade n de elementos de um vetor de números
inteiros, considerando que o vetor pode possuir no máximo 100 elementos.

Em seguida, leia os n valores e armazene-os no vetor.

Após a leitura, percorra o vetor e mostre:
■ todos os seus elementos na mesma linha, separados por espaço;
■ a soma de todos os elementos;
■ a quantidade de elementos pares.
"""

v = []

soma = 0
pares = 0

n = int(input("Digite o tamanho do vetor: "))

print("\nDigite os números do vetor:")

for i in range(n):
    num = int(input())
    v.append(num)

print()

print(f"v[{n}] =", end=" ")

for i in range(n):
    print(v[i], end=" ")

    soma += v[i]

    if v[i] % 2 == 0:
        pares += 1

print(f"\nSoma dos elementos = {soma}")
print(f"Quantidade de elementos pares = {pares}")