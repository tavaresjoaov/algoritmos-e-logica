/*
Uma fábrica possui 15 operadores. Cada operador é classificado de
acordo com a quantidade de peças produzidas por mês:

- Classe 1: até 30 peças por mês;
- Classe 2: de 31 a 50 peças por mês;
- Classe 3: mais de 50 peças por mês.

A Classe 1 recebe salário mínimo.

A Classe 2 recebe salário mínimo mais 3% desse salário por peça
produzida acima das 30 peças iniciais.

A Classe 3 recebe salário mínimo mais 5% desse salário por peça
produzida acima das 30 peças iniciais.

Faça um programa que receba, para cada um dos 15 operadores:

- o número do operador;
- a quantidade de peças produzidas no mês;
- o sexo do operador (M — masculino ou F — feminino);
- o valor do salário mínimo.

Para cada operador, calcule e mostre seu número e seu salário.

Ao final, calcule e mostre:

- o total da folha de pagamento da fábrica;
- o número total de peças produzidas no mês;
- a média de peças produzidas pelos homens;
- a média de peças produzidas pelas mulheres;
- o número do operador que recebeu o maior salário;
- o valor do maior salário.

Caso não exista nenhum operador de determinado sexo, informe que não
há operadores desse sexo para calcular a média.
*/

#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int main() {

    cout << fixed << setprecision(2);

    int operador, pecas;
    char sexo;
    double salario_minimo;
    double salario;

    double total_folha = 0;
    int total_pecas = 0;

    int total_pecas_homens = 0;
    int total_homens = 0;

    int total_pecas_mulheres = 0;
    int total_mulheres = 0;

    int operador_maior;
    double maior_salario;

    for (int i = 1; i <= 15; i++) {

        cout << "OPERADOR " << i << "\n\n";

        cout << "Digite o numero do operador: ";
        cin >> operador;

        cout << "Digite a quantidade de pecas produzidas: ";
        cin >> pecas;

        cout << "Digite o sexo (M/F): ";
        cin >> sexo;
        sexo = toupper(sexo);

        cout << "Digite o valor do salario minimo: R$ ";
        cin >> salario_minimo;
        
        cout << endl;

        if (pecas <= 30) {
            salario = salario_minimo;
        }

        else if (pecas <= 50) {
            salario = salario_minimo + (pecas - 30) * salario_minimo * 0.03;
        }

        else {
            salario = salario_minimo + (pecas - 30) * salario_minimo * 0.05;
        }

        cout << "Numero do operador: " << operador << endl;
        cout << "Salario: R$ " << salario << endl;
        
        cout << endl;

        total_folha += salario;
        total_pecas += pecas;

        if (sexo == 'M') {
            total_homens++;
            total_pecas_homens += pecas;
        }
        else if (sexo == 'F') {
            total_mulheres++;
            total_pecas_mulheres += pecas;
        }

        if (i == 1) {
            maior_salario = salario;
            operador_maior = operador;
        }
        else if (salario > maior_salario) {
            maior_salario = salario;
            operador_maior = operador;
        }
    }

    cout << "Total da folha de pagamento: R$ "
         << total_folha << endl;

    cout << "Total de pecas produzidas: "
         << total_pecas << endl;

    if (total_homens > 0) {
        double media_homens =
            (double) total_pecas_homens / total_homens;

        cout << "Media de pecas produzidas pelos homens: "
             << media_homens << endl;
    }
    else {
        cout << "Nao ha operadores homens para calcular a media."
             << endl;
    }

    if (total_mulheres > 0) {
        double media_mulheres =
            (double) total_pecas_mulheres / total_mulheres;

        cout << "Media de pecas produzidas pelas mulheres: "
             << media_mulheres << endl;
    }
    else {
        cout << "Nao ha operadoras mulheres para calcular a media."
             << endl;
    }

    cout << "Operador que recebeu o maior salario: "
         << operador_maior << endl;

    cout << "Maior salario: R$ "
         << maior_salario << endl;

    return 0;
}