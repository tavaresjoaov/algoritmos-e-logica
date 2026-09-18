/*
Uma empresa fez uma pesquisa de mercado para saber se as pessoas 
gostaram ou não de um novo produto lançado. Para cada entrevistado, 
informe o sexo (M — masculino; F — feminino) e sua resposta em relação 
ao produto (S — sim; N — não). Faça um programa que calcule e mostre:

■ o número de pessoas que responderam sim;
■ o número de pessoas que responderam não;
■ o número de mulheres que responderam sim; e
■ a percentagem de homens que responderam não, entre todos os homens
  analisados.

As entrevistas deverão continuar enquanto houver novos entrevistados.
Para encerrar a pesquisa, o usuário deverá informar 0 no campo do sexo.
*/

#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int main() {

    char sexo, resposta;

    int total_sim = 0;
    int total_nao = 0;
    int fem_sim = 0;
    int total_masc = 0;
    int masc_nao = 0;

    cout << "Digite o sexo (M/F) ou 0 para encerrar: ";
    cin >> sexo;
    sexo = toupper(sexo);

    while (sexo != '0') {

        cout << "Gostou do produto? (S/N): ";
        cin >> resposta;
        resposta = toupper(resposta);

        if (resposta == 'S') {
            total_sim++;
        }

        if (resposta == 'N') {
            total_nao++;
        }

        if (sexo == 'F' && resposta == 'S') {
            fem_sim++;
        }

        if (sexo == 'M') {
            total_masc++;
        }

        if (sexo == 'M' && resposta == 'N') {
            masc_nao++;
        }

        cout << "\nDigite o sexo (M/F) ou 0 para encerrar: ";
        cin >> sexo;
        sexo = toupper(sexo);
    }

    double porcentagem = 0;

    if (total_masc > 0) {
        porcentagem = (double)masc_nao / total_masc * 100;
    }

    cout << "\nPessoas que responderam SIM: " << total_sim << endl;
    cout << "Pessoas que responderam NAO: " << total_nao << endl;
    cout << "Mulheres que responderam SIM: " << fem_sim << endl;

    cout << fixed << setprecision(2);
    cout << "Porcentagem de homens que responderam NAO: "
         << porcentagem << "%" << endl;

    return 0;
}