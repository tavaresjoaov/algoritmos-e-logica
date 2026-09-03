/*
Faça um programa que receba a medida de um ângulo em graus.

Determine em qual quadrante da circunferência trigonométrica o ângulo
se encontra.

Para ângulos maiores que 360° ou menores que -360°, reduza o ângulo
para sua posição equivalente dentro de uma volta completa.

O programa também deverá:

- identificar quando o ângulo está exatamente sobre um dos eixos;
- informar a quantidade de voltas realizadas;
- informar o sentido da volta:
    ângulo positivo → sentido anti-horário;
    ângulo negativo → sentido horário.

O programa deverá funcionar corretamente tanto para ângulos positivos
quanto negativos.
*/

#include <iostream>

using namespace std;

int main() {

    int angulo, voltas;

    cout << "Digite a medida de um angulo em graus: ";
    cin >> angulo;

    int angulo_original = angulo;

    // Calcula a quantidade de voltas completas
    if (angulo < 0) {
        voltas = (-angulo) / 360;
    }
    else {
        voltas = angulo / 360;
    }

    // Reduz o angulo para uma volta completa
    angulo = angulo % 360;

    // Ajusta angulos negativos
    if (angulo < 0) {
        angulo = angulo + 360;
    }

    cout << "\nAngulo equivalente: " << angulo << " graus" << endl;
    cout << "Voltas completas: " << voltas << endl;

    if (angulo_original > 0) {
        cout << "Sentido: anti-horario" << endl;
    }
    else if (angulo_original < 0) {
        cout << "Sentido: horario" << endl;
    }
    else {
        cout << "Sem movimento." << endl;
    }

    if (angulo == 0 || angulo == 180) {
        cout << "Sobre o eixo X";
    }
    else if (angulo == 90 || angulo == 270) {
        cout << "Sobre o eixo Y";
    }
    else if (angulo > 0 && angulo < 90) {
        cout << "Primeiro quadrante";
    }
    else if (angulo > 90 && angulo < 180) {
        cout << "Segundo quadrante";
    }
    else if (angulo > 180 && angulo < 270) {
        cout << "Terceiro quadrante";
    }
    else if (angulo > 270 && angulo < 360) {
        cout << "Quarto quadrante";
    }

    return 0;
}