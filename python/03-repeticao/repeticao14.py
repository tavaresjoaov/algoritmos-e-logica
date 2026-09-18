"""
"""

while True:

    print("\n1. Média aritmética")
    print("2. Média ponderada")
    print("3. Sair")
    opcao = int(input("Digite a opção desejada: "))

    if opcao == 1:

        n1 = float(input("\nDigite a primeira nota: "))
        n2 = float(input("Digite a segunda nota: "))

        media = (n1 + n2) / 2.0

        print(f"\nMédia aritmética: {media:.2f}")

    elif opcao == 2:

        n1 = float(input("\nDigite a primeira nota: "))
        p1 = float(input("Digite o peso da primeira nota: "))

        n2 = float(input("\nDigite a segunda nota: "))
        p2 = float(input("Digite o peso da segunda nota: "))

        n3 = float(input("\nDigite a terceira nota: "))
        p3 = float(input("Digite o peso da terceira nota: "))

        media = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3)

        print(f"\nMédia ponderada: {media:.2f}")

    elif opcao == 3:
        break

    else:
        print("\nOpção inválida!")