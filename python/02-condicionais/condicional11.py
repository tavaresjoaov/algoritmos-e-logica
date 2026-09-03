"""
Leia o nome e o número de votos de 3 candidatos concorrentes 
e imprima a classificação do 1º ao 3º colocado em ordem decrescente, 
utilizando exclusivamente estruturas condicionais aninhadas (if-else), 
sem o uso de listas ou funções como sort()
"""

cand1 = input("Digite o nome do candidato 1: ")
cand2 = input("Digite o nome do candidato 2: ")
cand3 = input("Digite o nome do candidato 3: ")

v1 = int(input(f"Digite a quantidade de votos de {cand1}: "))
v2 = int(input(f"Digite a quantidade de votos de {cand2}: "))
v3 = int(input(f"Digite a quantidade de votos de {cand3}: "))

print("\n--- CLASSIFICAÇÃO ---")

if v1 > v2:

    if v1 > v3:
        print("1º lugar:", cand1, "-", v1, "votos")

        if v2 > v3:
            print("2º lugar:", cand2, "-", v2, "votos")
            print("3º lugar:", cand3, "-", v3, "votos")
        else:
            print("2º lugar:", cand3, "-", v3, "votos")
            print("3º lugar:", cand2, "-", v2, "votos")

    else:
        print("1º lugar:", cand3, "-", v3, "votos")
        print("2º lugar:", cand1, "-", v1, "votos")
        print("3º lugar:", cand2, "-", v2, "votos")

else:

    if v2 > v3:
        print("1º lugar:", cand2, "-", v2, "votos")

        if v1 > v3:
            print("2º lugar:", cand1, "-", v1, "votos")
            print("3º lugar:", cand3, "-", v3, "votos")
        else:
            print("2º lugar:", cand3, "-", v3, "votos")
            print("3º lugar:", cand1, "-", v1, "votos")

    else:
        print("1º lugar:", cand3, "-", v3, "votos")
        print("2º lugar:", cand2, "-", v2, "votos")
        print("3º lugar:", cand1, "-", v1, "votos")