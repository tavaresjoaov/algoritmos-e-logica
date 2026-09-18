"""
Uma companhia de teatro deseja montar uma série de espetáculos. A direção calcula que, 
a R$ 5,00 o ingresso, serão vendidos 120 ingressos, e que as despesas serão de R$ 200,00. 
Diminuindo-se em R$ 0,50 o preço dos ingressos, espera-se que as vendas aumentem em 26 ingressos. 

Faça um programa que escreva uma tabela de valores de lucros esperados em função do preço do 
ingresso, fazendo-se variar esse preço de R$ 5,00 a R$ 1,00, de R$ 0,50 em R$ 0,50. Escreva, 
ainda, para cada novo preço de ingresso, o lucro máximo esperado, o preço do ingresso e a 
quantidade de ingressos vendidos para a obtenção desse lucro.
"""

preco = 5.00
qtd_ingressos = 120

print("Preco\tIngressos\tLucro")

for i in range(1, 10):

    lucro = preco * qtd_ingressos - 200

    print(preco, "\t", qtd_ingressos, "\t\t", lucro)

    preco -= 0.50
    qtd_ingressos += 26