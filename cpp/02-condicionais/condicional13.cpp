/*
Considere duas equações de reta no plano cartesiano:

    y = a1*x + b1

    y = a2*x + b2

Faça um programa que receba os coeficientes a1, b1, a2 e b2 das duas
retas e determine se elas possuem um ponto de interseção.

Caso as retas se intersectem, calcule e mostre as coordenadas (x, y)
do ponto de interseção.

O programa também deverá identificar os casos em que:

- as retas são paralelas e distintas;
- as retas são coincidentes.

Apresente uma mensagem adequada para cada situação.

Utilize os conceitos de equações lineares e plano cartesiano.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double a1, b1, a2, b2, x, y;

    cout << "Digite os coeficientes das duas retas:\n";

    cout << "a1: ";
    cin >> a1;

    cout << "b1: ";
    cin >> b1;

    cout << "a2: ";
    cin >> a2;

    cout << "b2: ";
    cin >> b2;

    if (a1 == a2) {

        if (b1 == b2) {
            cout << "Retas coincidentes.";
        }
        else {
            cout << "Retas paralelas e distintas.";
        }

        return 0;
    }

    x = (b2 - b1) / (a1 - a2);
    y = a1 * x + b1;

    cout << fixed << setprecision(2);

    cout << "Retas possuem ponto de interseccao." << endl;
    cout << "Coordenadas: (" << x << ", " << y << ")";

    return 0;
}