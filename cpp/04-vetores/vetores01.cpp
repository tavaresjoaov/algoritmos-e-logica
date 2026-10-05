/*
1. Declare um vetor de 5 números inteiros e inicialize-o com os
valores:

    {10, 20, 30, 40, 50}

Utilizando uma estrutura de repetição, percorra o vetor e mostre,
para cada posição:

    v[i] = valor

um elemento por linha.

Ao final, mostre também:

■ o primeiro elemento do vetor;
■ o último elemento do vetor.
*/

#include <iostream>
using namespace std;

int main() {
	
	int v[5] = {10, 20, 30, 40, 50};
	
	for (int i = 0; i < 5; i++) {
		cout << "v[" << i << "] = " << v[i] << endl;
	}
	
	cout << "\nPrimeiro elemento: " << v[0] << endl;
	cout << "Ultimo elemento: " << v[4];
	
	return 0;
}