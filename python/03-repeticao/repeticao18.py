"""
Uma agência bancária possui vários clientes que podem 
fazer investimentos com rendimentos mensais, conforme 
a tabela a seguir:

TIPO    DESCRIÇÃO               RENDIMENTO MENSAL
1       Poupança                1,5%
2       Poupança plus           2%
3       Fundos de renda fixa    4%

Faça um programa que leia o código do cliente, o tipo 
do investimento e o valor investido, e que calcule e 
mostre o rendimento mensal de acordo com o tipo do 
investimento. No final, o programa deverá mostrar o 
total investido e o total de juros pagos.

A leitura terminará quando o código do cliente 
digitado for menor ou igual a 0.
"""

total_valor = 0
total_juros = 0

print("PARA ENCERRAR, DIGITE UM CÓDIGO MENOR OU IGUAL A 0\n")
codigo = int(input("Digite o código: "))

while codigo > 0:
    
    tipo = int(input("Digite o tipo de investimento (1, 2 ou 3): "))
    
    if tipo < 1 or tipo > 3:
        print("Erro: tipo inválido.\n")
        
    else:
        
        valor = float(input("Digite o valor investido: "))
        
        if tipo == 1:
            juros = valor * 0.015
            
        elif tipo == 2:
            juros = valor * 0.02
        
        else:
            juros = valor * 0.04
    
        print(f"Rendimento mensal: {juros:.2f}")
        
        total_valor += valor
        total_juros += juros
        
        print()
            
    codigo = int(input("Digite o código: "))

print()

print(f"Total investido: {total_valor:.2f}")
print(f"Total de juros: {total_juros:.2f}")