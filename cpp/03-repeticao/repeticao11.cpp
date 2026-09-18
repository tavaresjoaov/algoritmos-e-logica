/* 
Foi feita uma pesquisa sobre a audiência de canal de TV em várias casas de uma cidade, em determinado
dia. Para cada casa consultada foi fornecido o número do canal (4, 5, 7, 12) e o número de pessoas que
estavam assistindo àquele canal. Se a televisão estivesse desligada, nada era anotado, ou seja, essa casa
não entrava na pesquisa. Faça um programa que:

■ leia um número indeterminado de dados (número do canal e número de pessoas que estavam as-
sistindo); e

■ calcule e mostre a porcentagem de audiência de cada canal.

Para encerrar a entrada de dados, digite o número do canal ZERO.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int canal;
	int pessoas;
	
	int cont4 = 0;
	int cont5 = 0;
	int cont7 = 0;
	int cont12 = 0;
	int soma = 0;
	
	cout << "Digite o numero do canal (4, 5, 7, 12) ou 0 para encerrar: ";
	cin >> canal;
	
	while (canal != 0) {
		
		if (canal != 4 && canal != 5 && canal != 7 && canal != 12) {
			cout << "Erro: canal invalido!" << endl;
		}
		else {
			
			cout << "Digite o numero de pessoas assistindo: ";
			cin >> pessoas;
			
			if (canal == 4) {
				cont4 += pessoas;
			}
			
			if (canal == 5) {
				cont5 += pessoas;
			}
			
			if (canal == 7) {
				cont7 += pessoas;
			}
			
			if (canal == 12) {
				cont12 += pessoas;
			}
			
			soma += pessoas;
		}
		
		cout << endl;
		
		cout << "Digite o numero do canal (4, 5, 7, 12) ou 0 para encerrar: ";
		cin >> canal;
	}
	
	double audiencia4 = 0;
	double audiencia5 = 0;
	double audiencia7 = 0;
	double audiencia12 = 0;
	
	if (soma > 0) {
		audiencia4 = (double)cont4 / soma * 100;
		audiencia5 = (double)cont5 / soma * 100;
		audiencia7 = (double)cont7 / soma * 100;
		audiencia12 = (double)cont12 / soma * 100;
	}
	
	cout << fixed << setprecision(2);
	
	cout << "\nAudiencia do canal 4: " << audiencia4 << "%" << endl;
	cout << "Audiencia do canal 5: " << audiencia5 << "%" << endl;
	cout << "Audiencia do canal 7: " << audiencia7 << "%" << endl;
	cout << "Audiencia do canal 12: " << audiencia12 << "%" << endl;

    return 0;
}