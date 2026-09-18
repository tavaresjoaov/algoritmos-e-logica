/* Faça um programa que receba o preço de um produto, calcule e mostre, 
de acordo com as tabelas a seguir, o novo preço e a classificação.

TABELA 1 — PERCENTUAL DE AUMENTO

PREÇO 							%
Até R$ 50,00 					5
Entre R$ 50,00 e R$ 100,00 		10
Acima de R$ 100,00 				15


TABELA 2 — CLASSIFICAÇÕES

NOVO PREÇO 									CLASSIFICAÇÃO
Até R$ 80,00 								Barato
Entre R$ 80,00 e R$ 120,00 (inclusive) 		Normal
Entre R$ 120,00 e R$ 200,00 (inclusive) 	Caro
Maior que R$ 200,00 						Muito caro

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	double preco, novo_preco;
	
	cout << "Digite o preco: ";
	cin >> preco;
	
	if (preco > 100) {
		novo_preco = preco * 1.15;
	}
	else if (preco > 50) {
		novo_preco = preco * 1.10;
	}
	else {
		novo_preco = preco * 1.05;
	}
	
	cout << fixed << setprecision(2);
	cout << "Novo preco: R$ " << novo_preco << endl;
	
	if (novo_preco > 200) {
		cout << "Muito caro";
	}
	else if (novo_preco > 120) {
		cout << "Caro";
	}
	else if (novo_preco > 80) {
		cout << "Normal";
	}
	else {
		cout << "Barato";
	}
	
	return 0;
}