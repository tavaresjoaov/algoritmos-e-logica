/* Faça um programa que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado. */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	double peso, novo_peso1, novo_peso2;
	
	cout << "Digite o peso: ";
	cin >> peso;
	
	novo_peso1 = peso * 1.15;
	novo_peso2 = peso * 0.80;
	
	cout << fixed << setprecision(2);
	cout << "Se a pessoa engordar: " << novo_peso1 << " kg" << endl;
	cout << "Se a pessoa emagrecer: " << novo_peso2 << " kg";
	
	return 0;
}