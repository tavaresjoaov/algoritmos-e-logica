/*
3. Leia um vetor de 6 números inteiros e, após o preenchimento,
mostre o vetor original.

Em seguida, solicite ao usuário:
■ o índice de uma posição que deseja alterar;
■ um novo valor para essa posição.

Verifique se o índice informado é válido. Caso seja, substitua
o elemento daquela posição pelo novo valor.

Ao final, mostre:
■ o índice que foi alterado;
■ o valor que estava armazenado nessa posição antes da alteração;
■ o novo valor;
■ o vetor atualizado.
*/

#include <iostream>
using namespace std;

int main() {
	
	int v[6];
	int indice, antigo, novo;
	
	cout << "Digite os numeros do vetor:\n";
	
	for (int i = 0; i < 6; i++) {
		cin >> v[i];
	}
	
	cout << endl;
	
	for (int i = 0; i < 6; i++) {
		cout << "v[" << i << "] = " << v[i] << endl;
	}
	
	cout << "\nDigite o indice que deseja alterar: ";
	cin >> indice;
	
	 if (indice >= 0 && indice < 6) {

        cout << "Digite o novo valor: ";
        cin >> novo;

        antigo = v[indice];
        v[indice] = novo;

        cout << "\nIndice alterado: " << indice << endl;
        cout << "Valor antigo: " << antigo << endl;
        cout << "Valor novo: " << novo << endl;

        cout << "\nVetor atualizado:\n";

        for (int i = 0; i < 6; i++) {
            cout << "v[" << i << "] = " << v[i] << endl;
        }

    }
    else {
        cout << "\nErro: indice invalido!";
    }

    return 0;
}