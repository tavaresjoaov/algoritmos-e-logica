/* 

Uma empresa decidiu dar uma gratificação de Natal a seus 
funcionários, baseada no número de horas extras e no número de 
horas que o funcionário faltou ao trabalho. O valor do prêmio 
é obtido pela consulta à tabela que se segue, na qual:

H = número de horas extras – (2/3 * (número de horas falta))

H (MINUTOS) 				PRÊMIO (R$)
>= 2.400 					500,00
1.800  ○------○ 2.400 		400,00
1.200  •------○ 1.800 		300,00
600  •------○ 1.200 		200,00
< 600 						100,00 

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int hora_extra, hora_falta, minutos;
    double hora_total, premio;

    cout << "Digite o numero de horas extras: ";
    cin >> hora_extra;

    cout << "Digite o numero de horas de falta: ";
    cin >> hora_falta;

    hora_total = hora_extra - (2.0 / 3.0 * hora_falta);

    minutos = hora_total * 60;

    if (minutos >= 2400) {
        premio = 500.00;
    }
    else if (minutos >= 1800) {
        premio = 400.00;
    }
    else if (minutos >= 1200) {
        premio = 300.00;
    }
    else if (minutos >= 600) {
        premio = 200.00;
    }
    else {
        premio = 100.00;
    }

    cout << fixed << setprecision(2);
    cout << "Premio: R$ " << premio;

    return 0;
}