/* Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo
segundo. Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar
com validações. */

#include <iostream>
using namespace std;

int main() {
	
	double n1, n2, resultado;
	
	cout << "Digite o primeiro numero: ";
	cin >> n1;
	
	cout << "Digite o segundo numero: ";
	cin >> n2;
	
	resultado = n1/n2;
	
	cout << "Resultado da Divisao = " << resultado;
	
	return 0;
}