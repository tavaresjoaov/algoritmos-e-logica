/*
Faça um programa que receba um par de coordenadas inteiras (x, y),
representando um ponto no plano cartesiano.

Determine e mostre em qual quadrante o ponto está localizado:

- 1º quadrante;
- 2º quadrante;
- 3º quadrante;
- 4º quadrante.

O programa também deverá identificar corretamente os casos em que
o ponto está:

- sobre o eixo X;
- sobre o eixo Y;
- exatamente na origem.

Apresente uma mensagem adequada para cada situação.
*/

#include <iostream>

using namespace std;

int main() {

    int x, y;

    cout << "Digite as coordenadas do plano cartesiano:\n";

    cout << "x: ";
    cin >> x;

    cout << "y: ";
    cin >> y;

    if (x > 0 && y > 0) {
    	cout << "Esta no primeiro quadrante." << endl;
	}
	else if (x < 0 && y > 0) {
    	cout << "Esta no segundo quadrante." << endl;
	}
	else if (x < 0 && y < 0) {
    	cout << "Esta no terceiro quadrante." << endl;
	}
	else if (x > 0 && y < 0) {
    	cout << "Esta no quarto quadrante." << endl;
	}

    if (y == 0 && x != 0) {
    	cout << "Esta sobre o eixo x." << endl;
	}
	else if (x == 0 && y != 0) {
    	cout << "Esta sobre o eixo y." << endl;
	}
	else if (x == 0 && y == 0) {
    	cout << "Esta na origem." << endl;
	}

    return 0;
}