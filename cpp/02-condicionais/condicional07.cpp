/* 
Faça um programa que receba a idade e o peso de uma pessoa. De acordo com a tabela a seguir, verifique
e mostre em qual grupo de risco essa pessoa se encaixa.

		IDADE 									PESO

							Até 60 		Entre 60 e 90 (inclusive) 		Acima de 90
Menores que 20 				   9 					8 					     7
De 20 a 50 					   6 					5 						 4
Maiores que 50 				   3 					2 						 1
*/

#include <iostream>

using namespace std;

int main() {
	
	int idade, grupo;
	double peso;
	
	cout << "Digite a sua idade: ";
	cin >> idade;
	
	cout << "Digite o seu peso: ";
	cin >> peso;
	
	if (idade > 50) {
		if (peso > 90) {
			grupo = 1;
		}
		else if (peso >= 60) {
			grupo = 2;
		}
		else {
			grupo = 3;
		}
	}
	
	else if (idade >= 20) {
		if (peso > 90) {
			grupo = 4;
		}
		else if (peso >= 60) {
			grupo = 5;
		}
		else {
			grupo = 6;
		}
	}
	
	else {
		if (peso > 90) {
			grupo = 7;
		}
		else if (peso >= 60) {
			grupo = 8;
		}
		else {
			grupo = 9;
		}
	}
	
	cout << "Grupo de risco: " << grupo;
	
	return 0;
}