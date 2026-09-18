"""
Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. 
Faça um programa que receba o salário fixo do funcionário e o valor de suas vendas, 
calcule e mostre a comissão e seu salário final.
"""

salario = float(input("Digite o salário do funcionário: "))
vendas = float(input("Digite o valor de suas vendas: "))

comissao = vendas * 0.04
salario_final = salario + comissao

print(f"Valor da comissão = {comissao:.2f}")
print(f"Salário final = {salario_final:.2f}")