"""
4. Faca um programa que leia e armazene 10 numeros inteiros em
um vetor. Apos o preenchimento, percorra o vetor e realize uma
analise de seus elementos.

O programa devera:
- mostrar todos os numeros pares encontrados;
- informar a quantidade de numeros pares;
- mostrar todos os numeros impares encontrados;
- informar a quantidade de numeros impares.
"""

v = []

pares = 0
impares = 0

print("Digite os números do vetor:")

for i in range(10):
    num = int(input())
    v.append(num)
    
print("\nPares:")

for i in range(10):
    
    if v[i] % 2 == 0:
        print(v[i], end=" ")
        pares += 1
    
print(f"\n\nQuantidade de pares: {pares}")
    
print("\nImpares:")
        
for i in range(10):
    
    if v[i] % 2 != 0:
        print(v[i], end=" ")
        impares += 1
        
print(f"\n\nQuantidade de impares: {impares}")