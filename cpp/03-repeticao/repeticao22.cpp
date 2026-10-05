/*
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
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    int rodadas = 0;
    int empates = 0;
    int vitorias_j1 = 0;
    int vitorias_j2 = 0;

    char continuar = 'S';

    cout << "Digite as jogadas (Pedra, Papel ou Tesoura):\n";

    while (continuar == 'S' || continuar == 's') {

        string jogador1;
        string jogador2;

        bool jogada1;
        bool jogada2;

        while (true) {

            cout << "\nJogador 1: ";
            cin >> jogador1;
            
            for (char &c : jogador1) {
                c = tolower(c);
            }

            jogada1 =
                jogador1 == "pedra" ||
                jogador1 == "papel" ||
                jogador1 == "tesoura";

            if (jogada1) {
                break;
            }
            else {
                cout << "Jogada invalida! Digite novamente.\n";
            }
        }

        while (true) {

            cout << "Jogador 2: ";
            cin >> jogador2;
            
            for (char &c : jogador2) {
                c = tolower(c);
            }

            jogada2 =
                jogador2 == "pedra" ||
                jogador2 == "papel" ||
                jogador2 == "tesoura";

            if (jogada2) {
                break;
            }
            else {
                cout << "Jogada invalida! Digite novamente.\n";
            }
        }

        rodadas++;

        bool vitoria1 =
            (jogador1 == "pedra" && jogador2 == "tesoura") ||
            (jogador1 == "papel" && jogador2 == "pedra") ||
            (jogador1 == "tesoura" && jogador2 == "papel");

        if (jogador1 == jogador2) {
            cout << "Empate!\n";
            empates++;
        }

        else if (vitoria1) {
            cout << "Jogador 1 venceu a rodada!\n";
            vitorias_j1++;
        }

        else {
            cout << "Jogador 2 venceu a rodada!\n";
            vitorias_j2++;
        }

        while (true) {

            cout << "\nDeseja continuar jogando? (S/N): ";
            cin >> continuar;

            if (continuar == 'S' || continuar == 's' ||
                continuar == 'N' || continuar == 'n') {
                break;
            }
            else {
                cout << "Opcao invalida! Digite S ou N.\n";
            }
        }
    }

    cout << "\n===== RELATORIO FINAL =====\n";
    cout << "Total de rodadas: " << rodadas << endl;
    cout << "Vitorias do Jogador 1: " << vitorias_j1 << endl;
    cout << "Vitorias do Jogador 2: " << vitorias_j2 << endl;
    cout << "Empates: " << empates << endl;

    if (vitorias_j1 > vitorias_j2) {
        cout << "Campeao geral: Jogador 1";
    }
    else if (vitorias_j2 > vitorias_j1) {
        cout << "Campeao geral: Jogador 2";
    }
    else {
        cout << "Resultado geral: Empate";
    }

    return 0;
}