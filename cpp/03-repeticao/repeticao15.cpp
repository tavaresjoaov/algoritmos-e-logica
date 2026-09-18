/* 
Em uma eleição presidencial existem quatro candidatos. Os votos são 
informados por meio de código. Os códigos utilizados são:

1, 2, 3, 4 		Votos para os respectivos candidatos
5 				Voto nulo
6 				Voto em branco

Faça um programa que calcule e mostre:

■ o total de votos para cada candidato;
■ o total de votos nulos;
■ o total de votos em branco;
■ a porcentagem de votos nulos sobre o total de votos; e
■ a porcentagem de votos em branco sobre o total de votos.

Para finalizar o conjunto de votos, tem-se o valor zero e, 
para códigos inválidos, o programa deverá mostrar uma mensagem.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int codigo;
    
    int cont = 0, cont1 = 0, cont2 = 0, cont3 = 0;
    int cont4 = 0, cont5 = 0, cont6 = 0;
    
    cout << "ELEICAO PRESIDENCIAL\n";
    cout << "0. Encerrar\n";
    cout << "1 ao 4. Candidatos\n";
    cout << "5. Voto nulo\n";
    cout << "6. Voto em branco\n";
    
    cout << endl;
    
    cout << "Digite um codigo: ";
    cin >> codigo;
    
    while (codigo != 0) {
    	
    	if (codigo < 0 || codigo > 6) {
    		cout << "Erro: codigo invalido!" << endl;
		}
		else {
			
			cont++;
			
			if (codigo == 1) {
				cont1++;
			}
			if (codigo == 2) {
				cont2++;
			}
			if (codigo == 3) {
				cont3++;
			}
			if (codigo == 4) {
				cont4++;
			}
			if (codigo == 5) {
				cont5++;
			}
			if (codigo == 6) {
				cont6++;
			}
		}
		
		cout << "\nDigite um codigo: ";
    	cin >> codigo;
	}

    double porcent5 = 0;
    double porcent6 = 0;

    if (cont > 0) {
        porcent5 = (double)cont5 / cont * 100;
        porcent6 = (double)cont6 / cont * 100;
    }
    
    cout << fixed << setprecision(2);

	cout << "\nELEICAO PRESIDENCIAL\n";
    cout << "\nCandidato 1: " << cont1 << " votos";
    cout << "\nCandidato 2: " << cont2 << " votos";
    cout << "\nCandidato 3: " << cont3 << " votos";
    cout << "\nCandidato 4: " << cont4 << " votos";
    cout << "\nVoto nulo: " << cont5 << " votos";
    cout << "\nVoto em branco: " << cont6 << " votos";
    cout << "\nPorcentagem de votos nulos: " << porcent5  << "%";
    cout << "\nPorcentagem de votos em branco: " << porcent6 << "%";

    return 0;
}