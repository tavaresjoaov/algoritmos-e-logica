/* 
Faça um programa que apresente o menu de opções a seguir:

Menu de opções:
1. Média aritmética
2. Média ponderada
3. Sair
Digite a opção desejada.

Na opção 1: receber duas notas, calcular e mostrar a média aritmética.
Na opção 2: receber três notas e seus respectivos pesos, calcular e mostrar a média ponderada.
Na opção 3: sair do programa.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int opcao;
	double n1, n2, n3, media;
	double p1, p2, p3;

    do {
    	
    	cout << "\n1. Media aritmetica" << endl;
    	cout << "2. Media ponderada" << endl;
    	cout << "3. Sair" << endl;
    	cout << "Digite a opcao desejada: ";
    	cin >> opcao;

        switch (opcao) {

            case 1:
                cout << "\nDigite a primeira nota: ";
                cin >> n1;
                
                cout << "Digite a segunda nota: ";
                cin >> n2;
                
                media = (n1 + n2) / 2.0;
                
                cout << fixed << setprecision(2);
                cout << "\nMedia aritmetica: " << media << endl;
                
                break;

            case 2:
                cout << "\nDigite a primeira nota: ";
                cin >> n1;
                
                cout << "Digite o peso da primeira nota: ";
                cin >> p1;
                
                cout << "\nDigite a segunda nota: ";
                cin >> n2;
                
                cout << "Digite o peso da segunda nota: ";
                cin >> p2;
                
                cout << "\nDigite a terceira nota: ";
                cin >> n3;
                
                cout << "Digite o peso da terceira nota: ";
                cin >> p3;
                
                media = ((n1 * p1) + (n2 * p2) + (n3 * p3))
                        / (p1 + p2 + p3);
                
                cout << fixed << setprecision(2);
                cout << "\nMedia ponderada: " << media << endl;
                
                break;

            case 3:
                break;

            default:
                cout << "\nOpcao invalida!" << endl;
                break;
        }

    } while (opcao != 3);

    return 0;
}