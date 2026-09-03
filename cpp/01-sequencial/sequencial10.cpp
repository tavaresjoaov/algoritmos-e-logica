/*
Faça um programa que receba o ângulo formado entre uma escada apoiada
no chão e a distância horizontal entre o pé da escada e a parede.

Considere que a escada, o chão e a parede formam um triângulo retângulo, onde:
- a escada representa a hipotenusa;
- a distância entre o pé da escada e a parede representa o cateto
  adjacente ao ângulo informado;
- a altura alcançada pela escada na parede representa o cateto oposto.

O programa deverá receber:
- o ângulo formado pela escada com o chão, em graus;
- a distância entre o pé da escada e a parede, em metros.

Calcule e mostre o comprimento mínimo da escada necessário para que
ela alcance a parede na altura correspondente ao ângulo informado.

Utilize a relação trigonométrica:
cos(ângulo) = cateto adjacente / hipotenusa

Observação:
As funções trigonométricas utilizadas pela linguagem trabalham com
ângulos em radianos. Portanto, converta o ângulo de graus para radianos
antes de utilizar a função cosseno.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	
	const double PI = 3.141592653589793;
	double graus, cat_adj, rad, hipotenusa;
	
	cout << "Digite o angulo em graus: ";
	cin >> graus;
	
	cout << "Digite a distancia em metros: ";
	cin >> cat_adj;
	
	rad = graus * PI / 180.0;
	hipotenusa = cat_adj / cos(rad);
	
	cout << fixed << setprecision(2);
	cout << "Comprimento minimo da escada: " << hipotenusa << " m";
	
	return 0;
}