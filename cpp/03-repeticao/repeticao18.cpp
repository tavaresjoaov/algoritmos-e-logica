/* 
Uma agência bancária possui vários clientes que podem 
fazer investimentos com rendimentos mensais, conforme 
a tabela a seguir:

TIPO 	DESCRIÇÃO 				RENDIMENTO MENSAL
1 		Poupança 				1,5%
2 		Poupança plus 			2%
3 		Fundos de renda fixa 	4%

Faça um programa que leia o código do cliente, o tipo 
do investimento e o valor investido, e que calcule e 
mostre o rendimento mensal de acordo com o tipo do 
investimento. No final, o programa deverá mostrar o 
total investido e o total de juros pagos.

A leitura terminará quando o código do cliente 
digitado for menor ou igual a 0.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	cout << fixed << setprecision(2);

	int codigo, tipo;
	double valor, juros;
	double total_valor = 0;
	double total_juros = 0;
	
	cout << "PARA ENCERRAR, DIGITE UM CODIGO MENOR OU IGUAL A 0\n\n";
	cout << "Digite o codigo do cliente: ";
	cin >> codigo;
	
	while (codigo > 0) {
		
		cout << "Digite o tipo do investimento (1, 2 ou 3): ";
		cin >> tipo;
		
		if (tipo <= 0 || tipo > 3) {
			cout << "Erro: tipo invalido\n\n";
		}
		else {
			
			cout << "Digite o valor investido: ";
			cin >> valor;
			
			if (tipo == 1) {
				juros = valor * 0.015;
			}
			
			else if (tipo == 2) {
				juros = valor * 0.02;
			}
			
			else {
				juros = valor * 0.04;
			}
			
			cout << "Rendimento mensal: R$ " << juros << endl;
			
			total_valor += valor;
			total_juros += juros;
			
			cout << endl;
			
		}
		
		cout << "Digite o codigo do cliente: ";
		cin >> codigo;
		
	}
	
	cout << endl;
	cout << "Total investido: R$ " << total_valor << endl;
	cout << "Total de juros: R$ " << total_juros;
	
    return 0;
}