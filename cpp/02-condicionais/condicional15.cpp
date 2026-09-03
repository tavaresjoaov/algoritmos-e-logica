/*
Faça um programa que receba quatro números reais distintos.

Determine quais são os dois menores valores entre os quatro números
e calcule a soma desses dois valores.

Ao final, mostre:

- o menor número;
- o segundo menor número;
- a soma dos dois menores números.

Não utilize vetores ou estruturas de repetição.

Resolva o problema utilizando apenas variáveis e estruturas
condicionais.
*/

#include <iostream>

using namespace std;

int main() {

    double n1, n2, n3, n4;

    cout << "Digite quatro numeros reais distintos:\n";
    cin >> n1 >> n2 >> n3 >> n4;

    double menor, segundo_menor, soma;
    
    if (n1 < n2) {
    	menor = n1;
    	segundo_menor = n2;
	}
	else {
    	menor = n2;
    	segundo_menor = n1;
	}
	
	if (n3 < menor) {
		segundo_menor = menor;
		menor = n3;
	}
	else if (n3 < segundo_menor) {
    	segundo_menor = n3;
	}
	
	if (n4 < menor) {
		segundo_menor = menor;
		menor = n4;
	}
	else if (n4 < segundo_menor) {
    	segundo_menor = n4;
	}
	
	soma = menor + segundo_menor;
	
	cout << "Menor numero: " << menor << endl;
	cout << "Segundo menor numero: " << segundo_menor << endl;
	cout << "Soma dos dois menores numeros: " << soma;

    return 0;
}