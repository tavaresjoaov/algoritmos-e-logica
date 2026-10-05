/* 
Faça um programa que receba um conjunto de valores inteiros e positivos, 
calcule e mostre o maior e o menor valor do conjunto. Considere que:

■ para encerrar a entrada de dados, deve ser digitado o valor zero;
■ para valores negativos, deve ser enviada uma mensagem;
■ os valores negativos ou iguais a zero não entrarão nos cálculos.
*/

#include <iostream>

using namespace std;

int main() {

    int num, maior, menor;
    int cont = 0;

    cout << "Digite numeros inteiros e positivos (0 para encerrar): ";
    cin >> num;

    while (num != 0) {

        if (num < 0) {
            cout << "Erro: digite um numero positivo." << endl;
        }
        else {
            cont++;

            if (cont == 1) {
                maior = num;
                menor = num;
            }
            else {
                if (num > maior) {
                    maior = num;
                }

                if (num < menor) {
                    menor = num;
                }
            }
        }

        cin >> num;
    }

    if (cont > 0) {
        cout << "Maior: " << maior << endl;
        cout << "Menor: " << menor << endl;
    }

    return 0;
}