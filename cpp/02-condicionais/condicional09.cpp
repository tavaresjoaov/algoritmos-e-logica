/* Faça um programa que receba:

■ o preço do produto;
■ a categoria:
  1 — Limpeza
  2 — Alimentação
  3 — Vestuário
■ a situação:
  R — Produtos que necessitam de refrigeração;
  N — Produtos que não necessitam de refrigeração.

Calcule e mostre:

■ O valor do aumento, usando as regras que se seguem.

   PREÇO      	 CATEGORIA       AUMENTO
   <= R$ 25       	1              5%
   <= R$ 25			2              8%
   <= R$ 25 		3             10%

   > R$ 25        	1             12%
   > R$ 25 			2             15%
   > R$ 25 			3             18%

O produto que preencher pelo menos um dos seguintes 
requisitos pagará imposto equivalente a 5% do preço; 
caso contrário, pagará 8%. Os requisitos são:

Categoria: 2
Situação: R

■ O novo preço, ou seja, o preço mais aumento menos imposto.
■ A classificação, usando as regras a seguir.

   NOVO PREÇO              			CLASSIFICAÇÃO
   <= R$ 50,00             				Barato
   Entre R$ 50,00 e R$ 120,00   		Normal
   >= R$ 120,00             			Caro

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int categoria;
	char situacao;
	double preco, aumento, imposto, novo_preco;
	
	cout << "Digite o preco do produto: ";
	cin >> preco;
  
	cout << "1 - Limpeza\n";
	cout << "2 - Alimentacao\n";
	cout << "3 - Vestuario\n";
	cout << "Digite a categoria: ";
	cin >> categoria;
	
	cout << "Digite a situacao (R/N): "; 
	cin >> situacao;
	
	if (situacao != 'R' && situacao != 'r' &&
    	situacao != 'N' && situacao != 'n') {
    	cout << "Erro: situacao invalida.";
    	return 0;
}
	
	if (preco <= 25.0) {
		
		switch (categoria) {
			case 1:
				aumento = preco * 0.05;
				break;
			case 2:
				aumento = preco * 0.08;
				break;
			case 3:
				aumento = preco * 0.10;
				break;
			default:
				cout << "Erro: categoria invalida.";
				return 0;
		}
	}
	else {
		switch (categoria) {
			case 1:
				aumento = preco * 0.12;
				break;
			case 2:
				aumento = preco * 0.15;
				break;
			case 3:
				aumento = preco * 0.18;
				break;
			default:
				cout << "Erro: categoria invalida";
				return 0;
		}
	}
	
	if (categoria == 2 || situacao == 'R' || situacao == 'r') {
		imposto = preco * 0.05;
	}
	else {
		imposto = preco * 0.08;
	}
	
	novo_preco = preco + aumento - imposto;
	
	cout << fixed << setprecision(2);
	cout << "Aumento: R$ " << aumento << endl;
	cout << "Novo preco: R$ " << novo_preco << endl;
	
	if (novo_preco >= 120) {
		cout << "Caro";
	}
	else if (novo_preco > 50) {
		cout << "Normal";
	}
	else {
		cout << "Barato";
	}
	
	return 0;
}