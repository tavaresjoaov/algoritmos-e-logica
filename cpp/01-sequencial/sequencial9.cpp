/* Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número
de horas extras trabalhadas, calcule e mostre o salário a receber, de acordo com as regras a seguir:

a) a hora trabalhada vale 1/8 do salário mínimo;
b) a hora extra vale 1/4 do salário mínimo;
c) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
d) a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor
da hora extra;
e) o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras. */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	double hora_normal, valor_normal, salario_minimo, hora_extra, valor_extra;
	double salario_bruto, salario_extra, salario_final;
	
	cout << "Digite o numero de horas trabalhadas: ";
	cin >> hora_normal;
	
	cout << "Digite o valor do salario minimo: ";
	cin >> salario_minimo;
	
	cout << "Digite o numero de horas extras trabalhadas: ";
	cin >> hora_extra;
	
	valor_normal = salario_minimo / 8.0;
	valor_extra = salario_minimo / 4.0;
	salario_bruto = hora_normal * valor_normal;
	salario_extra = hora_extra * valor_extra;
	salario_final = salario_bruto + salario_extra;

	
	cout << fixed << setprecision(2);
	cout << "Salario a receber = " << salario_final << " reais";
	
	return 0;
}