/* Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
que este sofreu um desconto de 10%. */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	double preco1, preco2;
	
	cout << "Digite o preco do produto: ";
	cin >> preco1;
	
	preco2 = preco1 * 0.90;
	
	cout << fixed << setprecision(2);
	cout << "Novo preco = " << preco2;
	
	return 0;
}