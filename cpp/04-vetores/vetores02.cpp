/*
2. Leia do teclado a quantidade n de elementos de um vetor de números
inteiros, considerando que o vetor pode possuir no máximo 100 elementos.

Em seguida, leia os n valores e armazene-os no vetor.

Após a leitura, percorra o vetor e mostre:
■ todos os seus elementos na mesma linha, separados por espaço;
■ a soma de todos os elementos;
■ a quantidade de elementos pares.
*/

#include <iostream>
using namespace std;

int main() {
	
	int v[100];
	int n;
	
	int soma = 0;
	int pares = 0;
	
	cout << "Digite o tamanho do vetor: ";
	cin >> n;
	
	cout << "\nDigite os numeros do vetor: ";
	
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	
	cout << endl;
	
	cout << "v[" << n << "] = ";
	
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
		
		soma += v[i];
		
		if (v[i] % 2 == 0) {
			pares++;
		}
	}
	
	cout << "\nSoma dos elementos = " << soma << endl;
	cout << "Quantidade de elementos pares = " << pares;
	
	return 0;
}