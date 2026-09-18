/* Uma empresa deseja fabricar uma placa metálica composta por um 
retângulo de base B e altura H, unido a um semicírculo cujo diâmetro é igual à altura do retângulo.

Faça um programa que receba:
- a base do retângulo, em centímetros;
- a altura do retângulo, em centímetros;
- o preço do material por metro quadrado.

O programa deverá calcular e mostrar:

a) a área do retângulo;
b) o raio do semicírculo;
c) a área do semicírculo;
d) a área total da placa;
e) a quantidade de material necessária em metros quadrados;
f) o custo total da fabricação da placa. */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	const double pi = 3.141592653589793;
	double b, h, area_ret, raio, area_semic;
	double area_m2, area_total, custo, preco;
	
	cout << "Digite a base do retangulo: ";
	cin >> b;
	
	cout << "Digite a altura do retangulo: ";
	cin >> h;
	
	cout << "Digite o preco por metro quadrado: ";
	cin >> preco;
	
	area_ret = b * h;
	raio = h/2;
	area_semic = (pi * raio * raio) / 2;
	area_total = area_ret + area_semic;
	area_m2 = area_total / 10000;
	custo = preco * area_m2;
	
	cout << fixed << setprecision(2);
	cout << "Area do Retangulo = " << area_ret << " cm2" << endl;
	cout << "Raio do Semicirculo = " << raio << " cm" << endl;
	cout << "Area do Semicirculo =  " << area_semic << " cm2" << endl;
	cout << "Area Total = " << area_total << " cm2" << endl;
	cout << "Quantidade de material em m2 = " << area_m2 << " m2" << endl;
	cout << "Custo total = " << custo << " reais";
	
	return 0;
}