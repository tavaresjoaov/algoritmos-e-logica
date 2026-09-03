/* Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha
do usuário.

ESCOLHA DO USUÁRIO 					OPERAÇÃO
		1 				Média entre os números digitados
		2 				Diferença do maior pelo menor
		3 				Produto entre os números digitados
		4 				Divisão do primeiro pelo segundo

Se a opção digitada for inválida, mostre uma mensagem de erro e termine a execução do programa.
Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero.
*/

#include <iostream>
using namespace std;

int main() {
	
	int opcao;
	double n1, n2, resultado;
	
	cout << "Digite o primeiro numero: ";
	cin >> n1;
	
	cout << "Digite o segundo numero: ";
	cin >> n2;
	
	cout << "1 - Media\n";
	cout << "2 - Diferenca do maior pelo menor\n";
	cout << "3 - Produto\n";
	cout << "4 - Divisao do primeiro pelo segundo\n";
	cout << "Escolha uma opcao: ";
	cin >> opcao;
	
	switch (opcao) {
		case 1:
			resultado = (n1 + n2) / 2.0;
			break;
			
		case 2:
			if (n1 > n2) {
				resultado = n1 - n2;
			}
			else {
				resultado = n2 - n1;
			}
			break;
			
		case 3:
			resultado = n1 * n2;
			break;
			
		case 4:
			if (n2 != 0) {
				resultado = n1 / n2;
			}
			else {
				cout << "Erro: divisao por zero.";
        		return 0;
			}
			break;
			
		default:
			cout << "Opcao invalida";
			return 0;
	}
	
	cout << "Resultado = " << resultado;
	
	return 0;
}