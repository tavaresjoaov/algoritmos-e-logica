"""
DESAFIO 02 — TESTE DE DESEMPENHO DE MOTORES

Uma equipe de engenharia está realizando testes para comparar 
quatro motores elétricos. Todos serão avaliados nas mesmas condições.

Os motores serão identificados como Motor A, Motor B, Motor C e Motor D.

O programa deverá receber os resultados de três testes para cada motor, 
calcular sua pontuação final e, depois, classificá-los do maior para o menor desempenho.

1. TESTES

Para cada motor, leia:

a) pontuação de potência (0 a 40)
b) pontuação de eficiência (0 a 30)
c) pontuação de estabilidade (0 a 30)

A pontuação final será:

pontuação = potência + eficiência + estabilidade

A pontuação máxima é 100.

2. CLASSIFICAÇÃO

Após calcular a pontuação dos quatro motores, determine a classificação
do maior para o menor resultado.

Exiba:

1º lugar: Motor X — pontuação
2º lugar: Motor X — pontuação
3º lugar: Motor X — pontuação
4º lugar: Motor X — pontuação

Considere que as quatro pontuações finais serão diferentes.

3. RESTRIÇÕES

A classificação deverá ser feita utilizando estruturas condicionais
aninhadas (if, else if e else).

Não utilize:

- vetores ou listas;
- estruturas de repetição;
- sort() ou mecanismos automáticos de ordenação;
- funções criadas pelo programador.

Antes de escrever o código, organize a lógica da classificação em um
fluxograma.
"""

# MOTOR A
print("=== MOTOR A ===")

potenciaA = int(input("Pontuação de potência (0 a 40): "))
eficienciaA = int(input("Pontuação de eficiência (0 a 30): "))
estabilidadeA = int(input("Pontuação de estabilidade (0 a 30): "))

# MOTOR B
print("\n=== MOTOR B ===")

potenciaB = int(input("Pontuação de potência (0 a 40): "))
eficienciaB = int(input("Pontuação de eficiência (0 a 30): "))
estabilidadeB = int(input("Pontuação de estabilidade (0 a 30): "))

# MOTOR C
print("\n=== MOTOR C ===")

potenciaC = int(input("Pontuação de potência (0 a 40): "))
eficienciaC = int(input("Pontuação de eficiência (0 a 30): "))
estabilidadeC = int(input("Pontuação de estabilidade (0 a 30): "))

# MOTOR D
print("\n=== MOTOR D ===")

potenciaD = int(input("Pontuação de potência (0 a 40): "))
eficienciaD = int(input("Pontuação de eficiência (0 a 30): "))
estabilidadeD = int(input("Pontuação de estabilidade (0 a 30): "))

# CÁLCULO DAS PONTUAÇÕES FINAIS

pontuacaoA = potenciaA + eficienciaA + estabilidadeA
pontuacaoB = potenciaB + eficienciaB + estabilidadeB
pontuacaoC = potenciaC + eficienciaC + estabilidadeC
pontuacaoD = potenciaD + eficienciaD + estabilidadeD

print("\n=== CLASSIFICAÇÃO ===")

# A > B
if pontuacaoA > pontuacaoB:

    # A > C
    if pontuacaoA > pontuacaoC:

        # A > D
        if pontuacaoA > pontuacaoD:

            print("1º lugar: Motor A -", pontuacaoA, "pontos")

            # B > C
            if pontuacaoB > pontuacaoC:

                # B > D
                if pontuacaoB > pontuacaoD:
                    print("2º lugar: Motor B -", pontuacaoB, "pontos")
                    print("3º lugar: Motor D -", pontuacaoD, "pontos")
                    print("4º lugar: Motor C -", pontuacaoC, "pontos")

                else:
                    print("2º lugar: Motor D -", pontuacaoD, "pontos")
                    print("3º lugar: Motor B -", pontuacaoB, "pontos")
                    print("4º lugar: Motor C -", pontuacaoC, "pontos")

            # C > B
            else:

                # C > D
                if pontuacaoC > pontuacaoD:
                    print("2º lugar: Motor C -", pontuacaoC, "pontos")
                    print("3º lugar: Motor D -", pontuacaoD, "pontos")
                    print("4º lugar: Motor B -", pontuacaoB, "pontos")

                else:
                    print("2º lugar: Motor D -", pontuacaoD, "pontos")
                    print("3º lugar: Motor C -", pontuacaoC, "pontos")
                    print("4º lugar: Motor B -", pontuacaoB, "pontos")

        # D > A
        else:

            print("1º lugar: Motor D -", pontuacaoD, "pontos")
            print("2º lugar: Motor A -", pontuacaoA, "pontos")

            # B > C
            if pontuacaoB > pontuacaoC:
                print("3º lugar: Motor B -", pontuacaoB, "pontos")
                print("4º lugar: Motor C -", pontuacaoC, "pontos")

            else:
                print("3º lugar: Motor C -", pontuacaoC, "pontos")
                print("4º lugar: Motor B -", pontuacaoB, "pontos")

    # C > A
    else:

        print("1º lugar: Motor C -", pontuacaoC, "pontos")

        # A > D
        if pontuacaoA > pontuacaoD:

            print("2º lugar: Motor A -", pontuacaoA, "pontos")

            # B > D
            if pontuacaoB > pontuacaoD:
                print("3º lugar: Motor B -", pontuacaoB, "pontos")
                print("4º lugar: Motor D -", pontuacaoD, "pontos")

            else:
                print("3º lugar: Motor D -", pontuacaoD, "pontos")
                print("4º lugar: Motor B -", pontuacaoB, "pontos")

        # D > A
        else:

            print("2º lugar: Motor D -", pontuacaoD, "pontos")
            print("3º lugar: Motor A -", pontuacaoA, "pontos")
            print("4º lugar: Motor B -", pontuacaoB, "pontos")


# B > A
else:

    # B > C
    if pontuacaoB > pontuacaoC:

        # B > D
        if pontuacaoB > pontuacaoD:

            print("1º lugar: Motor B -", pontuacaoB, "pontos")

            # A > C
            if pontuacaoA > pontuacaoC:

                # A > D
                if pontuacaoA > pontuacaoD:
                    print("2º lugar: Motor A -", pontuacaoA, "pontos")
                    print("3º lugar: Motor D -", pontuacaoD, "pontos")
                    print("4º lugar: Motor C -", pontuacaoC, "pontos")

                else:
                    print("2º lugar: Motor D -", pontuacaoD, "pontos")
                    print("3º lugar: Motor A -", pontuacaoA, "pontos")
                    print("4º lugar: Motor C -", pontuacaoC, "pontos")

            # C > A
            else:

                # C > D
                if pontuacaoC > pontuacaoD:
                    print("2º lugar: Motor C -", pontuacaoC, "pontos")
                    print("3º lugar: Motor D -", pontuacaoD, "pontos")
                    print("4º lugar: Motor A -", pontuacaoA, "pontos")

                else:
                    print("2º lugar: Motor D -", pontuacaoD, "pontos")
                    print("3º lugar: Motor C -", pontuacaoC, "pontos")
                    print("4º lugar: Motor A -", pontuacaoA, "pontos")

        # D > B
        else:

            print("1º lugar: Motor D -", pontuacaoD, "pontos")
            print("2º lugar: Motor B -", pontuacaoB, "pontos")

            # A > C
            if pontuacaoA > pontuacaoC:
                print("3º lugar: Motor A -", pontuacaoA, "pontos")
                print("4º lugar: Motor C -", pontuacaoC, "pontos")

            else:
                print("3º lugar: Motor C -", pontuacaoC, "pontos")
                print("4º lugar: Motor A -", pontuacaoA, "pontos")

    # C > B
    else:

        print("1º lugar: Motor C -", pontuacaoC, "pontos")

        # B > D
        if pontuacaoB > pontuacaoD:

            print("2º lugar: Motor B -", pontuacaoB, "pontos")

            # A > D
            if pontuacaoA > pontuacaoD:
                print("3º lugar: Motor A -", pontuacaoA, "pontos")
                print("4º lugar: Motor D -", pontuacaoD, "pontos")

            else:
                print("3º lugar: Motor D -", pontuacaoD, "pontos")
                print("4º lugar: Motor A -", pontuacaoA, "pontos")

        # D > B
        else:

            print("2º lugar: Motor D -", pontuacaoD, "pontos")

            # A > B
            if pontuacaoA > pontuacaoB:
                print("3º lugar: Motor A -", pontuacaoA, "pontos")
                print("4º lugar: Motor B -", pontuacaoB, "pontos")

            else:
                print("3º lugar: Motor B -", pontuacaoB, "pontos")
                print("4º lugar: Motor A -", pontuacaoA, "pontos")