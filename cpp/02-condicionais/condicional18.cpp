/*
Uma empresa deseja calcular o preço final de seus produtos.

Faça um programa que receba:

- o preço de um produto;
- o tipo do produto:
    A — Alimentação;
    L — Limpeza;
    V — Vestuário;
- a situação de refrigeração:
    S — necessita de refrigeração;
    N — não necessita de refrigeração.

Calcule e mostre:

a) o valor adicional, de acordo com o tipo, preço e necessidade de
refrigeração.

Quando o produto NÃO necessita de refrigeração:

    Alimentação:
        preço < R$ 15,00 → adicional de R$ 2,00;
        preço >= R$ 15,00 → adicional de R$ 5,00.

    Limpeza:
        preço < R$ 10,00 → adicional de R$ 1,50;
        preço >= R$ 10,00 → adicional de R$ 2,50.

    Vestuário:
        preço < R$ 30,00 → adicional de R$ 3,00;
        preço >= R$ 30,00 → adicional de R$ 2,50.

Quando o produto NECESSITA de refrigeração:

    Alimentação → adicional de R$ 8,00;
    Limpeza → adicional de R$ 0,00;
    Vestuário → adicional de R$ 0,00.

b) o imposto:

    preço < R$ 25,00 → 5%;
    preço >= R$ 25,00 → 8%.

c) o preço de custo, ou seja, preço mais imposto.

d) o desconto:

O produto que não preencher nenhum dos requisitos a seguir terá 
desconto de 3%, caso contrário, 0 (zero).

    - tipo Alimentação;
    - necessita de refrigeração.

e) o novo preço:

    preço de custo + valor adicional - desconto.

f) a classificação:

    novo preço < R$ 50,00 → Barato;
    R$ 50,00 <= novo preço < R$ 100,00 → Normal;
    novo preço >= R$ 100,00 → Caro.

Mostre todos os valores calculados e a classificação final.
*/

#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int main() {

    double preco;
    char tipo, situacao;

    cout << "Digite o preco do produto: ";
    cin >> preco;

    cout << "\nTipos de produto:\n";
    cout << "A - Alimentacao\n";
    cout << "L - Limpeza\n";
    cout << "V - Vestuario\n";
    cout << "Digite o tipo do produto: ";
    cin >> tipo;

    cout << "\nSituacao de refrigeracao:\n";
    cout << "S - Necessita de refrigeracao\n";
    cout << "N - Nao necessita de refrigeracao\n";
    cout << "Digite a situacao: ";
    cin >> situacao;

    tipo = toupper(tipo);
    situacao = toupper(situacao);

    double adicional;

    switch (situacao) {

        case 'S':
            switch (tipo) {

                case 'A':
                    adicional = 8.00;
                    break;

                case 'L':
                    adicional = 0.00;
                    break;

                case 'V':
                    adicional = 0.00;
                    break;

                default:
                    cout << "Tipo de produto invalido.";
                    return 0;
            }
            break;

        case 'N':
            switch (tipo) {

                case 'A':
                    if (preco < 15.00) {
                        adicional = 2.00;
                    }
                    else {
                        adicional = 5.00;
                    }
                    break;

                case 'L':
                    if (preco < 10.00) {
                        adicional = 1.50;
                    }
                    else {
                        adicional = 2.50;
                    }
                    break;

                case 'V':
                    if (preco < 30.00) {
                        adicional = 3.00;
                    }
                    else {
                        adicional = 2.50;
                    }
                    break;

                default:
                    cout << "Tipo de produto invalido.";
                    return 0;
            }
            break;

        default:
            cout << "Situacao de refrigeracao invalida.";
            return 0;
    }

    double imposto;

    if (preco < 25.00) {
        imposto = preco * 0.05;
    }
    else {
        imposto = preco * 0.08;
    }

    double custo = preco + imposto;
    double desconto;

    if (!(tipo == 'A' && situacao == 'S')) {
        desconto = custo * 0.03;
    }
    else {
        desconto = 0.00;
    }

    double novo_preco = custo + adicional - desconto;

    cout << fixed << setprecision(2);

    cout << "\nAdicional: R$ " << adicional << endl;
    cout << "Imposto: R$ " << imposto << endl;
    cout << "Preco de custo: R$ " << custo << endl;
    cout << "Desconto: R$ " << desconto << endl;
    cout << "Novo preco: R$ " << novo_preco << endl;

    if (novo_preco >= 100.00) {
        cout << "Classificacao: Caro.";
    }
    else if (novo_preco >= 50.00) {
        cout << "Classificacao: Normal.";
    }
    else {
        cout << "Classificacao: Barato.";
    }

    return 0;
}