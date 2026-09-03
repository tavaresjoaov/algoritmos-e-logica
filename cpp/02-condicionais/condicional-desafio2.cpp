/*
DESAFIO 02 — TESTE DE DESEMPENHO DE MOTORES

Uma equipe de engenharia está realizando testes para comparar 
quatro motores elétricos. Todos serão avaliados nas mesmas condições.

Os motores serão identificados como Motor A, Motor B, Motor C e Motor D.

O programa deverá receber os resultados de três testes para cada motor, 
calcular sua pontuação final e, depois, classificá-los do maior para o menor desempenho.

1. TESTES

Para cada motor, leia:

a) pontuação de potência (0 a 40)
b) pontuação de eficiência (0 a 30)
c) pontuação de estabilidade (0 a 30)

A pontuação final será:

pontuação = potência + eficiência + estabilidade

A pontuação máxima é 100.

2. CLASSIFICAÇÃO

Após calcular a pontuação dos quatro motores, determine a classificação
do maior para o menor resultado.

Exiba:

1º lugar: Motor X — pontuação
2º lugar: Motor X — pontuação
3º lugar: Motor X — pontuação
4º lugar: Motor X — pontuação

Considere que as quatro pontuações finais serão diferentes.

3. RESTRIÇÕES

A classificação deverá ser feita utilizando estruturas condicionais
aninhadas (if, else if e else).

Não utilize:

- vetores ou listas;
- estruturas de repetição;
- sort() ou mecanismos automáticos de ordenação;
- funções criadas pelo programador.

Antes de escrever o código, organize a lógica da classificação em um
fluxograma.
*/

#include <iostream>

using namespace std;

int main() {

    int potenciaA, eficienciaA, estabilidadeA;
    int potenciaB, eficienciaB, estabilidadeB;
    int potenciaC, eficienciaC, estabilidadeC;
    int potenciaD, eficienciaD, estabilidadeD;

    int pontuacaoA, pontuacaoB, pontuacaoC, pontuacaoD;

    // MOTOR A
    cout << "=== MOTOR A ===" << endl;

    cout << "Pontuacao de potencia (0 a 40): ";
    cin >> potenciaA;

    cout << "Pontuacao de eficiencia (0 a 30): ";
    cin >> eficienciaA;

    cout << "Pontuacao de estabilidade (0 a 30): ";
    cin >> estabilidadeA;

    // MOTOR B
    cout << "\n=== MOTOR B ===" << endl;

    cout << "Pontuacao de potencia (0 a 40): ";
    cin >> potenciaB;

    cout << "Pontuacao de eficiencia (0 a 30): ";
    cin >> eficienciaB;

    cout << "Pontuacao de estabilidade (0 a 30): ";
    cin >> estabilidadeB;

    // MOTOR C
    cout << "\n=== MOTOR C ===" << endl;

    cout << "Pontuacao de potencia (0 a 40): ";
    cin >> potenciaC;

    cout << "Pontuacao de eficiencia (0 a 30): ";
    cin >> eficienciaC;

    cout << "Pontuacao de estabilidade (0 a 30): ";
    cin >> estabilidadeC;

    // MOTOR D
    cout << "\n=== MOTOR D ===" << endl;

    cout << "Pontuacao de potencia (0 a 40): ";
    cin >> potenciaD;

    cout << "Pontuacao de eficiencia (0 a 30): ";
    cin >> eficienciaD;

    cout << "Pontuacao de estabilidade (0 a 30): ";
    cin >> estabilidadeD;

    // CALCULO DAS PONTUACOES FINAIS

    pontuacaoA = potenciaA + eficienciaA + estabilidadeA;
    pontuacaoB = potenciaB + eficienciaB + estabilidadeB;
    pontuacaoC = potenciaC + eficienciaC + estabilidadeC;
    pontuacaoD = potenciaD + eficienciaD + estabilidadeD;

    cout << "\n=== CLASSIFICACAO ===" << endl;

    // A > B
    if (pontuacaoA > pontuacaoB) {

        // A > C
        if (pontuacaoA > pontuacaoC) {

            // A > D
            if (pontuacaoA > pontuacaoD) {

                cout << "1o lugar: Motor A - " << pontuacaoA << " pontos" << endl;

                // B > C
                if (pontuacaoB > pontuacaoC) {

                    // B > D
                    if (pontuacaoB > pontuacaoD) {
                        cout << "2o lugar: Motor B - " << pontuacaoB << " pontos" << endl;
                        cout << "3o lugar: Motor D - " << pontuacaoD << " pontos" << endl;
                        cout << "4o lugar: Motor C - " << pontuacaoC << " pontos" << endl;
                    }
                    else {
                        cout << "2o lugar: Motor D - " << pontuacaoD << " pontos" << endl;
                        cout << "3o lugar: Motor B - " << pontuacaoB << " pontos" << endl;
                        cout << "4o lugar: Motor C - " << pontuacaoC << " pontos" << endl;
                    }
                }

                // C > B
                else {

                    // C > D
                    if (pontuacaoC > pontuacaoD) {
                        cout << "2o lugar: Motor C - " << pontuacaoC << " pontos" << endl;
                        cout << "3o lugar: Motor D - " << pontuacaoD << " pontos" << endl;
                        cout << "4o lugar: Motor B - " << pontuacaoB << " pontos" << endl;
                    }
                    else {
                        cout << "2o lugar: Motor D - " << pontuacaoD << " pontos" << endl;
                        cout << "3o lugar: Motor C - " << pontuacaoC << " pontos" << endl;
                        cout << "4o lugar: Motor B - " << pontuacaoB << " pontos" << endl;
                    }
                }
            }

            // D > A
            else {

                cout << "1o lugar: Motor D - " << pontuacaoD << " pontos" << endl;
                cout << "2o lugar: Motor A - " << pontuacaoA << " pontos" << endl;

                // B > C
                if (pontuacaoB > pontuacaoC) {
                    cout << "3o lugar: Motor B - " << pontuacaoB << " pontos" << endl;
                    cout << "4o lugar: Motor C - " << pontuacaoC << " pontos" << endl;
                }
                else {
                    cout << "3o lugar: Motor C - " << pontuacaoC << " pontos" << endl;
                    cout << "4o lugar: Motor B - " << pontuacaoB << " pontos" << endl;
                }
            }
        }

        // C > A
        else {

            cout << "1o lugar: Motor C - " << pontuacaoC << " pontos" << endl;

            // A > D
            if (pontuacaoA > pontuacaoD) {

                cout << "2o lugar: Motor A - " << pontuacaoA << " pontos" << endl;

                // B > D
                if (pontuacaoB > pontuacaoD) {
                    cout << "3o lugar: Motor B - " << pontuacaoB << " pontos" << endl;
                    cout << "4o lugar: Motor D - " << pontuacaoD << " pontos" << endl;
                }
                else {
                    cout << "3o lugar: Motor D - " << pontuacaoD << " pontos" << endl;
                    cout << "4o lugar: Motor B - " << pontuacaoB << " pontos" << endl;
                }
            }

            // D > A
            else {

                cout << "2o lugar: Motor D - " << pontuacaoD << " pontos" << endl;
                cout << "3o lugar: Motor A - " << pontuacaoA << " pontos" << endl;
                cout << "4o lugar: Motor B - " << pontuacaoB << " pontos" << endl;
            }
        }
    }

    // B > A
    else {

        // B > C
        if (pontuacaoB > pontuacaoC) {

            // B > D
            if (pontuacaoB > pontuacaoD) {

                cout << "1o lugar: Motor B - " << pontuacaoB << " pontos" << endl;

                // A > C
                if (pontuacaoA > pontuacaoC) {

                    // A > D
                    if (pontuacaoA > pontuacaoD) {
                        cout << "2o lugar: Motor A - " << pontuacaoA << " pontos" << endl;
                        cout << "3o lugar: Motor D - " << pontuacaoD << " pontos" << endl;
                        cout << "4o lugar: Motor C - " << pontuacaoC << " pontos" << endl;
                    }
                    else {
                        cout << "2o lugar: Motor D - " << pontuacaoD << " pontos" << endl;
                        cout << "3o lugar: Motor A - " << pontuacaoA << " pontos" << endl;
                        cout << "4o lugar: Motor C - " << pontuacaoC << " pontos" << endl;
                    }
                }

                // C > A
                else {

                    // C > D
                    if (pontuacaoC > pontuacaoD) {
                        cout << "2o lugar: Motor C - " << pontuacaoC << " pontos" << endl;
                        cout << "3o lugar: Motor D - " << pontuacaoD << " pontos" << endl;
                        cout << "4o lugar: Motor A - " << pontuacaoA << " pontos" << endl;
                    }
                    else {
                        cout << "2o lugar: Motor D - " << pontuacaoD << " pontos" << endl;
                        cout << "3o lugar: Motor C - " << pontuacaoC << " pontos" << endl;
                        cout << "4o lugar: Motor A - " << pontuacaoA << " pontos" << endl;
                    }
                }
            }

            // D > B
            else {

                cout << "1o lugar: Motor D - " << pontuacaoD << " pontos" << endl;
                cout << "2o lugar: Motor B - " << pontuacaoB << " pontos" << endl;

                // A > C
                if (pontuacaoA > pontuacaoC) {
                    cout << "3o lugar: Motor A - " << pontuacaoA << " pontos" << endl;
                    cout << "4o lugar: Motor C - " << pontuacaoC << " pontos" << endl;
                }
                else {
                    cout << "3o lugar: Motor C - " << pontuacaoC << " pontos" << endl;
                    cout << "4o lugar: Motor A - " << pontuacaoA << " pontos" << endl;
                }
            }
        }

        // C > B
        else {

            cout << "1o lugar: Motor C - " << pontuacaoC << " pontos" << endl;

            // B > D
            if (pontuacaoB > pontuacaoD) {

                cout << "2o lugar: Motor B - " << pontuacaoB << " pontos" << endl;

                // A > D
                if (pontuacaoA > pontuacaoD) {
                    cout << "3o lugar: Motor A - " << pontuacaoA << " pontos" << endl;
                    cout << "4o lugar: Motor D - " << pontuacaoD << " pontos" << endl;
                }
                else {
                    cout << "3o lugar: Motor D - " << pontuacaoD << " pontos" << endl;
                    cout << "4o lugar: Motor A - " << pontuacaoA << " pontos" << endl;
                }
            }

            // D > B
            else {

                cout << "2o lugar: Motor D - " << pontuacaoD << " pontos" << endl;

                // A > B
                if (pontuacaoA > pontuacaoB) {
                    cout << "3o lugar: Motor A - " << pontuacaoA << " pontos" << endl;
                    cout << "4o lugar: Motor B - " << pontuacaoB << " pontos" << endl;
                }
                else {
                    cout << "3o lugar: Motor B - " << pontuacaoB << " pontos" << endl;
                    cout << "4o lugar: Motor A - " << pontuacaoA << " pontos" << endl;
                }
            }
        }
    }

    return 0;
}