#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int main() {

    double salario_minimo;
    int horas_trabalhadas;
    char turno, categoria;

    cout << "Digite o salario minimo: ";
    cin >> salario_minimo;

    cout << "\nTurnos de trabalho:\n";
    cout << "M - Matutino\n";
    cout << "V - Vespertino\n";
    cout << "N - Noturno\n";
    cout << "Digite o turno de trabalho: ";
    cin >> turno;

    cout << "\nCategorias de funcionario:\n";
    cout << "O - Operario\n";
    cout << "G - Gerente\n";
    cout << "Digite a categoria do funcionario: ";
    cin >> categoria;

    cout << "\nDigite o numero de horas trabalhadas no mes: ";
    cin >> horas_trabalhadas;

    turno = toupper(turno);
    categoria = toupper(categoria);

    double coeficiente;

    switch (turno) {

        case 'M':
            coeficiente = salario_minimo * 0.10;
            break;

        case 'V':
            coeficiente = salario_minimo * 0.15;
            break;

        case 'N':
            coeficiente = salario_minimo * 0.12;
            break;

        default:
            cout << "Turno invalido.";
            return 0;
    }

    double salario_bruto = horas_trabalhadas * coeficiente;
    double imposto;

    switch (categoria) {

        case 'O':
            if (salario_bruto >= 300.00) {
                imposto = salario_bruto * 0.05;
            }
            else {
                imposto = salario_bruto * 0.03;
            }
            break;

        case 'G':
            if (salario_bruto >= 400.00) {
                imposto = salario_bruto * 0.06;
            }
            else {
                imposto = salario_bruto * 0.04;
            }
            break;

        default:
            cout << "Categoria invalida.";
            return 0;
    }

    double gratificacao;

    if (turno == 'N' && horas_trabalhadas > 80) {
        gratificacao = 50.00;
    }
    else {
        gratificacao = 30.00;
    }

    double auxilio;

    if (categoria == 'O' || coeficiente <= 25.00) {
        auxilio = salario_bruto / 3.00;
    }
    else {
        auxilio = salario_bruto / 2.00;
    }

    double salario_liquido = salario_bruto - imposto
                           + gratificacao + auxilio;

    cout << fixed << setprecision(2);

    cout << "\nCoeficiente: R$ " << coeficiente << endl;
    cout << "Salario bruto: R$ " << salario_bruto << endl;
    cout << "Imposto: R$ " << imposto << endl;
    cout << "Gratificacao: R$ " << gratificacao << endl;
    cout << "Auxilio-alimentacao: R$ " << auxilio << endl;
    cout << "Salario liquido: R$ " << salario_liquido << endl;

    if (salario_liquido > 600.00) {
        cout << "Classificacao: Bem remunerado.";
    }
    else if (salario_liquido >= 350.00) {
        cout << "Classificacao: Normal.";
    }
    else {
        cout << "Classificacao: Mal remunerado.";
    }

    return 0;
}