/*
Um laboratório está analisando uma cultura de bactérias em uma amostra.
O programa deverá receber os dados obtidos durante o experimento e
determinar as condições da cultura.

Faça um programa que receba:

- a temperatura da amostra, em °C;
- o pH da amostra;
- a concentração de nutrientes, em g/L;
- a concentração de oxigênio dissolvido, em mg/L;
- a concentração de antibiótico, em mg/L;
- o tempo de incubação, em horas;
- o tipo de bactéria:
    P — bactéria Gram-positiva;
    N — bactéria Gram-negativa.

Inicialmente, verifique se os valores fornecidos são válidos.

Considere inválidos:

- temperatura abaixo de 0 °C;
- pH menor que 0 ou maior que 14;
- concentração de nutrientes menor que 0;
- concentração de oxigênio menor que 0;
- concentração de antibiótico menor que 0;
- tempo de incubação menor ou igual a 0;
- tipo de bactéria diferente de G/g ou N/n.

Caso algum valor seja inválido, informe o erro e encerre o programa.

Após validar os dados, realize as seguintes análises.

a) CONDIÇÃO DE TEMPERATURA

Classifique a temperatura da cultura como:

- Fria: abaixo de 20 °C;
- Adequada: de 20 °C até 37 °C;
- Elevada: acima de 37 °C.

b) CONDIÇÃO DO pH

Classifique o meio como:

- Ácido: pH menor que 6;
- Neutro: pH entre 6 e 8;
- Básico: pH maior que 8.

c) DISPONIBILIDADE DE NUTRIENTES

Classifique a concentração de nutrientes como:

- Baixa: menor que 2 g/L;
- Adequada: de 2 g/L até 5 g/L;
- Alta: maior que 5 g/L.

d) DISPONIBILIDADE DE OXIGÊNIO

Classifique a concentração de oxigênio como:

- Baixa: menor que 2 mg/L;
- Adequada: de 2 mg/L até 6 mg/L;
- Alta: maior que 6 mg/L.

e) EFEITO DO ANTIBIÓTICO

Considere que a concentração de antibiótico exerce os seguintes
efeitos sobre a cultura:

- abaixo de 5 mg/L → baixa pressão antibiótica;
- de 5 mg/L até 10 mg/L → pressão antibiótica moderada;
- acima de 10 mg/L → alta pressão antibiótica.

Além disso, considere que:

- bactérias Gram-positivas apresentam maior sensibilidade ao
  antibiótico quando a concentração é superior a 8 mg/L;
- bactérias Gram-negativas apresentam maior sensibilidade quando
  a concentração é superior a 12 mg/L.

Informe se a cultura está sob:

- baixa pressão antibiótica;
- pressão antibiótica moderada;
- alta pressão antibiótica.

Caso a concentração esteja acima do limite de sensibilidade
correspondente ao tipo de bactéria, informe também que a cultura
está sob forte pressão antibiótica.

f) ANÁLISE DAS CONDIÇÕES DE CRESCIMENTO

Verifique individualmente se cada uma das seguintes condições está
adequada para o crescimento da cultura:

- temperatura entre 20 °C e 37 °C;
- pH entre 6 e 8;
- nutrientes entre 2 g/L e 5 g/L;
- oxigênio entre 2 mg/L e 6 mg/L;
- concentração de antibiótico abaixo do limite de sensibilidade
  correspondente ao tipo de bactéria.

Para cada condição, informe se ela está adequada ou inadequada.

g) CLASSIFICAÇÃO DA CULTURA

Com base nas condições analisadas, determine o estado geral da cultura:

- Crescimento favorável:
  todas as condições de temperatura, pH, nutrientes e oxigênio
  estão adequadas e a cultura não está sob forte pressão
  antibiótica.

- Crescimento limitado:
  pelo menos uma das condições de temperatura, pH, nutrientes ou
  oxigênio está inadequada, mas a cultura não está sob forte
  pressão antibiótica.

- Crescimento comprometido:
  a cultura está sob forte pressão antibiótica, independentemente
  das demais condições.

Ao final, mostre:

- classificação da temperatura;
- classificação do pH;
- classificação dos nutrientes;
- classificação do oxigênio;
- situação da pressão antibiótica;
- situação individual de cada condição de crescimento;
- classificação geral da cultura.


RESTRIÇÕES:

- Utilize apenas variáveis e estruturas condicionais.
- Não utilize estruturas de repetição.
- Não utilize vetores.
- Não utilize funções criadas pelo usuário.
- Utilize apenas os conceitos de programação estudados até o momento.
*/

#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int main() {

    double temperatura, pH, nutrientes;
    double oxigenio, antibiotico;
    char tipo;

    cout << "Digite as seguintes informacoes acerca de uma cultura bacteriana:\n";

    cout << "\nTemperatura da amostra em Celsius: ";
    cin >> temperatura;

    cout << "Valor do pH da amostra: ";
    cin >> pH;

    cout << "Concentracao de nutrientes em g/L: ";
    cin >> nutrientes;

    cout << "Concentracao de oxigenio dissolvido em mg/L: ";
    cin >> oxigenio;

    cout << "Concentracao de antibiotico em mg/L: ";
    cin >> antibiotico;

    cout << "Tipo da bacteria (P - Gram-positiva / N - Gram-negativa): ";
    cin >> tipo;

    tipo = toupper(tipo);

    bool dados_invalidos = temperatura < 0 ||
                           nutrientes < 0 ||
                           oxigenio < 0 ||
                           antibiotico < 0 ||
                           pH < 0 ||
                           pH > 14;

    if (dados_invalidos) {
        cout << "\nDado invalido.";
        return 0;
    }

    if (tipo != 'P' && tipo != 'N') {
        cout << "\nTipo de bacteria invalido.";
        return 0;
    }

    cout << "\n--- Analise da cultura ---\n";

    if (temperatura > 37) {
        cout << "Temperatura: Elevada." << endl;
    }
    else if (temperatura >= 20) {
        cout << "Temperatura: Adequada." << endl;
    }
    else {
        cout << "Temperatura: Fria." << endl;
    }

    if (pH > 8) {
        cout << "pH: Basico." << endl;
    }
    else if (pH >= 6) {
        cout << "pH: Neutro." << endl;
    }
    else {
        cout << "pH: Acido." << endl;
    }

    if (nutrientes > 5) {
        cout << "Nutrientes: Alta concentracao." << endl;
    }
    else if (nutrientes >= 2) {
        cout << "Nutrientes: Concentracao adequada." << endl;
    }
    else {
        cout << "Nutrientes: Baixa concentracao." << endl;
    }

    if (oxigenio > 6) {
        cout << "Oxigenio: Alta concentracao." << endl;
    }
    else if (oxigenio >= 2) {
        cout << "Oxigenio: Concentracao adequada." << endl;
    }
    else {
        cout << "Oxigenio: Baixa concentracao." << endl;
    }

    if (antibiotico > 10) {
        cout << "Pressao antibiotica: Alta." << endl;
    }
    else if (antibiotico >= 5) {
        cout << "Pressao antibiotica: Moderada." << endl;
    }
    else {
        cout << "Pressao antibiotica: Baixa." << endl;
    }

    bool forte_pressao;

    switch (tipo) {

        case 'P':
            forte_pressao = antibiotico > 8;
            break;

        case 'N':
            forte_pressao = antibiotico > 12;
            break;
    }

    if (forte_pressao) {
        cout << "Situacao: Cultura sob forte pressao antibiotica." << endl;
    }
    else {
        cout << "Situacao: Cultura nao esta sob forte pressao antibiotica." << endl;
    }

    bool temperatura_adequada = temperatura >= 20 && temperatura <= 37;

    bool ph_adequado = pH >= 6 && pH <= 8;

    bool nutrientes_adequados = nutrientes >= 2 && nutrientes <= 5;

    bool oxigenio_adequado = oxigenio >= 2 && oxigenio <= 6;

    bool antibiotico_adequado = !forte_pressao;

    cout << "\n--- Condicoes de crescimento ---\n";

    if (temperatura_adequada) {
        cout << "Temperatura: Adequada." << endl;
    }
    else {
        cout << "Temperatura: Inadequada." << endl;
    }

    if (ph_adequado) {
        cout << "pH: Adequado." << endl;
    }
    else {
        cout << "pH: Inadequado." << endl;
    }

    if (nutrientes_adequados) {
        cout << "Nutrientes: Adequados." << endl;
    }
    else {
        cout << "Nutrientes: Inadequados." << endl;
    }

    if (oxigenio_adequado) {
        cout << "Oxigenio: Adequado." << endl;
    }
    else {
        cout << "Oxigenio: Inadequado." << endl;
    }

    if (antibiotico_adequado) {
        cout << "Antibiotico: Adequado." << endl;
    }
    else {
        cout << "Antibiotico: Inadequado." << endl;
    }

    bool condicoes_ideais = temperatura_adequada &&
                             ph_adequado &&
                             nutrientes_adequados &&
                             oxigenio_adequado &&
                             antibiotico_adequado;

    cout << "\n--- Classificacao geral ---\n";

    if (forte_pressao) {
        cout << "Crescimento comprometido.";
    }
    else if (condicoes_ideais) {
        cout << "Crescimento favoravel.";
    }
    else {
        cout << "Crescimento limitado.";
    }

    return 0;
}