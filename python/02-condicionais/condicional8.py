codigo = int(input("Digite o código: "))
quantidade = int(input("Digite a quantidade comprada: "))

if codigo > 30 and codigo <= 40:
    preco = 30.0

elif codigo > 20 and codigo <= 30:
    preco = 20.0

elif codigo > 10 and codigo <= 20:
    preco = 15.0

elif codigo > 0 and codigo <= 10:
    preco = 10.0

else:
    print("Código inválido")
    exit()

preco_total = preco * quantidade

if preco_total > 500:
    desconto = preco_total * 0.15

elif preco_total > 250:
    desconto = preco_total * 0.10

else:
    desconto = preco_total * 0.05

preco_final = preco_total - desconto

print(f"Preço unitário: R$ {preco:.2f}")
print(f"Preço total: R$ {preco_total:.2f}")
print(f"Desconto: R$ {desconto:.2f}")
print(f"Preço final: R$ {preco_final:.2f}")