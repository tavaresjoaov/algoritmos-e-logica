"""
Faça um programa que leia cinco grupos de quatro números e mostre-os 
na ordem lida. Em seguida, organize-os em ordem crescente e decrescente.
"""

print("Digite quatro números em cada grupo:\n")
print()

for i in range(1, 6):

    print(f"GRUPO {i}:")
    n1 = int(input())
    n2 = int(input())
    n3 = int(input())
    n4 = int(input())
    print()

    print(f"Ordem lida: {n1}, {n2}, {n3}, {n4}")
    
    for j in range(3):

        if n1 > n2:
            aux = n1
            n1 = n2
            n2 = aux

        if n2 > n3:
            aux = n2
            n2 = n3
            n3 = aux

        if n3 > n4:
            aux = n3
            n3 = n4
            n4 = aux

    print(f"Ordem crescente: {n1}, {n2}, {n3}, {n4}")
    print(f"Ordem decrescente: {n4}, {n3}, {n2}, {n1}")
    print()