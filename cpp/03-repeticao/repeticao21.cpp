/*
Uma empresa deseja realizar um levantamento sobre os candidatos que
se apresentaram para preenchimento de vagas em seu quadro de
funcionários.

Faça um programa que leia, para cada candidato:

- a idade;
- o sexo (M — masculino ou F — feminino);
- se possui experiência no serviço (S — sim ou N — não).

A entrada de dados deve continuar até que seja informada a idade zero.

O programa deverá calcular e mostrar:

- o número de candidatos do sexo feminino;
- o número de candidatos do sexo masculino;
- a idade média dos candidatos que possuem experiência no serviço;
- a porcentagem dos homens com mais de 45 anos em relação ao total
  de homens;
- o número de mulheres com idade inferior a 21 anos e que possuem
  experiência no serviço;
- a menor idade entre as mulheres que possuem experiência no serviço.

Caso não exista nenhum candidato que satisfaça uma das condições
necessárias para determinado cálculo, informe uma mensagem adequada
em vez de realizar uma divisão por zero.
*/

#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int main() {

    cout << fixed << setprecision(2);

    int total = 1;

    int total_fem = 0;
    int total_masc = 0;

    int idade_45 = 0;
    int idade_21_s = 0;
    int soma_idade = 0;
    int total_exp = 0;

    int menor_idade;

    bool primeira_mulher_exp = true;

    cout << "PARA ENCERRAR O PROGRAMA DIGITE UMA IDADE IGUAL A 0\n\n";

    cout << "Candidato " << total << ":\n\n";
    int idade;

    cout << "Digite a idade: ";
    cin >> idade;

    while (idade != 0) {

        if (idade < 0) {
            cout << "Erro: idade invalida" << endl;
        }

        else {

            char sexo;
            char experiencia;

            cout << "Digite o sexo (M/F): ";
            cin >> sexo;
            sexo = toupper(sexo);

            cout << "Possui experiencia no servico? (S/N): ";
            cin >> experiencia;
            experiencia = toupper(experiencia);

            if (sexo == 'F') {
                total_fem++;

                if (idade < 21 && experiencia == 'S') {
                    idade_21_s++;
                }

                if (experiencia == 'S') {

                    if (primeira_mulher_exp) {
                        menor_idade = idade;
                        primeira_mulher_exp = false;
                    }

                    else {
                        if (idade < menor_idade) {
                            menor_idade = idade;
                        }
                    }
                }
            }

            if (sexo == 'M') {
                total_masc++;

                if (idade > 45) {
                    idade_45++;
                }
            }

            if (experiencia == 'S') {
                soma_idade += idade;
                total_exp++;
            }
        }

        total++;

        cout << "\nCandidato " << total << ":\n\n";
        cout << "Digite a idade: ";
        cin >> idade;
    }

    double media;

    if (total_exp > 0) {
        media = (double) soma_idade / total_exp;
    }
    else {
        media = 0;
    }

    double porcentagem;

    if (total_masc > 0) {
        porcentagem = (double) idade_45 / total_masc * 100;
    }
    else {
        porcentagem = 0;
    }

    cout << "\nNumero de candidatos do sexo feminino: "
         << total_fem << endl;

    cout << "Numero de candidatos do sexo masculino: "
         << total_masc << endl;

    cout << "Idade media dos candidatos que possuem experiencia: "
         << media << endl;

    cout << "Porcentagem dos homens com idade > 45: "
         << porcentagem << "%" << endl;

    cout << "Numero de mulheres com idade < 21 e que possuem experiencia: "
         << idade_21_s << endl;

    if (primeira_mulher_exp) {
        cout << "Nao ha mulheres com experiencia para calcular a menor idade."
             << endl;
    }
    else {
        cout << "Menor idade entre as mulheres que possuem experiencia: "
             << menor_idade << endl;
    }

    return 0;
}