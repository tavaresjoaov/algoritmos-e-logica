/* Faça um programa que receba:

■ o código do produto comprado; e
■ a quantidade comprada do produto.

Calcule e mostre:

■ o preço unitário do produto comprado, seguindo a Tabela I;
■ o preço total da nota;
■ o valor do desconto, seguindo a Tabela II e aplicado sobre o preço total da nota; e
■ o preço final da nota depois do desconto.

TABELA I

CÓDIGO			PREÇO
1 a 10 			R$ 10,00
11 a 20 		R$ 15,00
21 a 30 		R$ 20,00
31 a 40 		R$ 30,00

TABELA II

PREÇO TOTAL DA NOTA 			% DE DESCONTO
Até R$ 250,00 						5%
Entre R$ 250,00 e R$ 500,00 		10%
Acima de R$ 500,00 					15% 
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int codigo, quantidade;
	double preco, preco_total, desconto, preco_final;
	
	cout << "Digite o codigo: ";
	cin >> codigo;
	
	cout << "Digite a quantidade comprada: ";
	cin >> quantidade;
	
	if (codigo > 30 && codigo <= 40) {
		preco = 30.0;
	} 
	else if (codigo > 20 && codigo <= 30) {
		preco = 20.0;
	}
	else if (codigo > 10 && codigo <= 20) {
		preco = 15.0;
	} 
	else if (codigo > 0 && codigo <= 10) {
		preco = 10.0;
	} 
	else {
		cout << "Codigo invalido";
		return 0;
	}
	
	preco_total = preco * quantidade;
	
	if (preco_total > 500) {
		desconto = preco_total * 0.15;
	}
	else if (preco_total > 250) {
		desconto = preco_total * 0.10;
	}
	else {
		desconto = preco_total * 0.05;
	}
	
	preco_final = preco_total - desconto;

	cout << fixed << setprecision(2);
	cout << "Preco unitario: R$" << preco << endl;
	cout << "Preco total: R$" << preco_total << endl;
	cout << "Desconto: R$" << desconto << endl;
	cout << "Preco final: R$" << preco_final;
	
	return 0;
}