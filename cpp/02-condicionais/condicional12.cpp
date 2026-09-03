/*
Faça um programa que receba um número inteiro.

Verifique se o número possui exatamente quatro dígitos.

Caso não possua, encerre a execução informando que o número é inválido.

Caso possua quatro dígitos, determine os quatro dígitos que formam o número
e calcule a soma de seus dígitos.

Em seguida, verifique se a soma dos dois primeiros dígitos é igual à soma
dos dois últimos dígitos.

Exiba:

- os quatro dígitos do número;
- a soma dos quatro dígitos;
- a soma dos dois primeiros dígitos;
- a soma dos dois últimos dígitos;
- uma mensagem informando se as duas somas são iguais ou diferentes.

Exemplo:

Número: 1234
Dígitos: 1, 2, 3 e 4
Soma dos dígitos: 10
Soma dos dois primeiros: 1 + 2 = 3
Soma dos dois últimos: 3 + 4 = 7

Nesse caso, as somas são diferentes.

O programa deverá trabalhar diretamente com os dígitos do número.
*/

#include <iostream>

using namespace std;

int main() {

    int numero;
    int unidade, dezena, centena, milhar;
    int soma_digitos, soma_primeiros, soma_ultimos;

    cout << "Digite um numero com 4 digitos: ";
    cin >> numero;

    if (numero < 1000 || numero > 9999) {
        cout << "Numero invalido";
        return 0;
    }

    unidade = numero % 10;
    numero = numero / 10;

    dezena = numero % 10;
    numero = numero / 10;

    centena = numero % 10;
    numero = numero / 10;

    milhar = numero % 10;

    soma_digitos = milhar + centena + dezena + unidade;

    soma_primeiros = milhar + centena;
    soma_ultimos = dezena + unidade;

    cout << "Digitos: "
         << milhar << ", "
         << centena << ", "
         << dezena << ", "
         << unidade << endl;

    cout << "Soma dos digitos: " << soma_digitos << endl;
    cout << "Soma dos dois primeiros digitos: " << soma_primeiros << endl;
    cout << "Soma dos dois ultimos digitos: " << soma_ultimos << endl;

    if (soma_primeiros == soma_ultimos) {
        cout << "As somas sao iguais";
    }
    else {
        cout << "As somas sao diferentes";
    }

    return 0;
}