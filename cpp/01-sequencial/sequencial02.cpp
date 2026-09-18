/* Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, 
considerando peso 2 para a primeira e peso 3 para a segunda. */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	float n1, n2, media;
	
	cout << "Digite a primeira nota: ";
	cin >> n1;
	
	cout << "Digite a segunda nota: ";
	cin >> n2;
	
	media = (n1 * 2.0) + (n2 * 3.0)/5.0;
	
	cout << fixed << setprecision(2);
	cout << "Media Ponderada = " << media;
	
	return 0;
}