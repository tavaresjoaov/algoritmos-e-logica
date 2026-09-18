/* Uma prefeitura deseja construir uma pequena praça formada por um triângulo equilátero, com uma fonte circular instalada exatamente no centro da praça.

Faça um programa que receba:

o lado l do triângulo, em metros;
o raio r da fonte circular, em metros;
o preço do revestimento por metro quadrado.

O programa deverá calcular e mostrar:

a) a altura do triângulo equilátero;
b) a área total da praça triangular;
c) a área da fonte circular;
d) a área efetivamente revestida, considerando que a área ocupada pela fonte não receberá revestimento;
e) o perímetro externo da praça;
f) a quantidade de revestimento necessária em metros quadrados, considerando ainda 5% de material adicional para perdas e recortes;
g) o custo total do revestimento. */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	
	const double PI = 3.141592653589793;
	double lado, raio, preco, altura;
	double area_tri, area_fonte, area_rev;
	double perimetro, area_m2, custo;
	
	cout << "Digite o valor do lado do Triangulo: ";
	cin >> lado;
	
	cout << "Digite o valor do raio da fonte circular: ";
	cin >> raio;
	
	cout << "Digite o preco do revestimento por metro quadrado: ";
	cin >> preco;
	
	altura = (lado * sqrt(3)) / 2;
	area_tri = (lado * altura) / 2;
	area_fonte = PI * raio * raio;
	area_rev = area_tri - area_fonte;
	perimetro = 3 * lado;
	area_m2 = area_rev * 1.05;
	custo = preco * area_m2;
	
	cout << fixed << setprecision(2);
	cout << "Altura do Triangulo = " << altura << " m" << endl;
	cout << "Area total da praca triangular = " << area_tri << " m2" << endl;
	cout << "Area da fonte circular =  " << area_fonte << " m2" << endl;
	cout << "Area revestida = " << area_rev << " m2" << endl;
	cout << "Perimetro externo = " << perimetro << " m" << endl;
	cout << "Quantidade de revestimento em m2 = " << area_m2 << " m2" << endl;
	cout << "Custo total = " << custo << " reais";
	
	return 0;
}