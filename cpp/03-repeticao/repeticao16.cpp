/* 
Faça um programa que apresente o menu de opções a seguir, que permita ao 
usuário escolher a opção desejada, receba os dados necessários para executar 
a operação e mostre o resultado. Verifique a possibilidade de opção inválida 
e não se preocupe com as restrições como salário inválido.

Menu de opções:
1. Novo salário
2. Férias
3. Décimo terceiro
4. Sair

Digite a opção desejada.

Na opção 1: receber o salário de um funcionário, calcular e mostrar o novo 
salário usando as regras a seguir:

SALÁRIOS 								PERCENTAGEM DE AUMENTO
Até R$ 210,00 							15%
De R$ 210,00 a R$ 600,00 (inclusive) 	10%
Acima de R$ 600,00 						5%

Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor 
de suas férias. Sabe-se que as férias equivalem a seu salário acrescido de 
um terço do salário.

Na opção 3: receber o salário de um funcionário e o número de meses de trabalho 
na empresa, no máximo doze, calcular e mostrar o valor do décimo terceiro. Sabe-se 
que o décimo terceiro equivale a seu salário multiplicado pelo número de meses de 
trabalho dividido por 12.

Na opção 4: sair do programa.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int opcao;
	int meses;
	double salario;

    do {
    
		cout << "Menu de opcoes:";
		cout << "\n1. Novo salario";
		cout << "\n2. Ferias";
		cout << "\n3. Decimo terceiro";
		cout << "\n4. Sair\n";
		
		cout << "\nDigite a opcao desejada: ";
		cin >> opcao;

        switch (opcao) {

            case 1:
            	
                cout << "\nDigite o salario: ";
                cin >> salario;
                
                double aumento;
                
                if (salario > 600) {
                    aumento = salario * 0.05;
                }
                else if (salario >= 210) {
                    aumento = salario * 0.10;
                }
                else {
                    aumento = salario * 0.15;
                }
                
                double novo_salario;
                novo_salario = salario + aumento;
                
                cout << fixed << setprecision(2);
                cout << "\nNovo salario: R$ " << novo_salario << endl;
                
                break;

            case 2:
                
                cout << "\nDigite o salario: ";
                cin >> salario;
                
                double ferias;
                ferias = salario + (salario / 3.0);
                
                cout << fixed << setprecision(2);
                cout << "\nValor das ferias: R$ " << ferias << endl;
                
                break;

            case 3:
                
                cout << "\nDigite o salario: ";
                cin >> salario;
                
                cout << "\nDigite o numero de meses trabalhados (1 ao 12): ";
                cin >> meses;
                
                double decimo_terceiro;
                decimo_terceiro = (salario * meses) / 12.0;
                
                cout << fixed << setprecision(2);
                cout << "\nValor do decimo terceiro: R$ "
                     << decimo_terceiro << endl;
                
                break;

            case 4:
                break;

            default:
                cout << "\nOpcao invalida!" << endl;
                break;
        }

        cout << endl;

    } while (opcao != 4);

    return 0;
}