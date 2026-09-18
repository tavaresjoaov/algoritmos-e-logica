/* 

Faça um programa que receba a idade e o peso de quinze 
pessoas, e que calcule e mostre as médias dos pesos das 
pessoas da mesma faixa etária. As faixas etárias são: 

■ de 1 a 10 anos;
■ de 11 a 20 anos;
■ de 21 a 30 anos; e 
■ de 31 anos para cima.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int qtd_f1 = 0, qtd_f2 = 0, qtd_f3 = 0, qtd_f4 = 0;
    double soma_f1 = 0, soma_f2 = 0, soma_f3 = 0, soma_f4 = 0;

    for (int i = 1; i <= 15; i++) {

        cout << "PESSOA " << i << ":" << endl;

        int idade;
        double peso;

        cout << "Digite a idade: ";
        cin >> idade;

        cout << "Digite o peso: ";
        cin >> peso;

        cout << endl;

        if (idade > 30) {
            qtd_f4++;
            soma_f4 += peso;
        }
        else if (idade > 20) {
            qtd_f3++;
            soma_f3 += peso;
        }
        else if (idade > 10) {
            qtd_f2++;
            soma_f2 += peso;
        }
        else if (idade > 0) {
            qtd_f1++;
            soma_f1 += peso;
        }
        else {
            cout << "Erro: Idade invalida." << endl;
            return 0;
        }
    }

    double media1, media2, media3, media4;

    if (qtd_f1 > 0) {
        media1 = soma_f1 / qtd_f1;
    }
    else {
        media1 = 0;
    }

    if (qtd_f2 > 0) {
        media2 = soma_f2 / qtd_f2;
    }
    else {
        media2 = 0;
    }

    if (qtd_f3 > 0) {
        media3 = soma_f3 / qtd_f3;
    }
    else {
        media3 = 0;
    }

    if (qtd_f4 > 0) {
        media4 = soma_f4 / qtd_f4;
    }
    else {
        media4 = 0;
    }

    cout << fixed << setprecision(2);

    cout << "Media dos pesos da faixa de 1 a 10 anos: " << media1 << endl;
    cout << "Media dos pesos da faixa de 11 a 20 anos: " << media2 << endl;
    cout << "Media dos pesos da faixa de 21 a 30 anos: " << media3 << endl;
    cout << "Media dos pesos da faixa de 31 anos para cima: " << media4 << endl;

    return 0;
}