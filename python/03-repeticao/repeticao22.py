"""
Faça um programa para gerenciar uma disputa de Jokenpô 
(Pedra, Papel e Tesoura) entre dois jogadores.

O programa deverá seguir as regras abaixo:

a) Leia a jogada do Jogador 1 e do Jogador 2. O programa deve
aceitar as opções "pedra", "papel" e "tesoura", permitindo que
o usuário digite as palavras em letras maiúsculas ou minúsculas.

b) Valide a entrada de cada jogador utilizando um laço de
repetição. Caso seja digitada uma opção diferente de "pedra",
"papel" ou "tesoura", exiba uma mensagem de erro e solicite
a jogada novamente.

c) Determine o resultado de cada rodada:
   - empate, quando os dois jogadores escolherem a mesma jogada;
   - vitória do Jogador 1;
   - vitória do Jogador 2.

d) Utilize contadores para registrar:
   - o número total de rodadas;
   - o número de vitórias do Jogador 1;
   - o número de vitórias do Jogador 2;
   - o número de empates.

e) Ao final de cada rodada, pergunte se os jogadores desejam
continuar jogando. Aceite somente "S" ou "N", validando a
resposta com um laço de repetição.

f) Quando os jogadores encerrarem a partida, exiba um relatório
contendo:
   - total de rodadas;
   - vitórias do Jogador 1;
   - vitórias do Jogador 2;
   - empates;
   - campeão geral da sessão.
"""

rodadas = 0
empates = 0
vitorias_j1 = 0
vitorias_j2 = 0

continuar = "S"

print("Digite as jogadas (Pedra, Papel ou Tesoura):")

while continuar == "S":

    while True:
        jogador1 = input("\nJogador 1: ").lower()

        jogada1 = (
            (jogador1 == "pedra")
            or
            (jogador1 == "papel")
            or
            (jogador1 == "tesoura")
        )

        if jogada1:
            break
        else:
            print("Jogada inválida! Digite novamente.")

    while True:
        jogador2 = input("Jogador 2: ").lower()

        jogada2 = (
            (jogador2 == "pedra")
            or
            (jogador2 == "papel")
            or
            (jogador2 == "tesoura")
        )

        if jogada2:
            break
        else:
            print("Jogada inválida! Digite novamente.")

    rodadas += 1

    vitoria1 = (
        (jogador1 == "pedra" and jogador2 == "tesoura")
        or
        (jogador1 == "papel" and jogador2 == "pedra")
        or
        (jogador1 == "tesoura" and jogador2 == "papel")
    )

    if jogador1 == jogador2:
        print("Empate!")
        empates += 1

    elif vitoria1:
        print("Jogador 1 venceu a rodada!")
        vitorias_j1 += 1

    else:
        print("Jogador 2 venceu a rodada!")
        vitorias_j2 += 1

    while True:
        continuar = input("\nDeseja continuar jogando? (S/N): ").upper()

        if continuar == "S" or continuar == "N":
            break
        else:
            print("Opção inválida! Digite S ou N.")

print("\n===== RELATÓRIO FINAL =====")
print(f"Total de rodadas: {rodadas}")
print(f"Vitórias do Jogador 1: {vitorias_j1}")
print(f"Vitórias do Jogador 2: {vitorias_j2}")
print(f"Empates: {empates}")

if vitorias_j1 > vitorias_j2:
    print("Campeão geral: Jogador 1")

elif vitorias_j2 > vitorias_j1:
    print("Campeão geral: Jogador 2")

else:
    print("Resultado geral: Empate")