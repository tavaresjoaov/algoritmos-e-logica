"""
Faça um programa que receba a idade e o peso de uma pessoa. De acordo com a tabela a seguir, verifique
e mostre em qual grupo de risco essa pessoa se encaixa.

            IDADE                                    PESO

                            Até 60      Entre 60 e 90 (inclusive)       Acima de 90
Menores que 20                 9                    8                        7
De 20 a 50                     6                    5                        4
Maiores que 50                 3                    2                        1
"""

idade = int(input("Digite a sua idade: "))
peso = float(input("Digite o seu peso: "))

if idade > 50:
    if peso > 90:
        grupo = 1
    elif peso >= 60:
        grupo = 2
    else:
        grupo = 3
        
elif idade >= 20:
    if peso > 90:
        grupo = 4
    elif peso >= 60:
        grupo = 5
    else:
        grupo = 6

else:
    if peso > 90:
        grupo = 7
    elif peso >= 60:
        grupo = 8
    else:
        grupo = 9

print(f"Grupo de risco: {grupo}")