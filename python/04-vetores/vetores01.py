"""
1. Declare um vetor de 5 números inteiros e inicialize-o com os
valores:

    {10, 20, 30, 40, 50}

Utilizando uma estrutura de repetição, percorra o vetor e mostre,
para cada posição:

    v[i] = valor

um elemento por linha.

Ao final, mostre também:

■ o primeiro elemento do vetor;
■ o último elemento do vetor.
"""

v = [10, 20, 30, 40, 50]

for i in range(5):
    print(f"v[{i}] = {v[i]}")

print("\nPrimeiro elemento:", v[0])
print("Último elemento:", v[4])