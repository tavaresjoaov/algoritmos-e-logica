/* Faça um programa que receba a altura e o sexo de uma pessoa e calcule e 
mostre seu peso ideal, utilizando as seguintes fórmulas (onde h é a altura):

■ para homens: (72.7 * h) – 58.
■ para mulheres: (62.1 * h) – 44.7.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	double altura, peso_ideal;
	char sexo;
	
	cout << "Digite a sua altura: ";
	cin >> altura;
	
	cout << "Digite o seu sexo (M/F): ";
	cin >> sexo;
	
	if (sexo == 'M' || sexo == 'm') {
		peso_ideal = (72.7 * altura) - 58;
	}
	else if (sexo == 'F' || sexo == 'f') {
		peso_ideal = (62.1 * altura) - 44.7;
	}
	else {
		cout << "Erro: opcao invalida";
		return 0;
	}
	
	cout << fixed << setprecision(2);
	cout << "Peso ideal: " << peso_ideal << " kg";
	
	return 0;
}