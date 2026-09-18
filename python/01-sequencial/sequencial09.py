"""
Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número
de horas extras trabalhadas, calcule e mostre o salário a receber, de acordo com as regras a seguir:

a) a hora trabalhada vale 1/8 do salário mínimo;
b) a hora extra vale 1/4 do salário mínimo;
c) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
d) a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor
da hora extra;
e) o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras.

"""

hora_normal = float(input("Digite o numero de horas trabalhadas: "))
salario_minimo = float(input("Digite o valor do salario minimo: "))
hora_extra = float(input("Digite o numero de horas extras trabalhadas: "))

valor_normal = salario_minimo / 8.0
valor_extra = salario_minimo / 4.0
salario_bruto = hora_normal * valor_normal
salario_extra = hora_extra * valor_extra
salario_final = salario_bruto + salario_extra

print(f"Salario a receber = {salario_final:.2f} reais")