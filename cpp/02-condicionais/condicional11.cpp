/* Leia o nome e o número de votos de 3 candidatos concorrentes 
e imprima a classificação do 1º ao 3º colocado em ordem decrescente, 
utilizando exclusivamente estruturas condicionais aninhadas (if-else), 
sem o uso de listas ou funções como sort().
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    string cand1, cand2, cand3;
    int v1, v2, v3;

    cout << "Digite o nome do candidato 1: ";
    cin >> cand1;

    cout << "Digite o nome do candidato 2: ";
    cin >> cand2;

    cout << "Digite o nome do candidato 3: ";
    cin >> cand3;

    cout << "Digite a quantidade de votos de " << cand1 << ": ";
    cin >> v1;

    cout << "Digite a quantidade de votos de " << cand2 << ": ";
    cin >> v2;

    cout << "Digite a quantidade de votos de " << cand3 << ": ";
    cin >> v3;

    if (v1 > v2) {

        if (v1 > v3) {
            cout << "1o lugar: " << cand1 << ", " << v1 << " votos" << endl;

            if (v2 > v3) {
                cout << "2o lugar: " << cand2 << ", " << v2 << " votos" << endl;
                cout << "3o lugar: " << cand3 << ", " << v3 << " votos";
            }
            else {
                cout << "2o lugar: " << cand3 << ", " << v3 << " votos" << endl;
                cout << "3o lugar: " << cand2 << ", " << v2 << " votos";
            }
        }
        else {
            cout << "1o lugar: " << cand3 << ", " << v3 << " votos" << endl;
            cout << "2o lugar: " << cand1 << ", " << v1 << " votos" << endl;
            cout << "3o lugar: " << cand2 << ", " << v2 << " votos";
        }
    }
    else {

        if (v2 > v3) {
            cout << "1o lugar: " << cand2 << ", " << v2 << " votos" << endl;

            if (v1 > v3) {
                cout << "2o lugar: " << cand1 << ", " << v1 << " votos" << endl;
                cout << "3o lugar: " << cand3 << ", " << v3 << " votos";
            }
            else {
                cout << "2o lugar: " << cand3 << ", " << v3 << " votos" << endl;
                cout << "3o lugar: " << cand1 << ", " << v1 << " votos";
            }
        }
        else {
            cout << "1o lugar: " << cand3 << ", " << v3 << " votos" << endl;
            cout << "2o lugar: " << cand2 << ", " << v2 << " votos" << endl;
            cout << "3o lugar: " << cand1 << ", " << v1 << " votos";
        }
    }

    return 0;
}