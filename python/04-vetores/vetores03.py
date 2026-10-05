"""
3. Leia um vetor de 6 números inteiros e, após o preenchimento,
mostre o vetor original.

Em seguida, solicite ao usuário:
■ o índice de uma posição que deseja alterar;
■ um novo valor para essa posição.

Verifique se o índice informado é válido. Caso seja, substitua
o elemento daquela posição pelo novo valor.

Ao final, mostre:
■ o índice que foi alterado;
■ o valor que estava armazenado nessa posição antes da alteração;
■ o novo valor;
■ o vetor atualizado.
"""

v = []

print("Digite os números do vetor:")

for i in range(6):
    num = int(input())
    v.append(num)

print("\nVetor original:")

for i in range(6):
    print(f"v[{i}] = {v[i]}")

indice = int(input("\nDigite o índice que deseja alterar: "))

if indice >= 0 and indice < 6:

    novo = int(input("Digite o novo valor: "))

    antigo = v[indice]
    v[indice] = novo

    print("\nÍndice alterado:", indice)
    print("Valor antigo:", antigo)
    print("Valor novo:", novo)

    print("\nVetor atualizado:")

    for i in range(6):
        print(f"v[{i}] = {v[i]}")

else:
    print("\nErro: índice inválido!")