/*
DESAFIO 01 — ANÁLISE GEOMÉTRICA COMPLETA DE UM TRIÂNGULO

Faça um programa que receba os comprimentos de três lados de um
triângulo, em centímetros.

O programa deverá inicialmente verificar se os valores fornecidos
são válidos.

Considere inválidos:
- valores menores ou iguais a zero;
- valores que não possam formar um triângulo.

Caso os valores sejam inválidos, informe o motivo e encerre o programa.

Caso formem um triângulo válido, realize todas as análises abaixo.

A) CLASSIFICAÇÃO QUANTO AOS LADOS

Determine se o triângulo é:
- Equilátero
- Isósceles
- Escaleno

B) IDENTIFICAÇÃO DOS LADOS

Determine:
- maior lado;
- menor lado;
- diferença entre o maior e o menor lado.

C) CLASSIFICAÇÃO QUANTO AOS ÂNGULOS

Utilizando o maior lado como referência, determine se o triângulo é:
- Acutângulo
- Retângulo
- Obtusângulo

Utilize o Teorema de Pitágoras generalizado.

D) CÁLCULO DOS ÂNGULOS

Calcule os três ângulos internos do triângulo utilizando a
Lei dos Cossenos.

Para encontrar cada ângulo, utilize as fórmulas:
cos(A) = (b² + c² - a²) / (2bc)
cos(B) = (a² + c² - b²) / (2ac)
cos(C) = (a² + b² - c²) / (2ab)

Após calcular o valor do cosseno de cada ângulo, utilize a função
trigonométrica inversa "arco cosseno" para descobrir o ângulo:

A = acos(cos(A))
B = acos(cos(B))
C = acos(cos(C))

IMPORTANTE:

A função acos() retorna o ângulo em RADIANOS.
Faça a conversão necessária para obter os resultados em GRAUS.

Ao final, informe os três ângulos com duas casas decimais:

Angulo A: XX.XX°
Angulo B: XX.XX°
Angulo C: XX.XX°


E) ÁREA PELO TEOREMA DE HERON

Calcule a área:
s = (a + b + c) / 2
Area = sqrt(s * (s - a) * (s - b) * (s - c))


F) RAIO DA CIRCUNFERÊNCIA INSCRITA

Calcule o raio da circunferência inscrita no triângulo.

Utilize:
r = Area / s

Informe o resultado em centímetros.


G) RAIO DA CIRCUNFERÊNCIA CIRCUNSCRITA

Calcule o raio da circunferência circunscrita utilizando:

R = (a * b * c) / (4 * Area)

Informe o resultado em centímetros.


H) CLASSIFICAÇÃO DA RELAÇÃO ENTRE OS RAIOS

Calcule:

R / r

e classifique a relação:

- R/r < 2 → Relação pequena
- 2 <= R/r < 3 → Relação moderada
- R/r >= 3 → Relação elevada


I) DETERMINAÇÃO DO MAIOR ÂNGULO

Utilizando os ângulos calculados, determine qual é:
- o maior ângulo;
- o menor ângulo;
- a diferença entre eles.

Não basta utilizar a classificação anterior.
Você deverá realmente comparar os três valores dos ângulos.

J) IDENTIFICAÇÃO DO TRIÂNGULO QUANTO À SIMETRIA ANGULAR

Analise os três ângulos calculados e determine:

- Equiangular → três ângulos iguais;
- Bisimétrico → exatamente dois ângulos iguais;
- Assimétrico → três ângulos diferentes.

Como os ângulos são calculados utilizando valores do tipo double,
pequenas diferenças podem surgir mesmo quando, matematicamente,
os valores deveriam ser iguais.

Considere dois ângulos iguais quando a diferença entre eles for
menor que 0.000001.

Para verificar a diferença independentemente de ela ser positiva
ou negativa, utilize a função abs(), que retorna o valor absoluto
de um número:

abs(5)  → 5
abs(-5) → 5

K) VERIFICAÇÃO DA SOMA DOS ÂNGULOS

Calcule:

soma = A + B + C

Verifique se a soma é aproximadamente 180°.

Devido aos cálculos com double, utilize a mesma tolerância de
0.000001 para determinar se a soma pode ser considerada igual
a 180°.

Informe:

- Soma angular válida
ou
- Erro na soma angular

RESTRIÇÕES

O programa não pode utilizar:

- for
- while
- do while
- vetores
- strings para armazenar dados
- funções criadas pelo usuário
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double a, b, c;

    cout << "Digite os tres lados de um triangulo:\n";
    cin >> a >> b >> c;

    bool invalido = a <= 0 || b <= 0 || c <= 0 ||
                    a >= b + c || b >= a + c || c >= a + b;

    if (invalido) {
        cout << "Dados invalidos." << endl;
        return 0;
    }

    if (a == b && b == c) {
        cout << "Triangulo Equilatero." << endl;
    }
    else if (a == b || b == c || a == c) {
        cout << "Triangulo Isosceles." << endl;
    }
    else {
        cout << "Triangulo Escaleno." << endl;
    }

    double maior = a;

    if (b > maior) {
        maior = b;
    }

    if (c > maior) {
        maior = c;
    }

    double menor = a;

    if (b < menor) {
        menor = b;
    }

    if (c < menor) {
        menor = c;
    }

    double diferenca = maior - menor;

    cout << "Maior lado = " << maior << endl;
    cout << "Menor lado = " << menor << endl;
    cout << "Diferenca do maior pelo menor = " << diferenca << endl;

    double maior_quadrado = maior * maior;
    double soma_outros_quadrados;

    if (maior == a) {
        soma_outros_quadrados = b * b + c * c;
    }
    else if (maior == b) {
        soma_outros_quadrados = a * a + c * c;
    }
    else {
        soma_outros_quadrados = a * a + b * b;
    }

    if (maior_quadrado > soma_outros_quadrados) {
        cout << "Triangulo Obtusangulo." << endl;
    }
    else if (maior_quadrado == soma_outros_quadrados) {
        cout << "Triangulo Retangulo." << endl;
    }
    else {
        cout << "Triangulo Acutangulo." << endl;
    }

    double cosA, cosB, cosC;
    double anguloA, anguloB, anguloC;

    cosA = (b * b + c * c - a * a) / (2 * b * c);
    cosB = (a * a + c * c - b * b) / (2 * a * c);
    cosC = (a * a + b * b - c * c) / (2 * a * b);

    anguloA = acos(cosA);
    anguloB = acos(cosB);
    anguloC = acos(cosC);

    const double PI = 3.141592653589793;

    anguloA = anguloA * 180.0 / PI;
    anguloB = anguloB * 180.0 / PI;
    anguloC = anguloC * 180.0 / PI;

    cout << fixed << setprecision(2);

    cout << "Angulo A: " << anguloA << " graus" << endl;
    cout << "Angulo B: " << anguloB << " graus" << endl;
    cout << "Angulo C: " << anguloC << " graus" << endl;

    double perimetro = a + b + c;
    double s = perimetro / 2.0;

    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "Perimetro: " << perimetro << endl;
    cout << "Area: " << area << endl;

    double raio_inscrita = area / s;

    cout << "Raio da circunferencia inscrita: "
         << raio_inscrita << endl;

    double raio_circunscrita = (a * b * c) / (4 * area);

    cout << "Raio da circunferencia circunscrita: "
         << raio_circunscrita << endl;

    double relacao = raio_circunscrita / raio_inscrita;

    if (relacao >= 3) {
        cout << "Relacao entre os raios: elevada." << endl;
    }
    else if (relacao >= 2) {
        cout << "Relacao entre os raios: moderada." << endl;
    }
    else {
        cout << "Relacao entre os raios: pequena." << endl;
    }

    double maior_angulo = anguloA;

    if (anguloB > maior_angulo) {
        maior_angulo = anguloB;
    }

    if (anguloC > maior_angulo) {
        maior_angulo = anguloC;
    }

    double menor_angulo = anguloA;

    if (anguloB < menor_angulo) {
        menor_angulo = anguloB;
    }

    if (anguloC < menor_angulo) {
        menor_angulo = anguloC;
    }

    double diferenca_angulo = maior_angulo - menor_angulo;

    cout << "Maior angulo: " << maior_angulo << " graus" << endl;
    cout << "Menor angulo: " << menor_angulo << " graus" << endl;
    cout << "Diferenca entre os angulos: "
         << diferenca_angulo << " graus" << endl;

    const double TOLERANCIA = 0.000001;

    bool angulos_iguais_AB = abs(anguloA - anguloB) < TOLERANCIA;
    bool angulos_iguais_AC = abs(anguloA - anguloC) < TOLERANCIA;
    bool angulos_iguais_BC = abs(anguloB - anguloC) < TOLERANCIA;

    if (angulos_iguais_AB && angulos_iguais_AC) {
        cout << "Classificacao angular: Equiangular." << endl;
    }
    else if (angulos_iguais_AB || angulos_iguais_AC || angulos_iguais_BC) {
        cout << "Classificacao angular: Bisimetrico." << endl;
    }
    else {
        cout << "Classificacao angular: Assimetrico." << endl;
    }

    double soma_angulos = anguloA + anguloB + anguloC;

    if (abs(soma_angulos - 180.0) < TOLERANCIA) {
        cout << "Soma angular valida: "
             << soma_angulos << " graus" << endl;
    }
    else {
        cout << "Erro na soma angular: "
             << soma_angulos << " graus" << endl;
    }

    return 0;
}