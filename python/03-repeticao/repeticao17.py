"""
Faça um programa que receba um conjunto de valores inteiros e positivos, 
calcule e mostre o maior e o menor valor do conjunto. Considere que:

■ para encerrar a entrada de dados, deve ser digitado o valor zero;
■ para valores negativos, deve ser enviada uma mensagem;
■ os valores negativos ou iguais a zero não entrarão nos cálculos.
"""

print("Digite apenas números inteiros e positivos: ")

cont = 0

num = int(input())

while num != 0:
    if num < 0:
        print("Erro: digite um número positivo!")
        
    else:
        cont += 1;
            
        if cont == 1:
            maior = num
            menor = num
                
        else:
            if num > maior:
                maior = num
                
            if num < menor:
                menor = num
                
    num = int(input())
    
if cont > 0:
    print("Maior:", maior)
    print("Menor:", menor)