n1 = float(input("Digite a primeira nota: "))
n2 = float(input("Digite a segunda nota: "))

media = (n1 + n2) / 2.0

print(f"Media = {media}")

if media < 3.0:
    print("REPROVADO")
elif media < 7.0:
    print("EXAME")
else:
    print("APROVADO")