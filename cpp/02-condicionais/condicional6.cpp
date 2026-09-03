/* Faça um programa que receba a idade de um nadador e 
mostre sua categoria, usando as regras a seguir. 

Para idade inferior a 5, deverá mostrar mensagem.

CATEGORIA 		IDADE
Infantil 		5 a 7
Juvenil 		8 a 10
Adolescente 	11 a 15
Adulto 			16 a 30
Sênior 			Acima de 30 
*/

#include <iostream>

using namespace std;

int main() {
	
	int idade;
	
	cout << "Digite a idade: ";
	cin >> idade;
	
	if (idade > 30) {
		cout << "Senior";
	}
	else if (idade >= 16) {
		cout << "Adulto";
	}
	else if (idade >= 11) {
		cout << "Adolescente";
	}
	else if (idade >= 8) {
		cout << "Juvenil";
	}
	else if (idade >= 5) {
		cout << "Infantil";
	}
	else {
		cout << "Erro: idade inferior a 5";
		return 0;
	}
	
	return 0;
}