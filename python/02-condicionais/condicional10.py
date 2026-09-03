"""
Uma empresa decidiu dar uma gratificação de Natal a seus 
funcionários, baseada no número de horas extras e no número de 
horas que o funcionário faltou ao trabalho. O valor do prêmio 
é obtido pela consulta à tabela que se segue, na qual:

H = número de horas extras – (2/3 * (número de horas falta))

H (MINUTOS)                 PRÊMIO (R$)
>= 2.400                    500,00
1.800  ○------○ 2.400       400,00
1.200  •------○ 1.800       300,00
600  •------○ 1.200         200,00
< 600                       100,00 
"""

hora_extra = int(input("Digite o numero de horas extras: "))
hora_falta = int(input("Digite o numero de horas de falta: "))

hora_total = hora_extra - (2 / 3 * hora_falta)

minutos = hora_total * 60

if minutos >= 2400:
    premio = 500.00
elif minutos >= 1800:
    premio = 400.00
elif minutos >= 1200:
    premio = 300.00
elif minutos >= 600:
    premio = 200.00
else:
    premio = 100.00

print(f"Premio: R$ {premio:.2f}")