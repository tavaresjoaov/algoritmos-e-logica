/* 
Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados 
os dados de idade, sexo (M/F) e salário. Faça um programa que calcule e mostre:

■ a média dos salários do grupo;
■ a maior e a menor idade do grupo;
■ a quantidade de mulheres com salário até R$ 200,00;
■ a idade e o sexo da pessoa que possui o menor salário.

Finalize a entrada de dados ao ser digitada uma idade negativa.
*/

#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int main() {

    int idade;
    double salario;
    char sexo;

    double soma = 0;
    int cont = 0;
    int cont_fem = 0;

    int maior = 0;
    int menor = 0;

    double menor_salario = 0;
    int idade_salario = 0;
    char sexo_salario;

    cout << "PESQUISA ENTRE OS HABITANTES DE UMA REGIAO\n";
    cout << "Para encerrar, digite uma idade negativa\n";

    cout << "\nDigite a idade: ";
    cin >> idade;

    while (idade >= 0) {

        cout << "Digite o sexo (M/F): ";
        cin >> sexo;
        sexo = toupper(sexo);

        cout << "Digite o salario: ";
        cin >> salario;

        soma += salario;
        cont++;

        // Primeira pessoa: inicializa maior, menor e menor salario
        if (cont == 1) {
            maior = idade;
            menor = idade;

            menor_salario = salario;
            idade_salario = idade;
            sexo_salario = sexo;
        }
        else {
            if (idade > maior) {
                maior = idade;
            }

            if (idade < menor) {
                menor = idade;
            }

            if (salario < menor_salario) {
                menor_salario = salario;
                idade_salario = idade;
                sexo_salario = sexo;
            }
        }

        if (sexo == 'F' && salario <= 200) {
            cont_fem++;
        }

        cout << "\nDigite a idade: ";
        cin >> idade;
    }

    double media = 0;

    if (cont > 0) {
        media = soma / cont;
    }

    cout << fixed << setprecision(2);

    cout << "\nMedia dos salarios do grupo: " << media << endl;
    cout << "Maior idade do grupo: " << maior << endl;
    cout << "Menor idade do grupo: " << menor << endl;
    cout << "Quantidade de mulheres com salario <= 200: " << cont_fem << endl;
    cout << "Idade da pessoa com menor salario: " << idade_salario << endl;
    cout << "Sexo da pessoa com menor salario: " << sexo_salario << endl;

    return 0;
}