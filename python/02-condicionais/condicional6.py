"""
Faça um programa que receba a idade de um nadador e 
mostre sua categoria, usando as regras a seguir. 

Para idade inferior a 5, deverá mostrar mensagem.

CATEGORIA       IDADE
Infantil        5 a 7
Juvenil         8 a 10
Adolescente     11 a 15
Adulto          16 a 30
Sênior          Acima de 30 
"""

idade = int(input("Digite a idade: "))

if idade > 30:
    print("Sênior")
elif idade >= 16:
    print("Adulto")
elif idade >= 11:
    print("Adolescente")
elif idade >= 8:
    print("Juvenil")
elif (idade >= 5):
    print("Infantil")
else :
    print("Erro: idade inferior a 5")
    exit()