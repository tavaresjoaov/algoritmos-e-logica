/* 
Faça um programa para ler o código, o sexo (M — masculino; F — feminino) 
e o número de horas/aula dadas mensalmente pelos professores de uma 
universidade, sabendo-se que cada hora/aula vale R$ 30,00. 

Emita uma listagem contendo o código, o salário bruto e o salário líquido 
(levando em consideração os descontos explicados a seguir) de todos os 
professores. Mostre também a média dos salários líquidos dos professores 
do sexo masculino e a média dos salários líquidos dos professores do
sexo feminino.

Considere:
■ desconto para homens, 10%, e, para mulheres, 5%;
■ após o cadastro de cada professor, pergunte se deseja cadastrar outro
  professor (S — sim; N — não);
■ o programa deverá cadastrar pelo menos um professor.
*/

#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int main() {

    int codigo, hora_aula;
    char sexo, continuar;

    int cont_masc = 0;
    double soma_masc = 0;

    int cont_fem = 0;
    double soma_fem = 0;

    do {

        cout << "Digite o codigo: ";
        cin >> codigo;

        cout << "Digite o sexo (M/F): ";
        cin >> sexo;

        sexo = toupper(sexo);

        cout << "Digite o numero de horas/aula: ";
        cin >> hora_aula;

        double salario_bruto = 30 * hora_aula;
        double salario_liquido;

        if (sexo == 'M') {
            salario_liquido = salario_bruto * 0.90;

            cont_masc++;
            soma_masc += salario_liquido;
        }
        else if (sexo == 'F') {
            salario_liquido = salario_bruto * 0.95;

            cont_fem++;
            soma_fem += salario_liquido;
        }
        else {
            cout << "Sexo invalido!" << endl;
            continue;
        }

        cout << fixed << setprecision(2);

        cout << "\nCodigo: " << codigo << endl;
        cout << "Salario bruto: R$ " << salario_bruto << endl;
        cout << "Salario liquido: R$ " << salario_liquido << endl;

        cout << "\nDeseja cadastrar outro professor? (S/N): ";
        cin >> continuar;
        
        cout << endl;

        continuar = toupper(continuar);

    } while (continuar == 'S');

    double media_masc;
    double media_fem;

    if (cont_masc > 0) {
        media_masc = soma_masc / cont_masc;
    }
    else {
        media_masc = 0;
    }

    if (cont_fem > 0) {
        media_fem = soma_fem / cont_fem;
    }
    else {
        media_fem = 0;
    }

    cout << "\n----------------------------------------" << endl;
    cout << "Media dos salarios liquidos masculinos: R$ "
         << media_masc << endl;

    cout << "Media dos salarios liquidos femininos: R$ "
         << media_fem << endl;

    return 0;
}