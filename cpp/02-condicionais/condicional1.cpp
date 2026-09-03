/* Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra
na tabela a seguir:

MÉDIA ARITMÉTICA 		MENSAGEM
0,0 •------○ 3,0 		Reprovado
3,0 •------○ 7,0 		Exame
7,0 •------• 10,0 		Aprovado
*/

#include <iostream>
using namespace std;

int main() {
	
	double n1, n2, media;
	
	cout << "Digite a primeira nota: ";
	cin >> n1;
	
	cout << "Digite a segunda nota: ";
	cin >> n2;
	
	media = (n1 + n2) / 2.0;
	
	cout << "Media = " << media << endl;
	
	if (media < 3.0) {
		cout << "REPROVADO";
	} 
	else if (media < 7.0) {
		cout << "EXAME";
	}
	else {
		cout << "APROVADO";
	}
	
	return 0;
}