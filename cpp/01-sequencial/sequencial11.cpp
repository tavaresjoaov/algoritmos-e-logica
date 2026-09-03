/*
Uma fonte sonora emite energia acústica igualmente em todas as direções. 
Considere que a energia se distribui pela superfície de uma esfera ao redor da fonte.
Faça um programa que receba:

- a potência sonora P da fonte, em watts (W);
- a distância d entre a fonte e o observador, em metros (m).

O programa deverá calcular e mostrar:

a) a área da superfície esférica atingida pelo som na distância informada;
b) a intensidade sonora I, em W/m²;
c) o nível sonoro L, em decibéis (dB).

Considere:
A = 4πd²
I= P/A
	​
Para calcular o nível sonoro, utilize:
L= 10 * log 10 (I/I0)
	​
Considere a intensidade de referência:
I0 = 10-¹² W/m²
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	
	const double PI = 3.141592653589793;
	double pot_som, dist, area;
	double intens, intens_ref, nivel_sonoro;
	
	cout << "Digite a potencia sonora em watts: ";
	cin >> pot_som;
	
	cout << "Digite a distancia em metros: ";
	cin >> dist;
	
	area = 4 * PI * dist * dist;
	intens = pot_som / area;
	intens_ref = pow(10, -12);
	nivel_sonoro = 10 * log10(intens/intens_ref);
	
	cout << fixed << setprecision(2);
	cout << "Area da superficie esferica = " << area << " m2" << endl;

	cout << scientific << setprecision(6);
	cout << "Intensidade sonora = " << intens << " W/m2" << endl;

	cout << fixed << setprecision(2);
	cout << "Nivel sonoro = " << nivel_sonoro << " dB";
	
	return 0;
}