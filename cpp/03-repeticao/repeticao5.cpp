/* Faça um programa que receba a idade, o peso, a altura, 
a cor dos olhos (A — azul; P — preto; V — verde; e C — castanho) 
e a cor dos cabelos (P — preto; C — castanho; L — louro; e R — ruivo) 
de seis pessoas, e que calcule e mostre:

■ a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
■ a média das idades das pessoas com altura inferior a 1,50 m;
■ a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas; e
■ a quantidade de pessoas ruivas e que não possuem olhos azuis.
*/

#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int main() {

    int idade;
    double peso, altura;
    char olho, cabelo;

    int qtd_idadePeso = 0;
    int somaIdade = 0;
    int contIdade = 0;
    int contAzul = 0;
    int contRuivo = 0;

    for (int i = 1; i <= 6; i++) {

        cout << "PESSOA " << i << ":\n";

        cout << "Digite a idade: ";
        cin >> idade;

        cout << "Digite o peso: ";
        cin >> peso;

        cout << "Digite a altura: ";
        cin >> altura;

        cout << "Digite a cor dos olhos (A/P/V/C): ";
        cin >> olho;

        olho = toupper(olho);

        cout << "Digite a cor do cabelo (P/C/L/R): ";
        cin >> cabelo;

        cabelo = toupper(cabelo);

        if (idade > 50 && peso < 60) {
            qtd_idadePeso++;
        }

        if (altura < 1.50) {
            somaIdade += idade;
            contIdade++;
        }

        if (olho == 'A') {
            contAzul++;
        }

        if (cabelo == 'R' && olho != 'A') {
            contRuivo++;
        }

        cout << endl;
    }

    double media = 0;

    if (contIdade > 0) {
        media = somaIdade / (double)contIdade;
    }

    double porcentagem = contAzul / 6.0 * 100;

    cout << fixed << setprecision(2);

    cout << "Pessoas com idade > 50 e peso < 60: "
         << qtd_idadePeso << endl;

    cout << "Media das idades das pessoas com altura < 1.50: "
         << media << endl;

    cout << "Porcentagem de pessoas com olhos azuis: "
         << porcentagem << "%" << endl;

    cout << "Quantidade de pessoas ruivas e que nao possuem olhos azuis: "
         << contRuivo << endl;

    return 0;
}