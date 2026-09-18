"""
Faça um programa que receba a idade e o peso de quinze 
pessoas, e que calcule e mostre as médias dos pesos das 
pessoas da mesma faixa etária. As faixas etárias são: 

■ de 1 a 10 anos;
■ de 11 a 20 anos;
■ de 21 a 30 anos; e 
■ de 31 anos para cima.
"""

qtd_f1 = qtd_f2 = qtd_f3 = qtd_f4 = 0
soma_f1 = soma_f2 = soma_f3 = soma_f4 = 0

for i in range(1, 16):
    
    print(f"PESSOA {i}: ")
    idade = int(input("Digite a idade: "))
    peso = float(input("Digite o peso: "))
    print()
    
    if idade > 30:
        qtd_f4 += 1
        soma_f4 += peso
    elif idade > 20:
        qtd_f3 += 1
        soma_f3 += peso
    elif idade > 10:
        qtd_f2 += 1
        soma_f2 += peso
    elif idade > 0:
        qtd_f1 += 1
        soma_f1 += peso
    else:
        print("Idade inválida!")
        exit()

if qtd_f1 > 0:
    media1 = soma_f1 / qtd_f1
else:
    media1 = 0
    
if qtd_f2 > 0:
    media2 = soma_f2 / qtd_f2
else:
    media2 = 0
    
if qtd_f3 > 0:
    media3 = soma_f3 / qtd_f3
else:
    media3 = 0
    
if qtd_f4 > 0:
    media4 = soma_f4 / qtd_f4
else:
    media4 = 0

print(f"Média dos pesos da faixa de 1 a 10 anos: {media1:.2f}")
print(f"Média dos pesos da faixa de 11 a 20 anos: {media2:.2f}")
print(f"Média dos pesos da faixa de 21 a 30 anos: {media3:.2f}")
print(f"Média dos pesos da faixa de 31 anos para cima: {media4:.2f}")
