/* 

Faça um programa que receba o valor de um carro e mostre 
uma tabela com os seguintes dados: preço final, quantidade 
de parcelas e valor da parcela. Considere o seguinte:

■ o preço final para compra à vista tem desconto de 20%;
■ a quantidade de parcelas pode ser: 6, 12, 18, 24, 30, 
36, 42, 48, 54 e 60;

Os percentuais de acréscimo encontram-se na tabela a seguir:

QUANTIDADE DE PARCELAS 		PERCENTUAL DE ACRÉSCIMO SOBRE O PREÇO FINAL

6 							3%
12 							6%
18 							9%
24 							12%
30 							15%
36 							18%
42 							21%
48 							24%
54 							27%
60 							30%

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double preco;

    cout << "Digite o valor do carro: ";
    cin >> preco;

    double valor_parcela = 0;
    int qtd_parcelas = 0;
    double acrescimo = 0;
    double percentual = 0;
    double preco_vista = 0.8 * preco;

    cout << fixed << setprecision(2);

    cout << "Preco final\tQtd de parcelas\t\tValor da parcela\n";

    cout << "R$ " << preco_vista << "\t1x\t\t\t"
         << "R$ " << preco_vista << endl;

    for (int i = 1; i <= 10; i++) {

        qtd_parcelas += 6;
        percentual += 0.03;

        acrescimo = percentual * preco_vista;
        double preco_parcelado = preco_vista + acrescimo;

        valor_parcela = preco_parcelado / qtd_parcelas;

        cout << "R$ " << preco_parcelado << "\t"
             << qtd_parcelas << "x\t\t\t"
             << "R$ " << valor_parcela << endl;

    }

    return 0;
}