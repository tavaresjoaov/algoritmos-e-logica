/* Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. 
Faça um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a 
tabela a seguir. Mostre o saldo médio e o valor do crédito.

	SALDO MÉDIO 						PERCENTUAL
Acima de R$ 400,00 					30% do saldo médio
R$ 400,00 •------○ R$ 300,00 		25% do saldo médio
R$ 300,00 •------○ R$ 200,00 		20% do saldo médio
Até R$ 200,00 						10% do saldo médio
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	double saldo, credito;
	
	cout << "Digite o saldo medio: ";
	cin >> saldo;
	
	if (saldo > 400) {
		credito = 0.30 * saldo;
	}
	else if (saldo > 300) {
		credito = 0.25 * saldo;
	}
	else if (saldo > 200) {
		credito = 0.20 * saldo;
	}
	else {
		credito = 0.10 * saldo;
	}
	
	cout << fixed << setprecision(2);
	cout << "Saldo medio: R$ " << saldo << endl;
	cout << "Valor do credito: R$ " << credito;
	
	return 0;
}