/* Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. 
Faça um programa que receba o salário fixo do funcionário e o valor de suas vendas, 
calcule e mostre a comissão e seu salário final. */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	double salario, vendas, comissao, salario_final;
	
	cout << "Digite o salario do funcionario: ";
	cin >> salario;
	
	cout << "Digite o valor de suas vendas: ";
	cin >> vendas;
	
	comissao = vendas * 0.04;
	salario_final = salario + comissao;
	
	cout << fixed << setprecision(2);
	cout << "Comissao = " << comissao << endl;
	cout << "Salario final = " << salario_final;
	
	return 0;
}