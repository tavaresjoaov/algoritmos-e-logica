/* 
Uma loja utiliza o código V para transação à vista e 
P para transação a prazo. Faça um programa que receba
o código e o valor de quinze transações, calcule e mostre:

■ o valor total das compras à vista;
■ o valor total das compras a prazo;
■ o valor total das compras efetuadas; e
■ o valor da primeira prestação das compras a prazo juntas, 
sabendo-se que serão pagas em três vezes.
*/

#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int main() {

    char codigo;
    double valor;

    double qtd_vista = 0;
    double qtd_prazo = 0;
    

    for (int i = 1; i <= 15; i++) {

        cout << "Digite o codigo (V/P): ";
    	cin >> codigo;
    	
    	codigo = toupper(codigo);
    
    	cout << "Digite o valor da transacao: ";
    	cin >> valor;
    	
    	if (codigo == 'V') {
    		qtd_vista += valor;
		}
		else if (codigo == 'P') {
    		qtd_prazo += valor;
		}
		else {
			cout << "Erro: codigo invalido.";
			return 0;
		}
		
		cout << endl;
    }
    
    double total = qtd_vista + qtd_prazo;
    
    cout << fixed << setprecision(2);
    cout << "Valor total a vista: R$ " << qtd_vista << endl;
    cout << "Valor total a prazo: R$ " << qtd_prazo << endl;
    cout << "Valor total de compras efetuadas: R$ " << total << endl;
    cout << "Valor da primeira prestacao das compras a prazo: R$ " << qtd_prazo / 3.0 << endl;

    return 0;
}