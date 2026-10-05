/*
4. Faca um programa que leia e armazene 10 numeros inteiros em
um vetor. Apos o preenchimento, percorra o vetor e realize uma
analise de seus elementos.

O programa devera:
- mostrar todos os numeros pares encontrados;
- informar a quantidade de numeros pares;
- mostrar todos os numeros impares encontrados;
- informar a quantidade de numeros impares.
*/

#include <iostream>
using namespace std;

int main() {

    int v[10];

    int pares = 0;
    int impares = 0;

    cout << "Digite os numeros do vetor:\n";

    for (int i = 0; i < 10; i++) {
        cin >> v[i];
    }

    cout << "\nPares:\n";

    for (int i = 0; i < 10; i++) {

        if (v[i] % 2 == 0) {
            cout << v[i] << " ";
            pares++;
        }
    }

    cout << "\n\nQuantidade de pares: " << pares;

    cout << "\n\nImpares:\n";

    for (int i = 0; i < 10; i++) {

        if (v[i] % 2 != 0) {
            cout << v[i] << " ";
            impares++;
        }
    }

    cout << "\n\nQuantidade de impares: " << impares;

    return 0;
}