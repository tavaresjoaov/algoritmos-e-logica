"""
Faça um programa que receba dez números, calcule e mostre a 
soma dos números pares e a soma dos números primos.
"""

soma_pares = 0
soma_primos = 0

print("Digite dez números:")

for i in range(1, 11):

    num = int(input())

    if num % 2 == 0:
        soma_pares += num

    primo = True

    if num < 2:
        primo = False
    else:
        for divisor in range(2, num):
            if num % divisor == 0:
                primo = False
                break

    if primo:
        soma_primos += num

print(f"Soma dos números pares: {soma_pares}")
print(f"Soma dos números primos: {soma_primos}")