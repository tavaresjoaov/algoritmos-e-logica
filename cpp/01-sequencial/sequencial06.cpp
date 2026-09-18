/* Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) a idade dessa pessoa em anos;
b) a idade dessa pessoa em meses;
c) a idade dessa pessoa em dias;
d) a idade dessa pessoa em semanas. */

#include <iostream>
using namespace std;

int main() {
	
	int ano_nascimento, ano_atual;
	int idade_anos,	idade_meses, idade_dias, idade_semanas;
	
	cout << "Digite o ano de nascimento: ";
	cin >> ano_nascimento;
	
	cout << "Digite o ano atual: ";
	cin >> ano_atual;
	
	idade_anos = ano_atual - ano_nascimento;
	idade_meses = 12 * idade_anos;
	idade_dias = 365 * idade_anos;
	idade_semanas = idade_dias/7;
	
	cout << "Idade em anos: " << idade_anos << " anos" << endl;
	cout << "Idade em meses: " << idade_meses << " meses" << endl;
	cout << "Idade em dias: " << idade_dias << " dias" << endl;
	cout << "Idade em semanas: " << idade_semanas << " semanas";
	
	return 0;
}