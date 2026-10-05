/*
5. Uma turma deseja analisar as notas obtidas pelos alunos em uma
avaliação. Faça um programa que leia a quantidade n de notas e 
armazene-as em um vetor de números reais.

Após a leitura, realize uma análise das notas e mostre:

■ a soma de todas as notas;
■ a média aritmética das notas;
■ a maior nota e a posição em que ela foi encontrada;
■ a menor nota e a posição em que ela foi encontrada;
■ a quantidade de notas acima da média;
■ a quantidade de notas abaixo da média;
■ a quantidade de notas iguais à média.

Considere que:
■ n deve estar entre 1 e 100;
■ a média deve ser apresentada com 2 casas decimais;
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	double notas[100];
	int n;
    
    cout << "Digite a quantidade de notas:\n";
    cin >> n;
	
	double soma = 0;

    cout << "Digite as notas armazenadas no vetor:\n";

    for (int i = 0; i < n; i++) {
        cin >> notas[i];
        
        soma += notas[i];
        
    }
    
    double media = soma / n;
    
    cout << fixed << setprecision(2);
    
    cout << "\nSoma de todas as notas: " << soma << endl;
    cout << "Media das notas: " << media << endl;
    
    double maior = notas[0];
    double menor = notas[0];
    
    for (int i = 1; i < n; i++) {
        
        if (notas[i] > maior) {
        	maior = notas[i];
		}
		
		if (notas[i] < menor) {
        	menor = notas[i];
		}
        
    }
    
    cout << "Maior nota: " << maior << endl;
    cout << "Menor nota: " << menor << endl;
    
    int acima = 0;
    int abaixo = 0;
	int igual = 0;
    
    for (int i = 0; i < n; i++) {
        
        if (notas[i] > media) {
        	acima++;
		}
		
		else if (notas[i] < media) {
        	abaixo++;
		}
		
		else {
        	igual++;
		}
        
    }
    
    cout << "Quantidade de notas acima da media: " << acima << endl;
	cout << "Quantidade de notas abaixo da media: " << abaixo << endl;
	cout << "Quantidade de notas iguais a media: " << igual << endl;
	
    return 0;
}