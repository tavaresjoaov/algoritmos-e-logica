/*
Um laboratório realiza o controle de qualidade de um produto que é fabricado
em diferentes lotes. Durante a análise, são coletadas amostras de cada lote
para medir a concentração de uma determinada substância, em mg/L.

O laboratório analisará 5 lotes. Para cada lote, poderão ser analisadas
quantas amostras forem necessárias. A análise das amostras de um lote
termina quando for digitado o valor -1.

Para cada lote, calcule e mostre:
■ a quantidade de amostras analisadas;
■ a concentração média das amostras;
■ a maior concentração encontrada;
■ a menor concentração encontrada.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double amostra;

    for (int i = 1; i <= 5; i++) {

        int cont = 0;
        double soma = 0;
        double media = 0;
        double maior = 0;
        double menor = 0;

        cout << "LOTE " << i << endl;

        cout << "\nDigite a concentracao de cada amostra em mg/L (-1 para encerrar):\n";
        cin >> amostra;

        while (amostra != -1) {

            if (amostra < 0) {
                cout << "Erro: valor negativo!" << endl;
            }
            else {

                soma += amostra;
                cont++;

                if (cont == 1) {
                    menor = amostra;
                    maior = amostra;
                }
                else {
                    if (amostra > maior) {
                        maior = amostra;
                    }

                    if (amostra < menor) {
                        menor = amostra;
                    }
                }
            }

            cin >> amostra;
        }

        if (cont > 0) {
            media = soma / cont;
        }

        cout << fixed << setprecision(2);

        cout << "\nAmostras analisadas: " << cont << endl;
        cout << "Concentracao media: " << media << " mg/L" << endl;
        cout << "Maior concentracao: " << maior << " mg/L" << endl;
        cout << "Menor concentracao: " << menor << " mg/L" << endl;

        cout << endl;
    }

    return 0;
}