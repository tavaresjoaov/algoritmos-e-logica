"""
Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha
do usuário.
                        
ESCOLHA DO USUÁRIO                  OPERAÇÃO
        1               Média entre os números digitados
        2               Diferença do maior pelo menor
        3               Produto entre os números digitados
        4               Divisão do primeiro pelo segundo

Se a opção digitada for inválida, mostre uma mensagem de erro e termine a execução do programa.
Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero.
"""

n1 = float(input("Digite o primeiro número: "))
n2 = float(input("Digite o segundo número: "))

print("1 - Media")
print("2 - Diferenca do maior pelo menor")
print("3 - Produto")
print("4 - Divisao do primeiro pelo segundo")

opcao = int(input("Escolha uma opção: "))

match opcao:
    case 1:
        resultado = (n1 + n2) / 2

    case 2:
        if n1 > n2:
            resultado = n1 - n2
        else:
            resultado = n2 - n1

    case 3:
        resultado = n1 * n2

    case 4:
        if n2 != 0:
            resultado = n1 / n2
        else:
            print("Erro: divisão por zero")
            exit()

    case _:
        print("Opção inválida.")
        exit()
        
print(f"Resultado = {resultado}")