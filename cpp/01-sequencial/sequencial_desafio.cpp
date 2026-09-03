/*
====================================================================
DESAFIO — PROJETO DE UMA ESTRUTURA ESPORTIVA
====================================================================

Uma empresa foi contratada para projetar uma pequena arena esportiva
coberta. A estrutura será composta por um piso retangular, quatro
paredes retangulares, uma cobertura formada por duas águas inclinadas
e uma abertura circular destinada a um sistema de ventilação.

O programa deverá receber:

DIMENSÕES DA ARENA:

- comprimento do piso, em metros;
- largura do piso, em metros;
- altura das paredes, em metros;
- largura horizontal de cada lado da cobertura, em metros;
- raio da abertura circular de ventilação, em metros;
- ângulo de inclinação da cobertura, em graus.

INFORMAÇÕES DOS MATERIAIS:

- preço do piso por metro quadrado;
- preço do material da cobertura por metro quadrado;
- preço da pintura das paredes por metro quadrado;
- preço do sistema de ventilação por metro quadrado de abertura;
- porcentagem de desperdício de material.

INFORMAÇÕES DO EQUIPAMENTO DE SOM:

- potência sonora, em watts;
- distância entre o equipamento e o observador, em metros.


====================================================================
1. DIMENSÕES E ÁREAS DA ESTRUTURA
====================================================================

Determine a área total do piso da arena.

Determine também a área total das quatro paredes, considerando que
duas possuem as dimensões comprimento × altura e as outras duas
largura × altura.

A cobertura possui duas águas inclinadas.

Cada água forma um triângulo retângulo. A largura horizontal D
corresponde ao cateto adjacente ao ângulo de inclinação θ, enquanto
o comprimento inclinado da cobertura corresponde à hipotenusa.

Para determinar o comprimento inclinado s, utilize:

    cos(θ) = D / s

Portanto:

    s = D / cos(θ)

As funções trigonométricas da linguagem utilizam radianos.
Como o ângulo fornecido pelo usuário está em graus, converta-o
antes de utilizar as funções trigonométricas.

A inclinação da cobertura também produz uma altura adicional h_c
em relação ao topo das paredes.

Essa altura corresponde ao cateto oposto do mesmo triângulo
retângulo. Para calculá-la, utilize:

    tan(θ) = h_c / D

Portanto:

    h_c = D × tan(θ)

A altura total da estrutura corresponde à altura das paredes somada
à altura adicional da cobertura.


====================================================================
2. COBERTURA E VENTILAÇÃO
====================================================================

Calcule a área total das duas águas da cobertura.

No centro da cobertura existe uma abertura circular destinada ao
sistema de ventilação.

Determine a área dessa abertura.

Utilize:

    PI = 3.141592653589793

A abertura não receberá material de cobertura.

Determine a área efetivamente coberta após descontar a abertura.

A empresa também informa uma porcentagem de desperdício de material.

Acrescente essa porcentagem à quantidade de material necessária para
a cobertura.

Determine a área final de material que deverá ser adquirida.


====================================================================
3. CUSTOS DA OBRA
====================================================================

Com base nas áreas calculadas e nos preços fornecidos, determine:

- custo total do piso;
- custo total do material da cobertura;
- custo total da pintura das paredes;
- custo do sistema de ventilação.

Em seguida, determine o custo total da obra.

Não considere outros custos além dos quatro apresentados.


====================================================================
4. ANÁLISE ACÚSTICA
====================================================================

O equipamento de som emite energia acústica igualmente em todas as
direções.

Considere que essa energia se distribui pela superfície de uma esfera
centrada na fonte sonora.

Calcule a área da superfície esférica na distância informada, utilizando:

    A = 4πd²

A intensidade sonora é obtida dividindo a potência da fonte pela área
da esfera.

Para calcular o nível sonoro em decibéis, utilize:

    N = 10 × log10(I / I0)

onde:

    I0 = 10^-12 W/m²

Utilize a função log10() da biblioteca matemática da linguagem.


====================================================================
5. INDICADORES DO PROJETO
====================================================================

Determine o custo médio da obra por metro quadrado de piso.

Determine também qual porcentagem do custo total da obra corresponde
ao material da cobertura.


====================================================================
6. ANÁLISE GEOMÉTRICA ADICIONAL
====================================================================

Determine a diagonal do piso utilizando o Teorema de Pitágoras.


====================================================================
7. RELATÓRIO FINAL
====================================================================

Apresente os resultados de maneira organizada, incluindo:

- dimensões calculadas da estrutura;
- áreas;
- quantidade de material necessária;
- custos individuais;
- custo total;
- informações da análise acústica;
- indicadores financeiros;
- diagonal do piso.

Utilize duas casas decimais para valores monetários, áreas,
distâncias e demais resultados apropriados.


====================================================================
RESTRIÇÕES
====================================================================

- Utilize somente estrutura sequencial.
- Não utilize if/else.
- Não utilize switch.
- Não utilize for.
- Não utilize while.
- Não utilize do/while.
- Não utilize vetores.
- Não utilize funções criadas pelo programador.

====================================================================
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    const double PI = 3.141592653589793;

    // Dimensoes da arena
    double comp_piso, larg_piso, alt_parede;
    double larg_cobertura, raio, graus;

    // Informacoes dos materiais
    double preco_piso, preco_cobertura, preco_pintura;
    double preco_vent, porcent;

    // Informacoes do equipamento de som
    double pot_som, dist;

    // Areas e dimensoes calculadas
    double area_piso, area_paredes;
    double rad, comp_cobertura, alt_adicional, alt_total;
    double area_cobertura, area_abertura;
    double area_cobertura_util, area_material;

    // Custos calculados
    double custo_piso, custo_cobertura;
    double custo_pintura, custo_vent, custo_total;

    // Analise acustica
    double area_esfera, intens, intens_ref, nivel_sonoro;

    // Indicadores
    double custo_medio, porcent_cobertura, diagonal;

    // =========================================================
    // ENTRADA DE DADOS
    // =========================================================

    cout << "Digite o comprimento do piso em m: ";
    cin >> comp_piso;

    cout << "Digite a largura do piso em m: ";
    cin >> larg_piso;

    cout << "Digite a altura das paredes em m: ";
    cin >> alt_parede;

    cout << "Digite a largura de cada lado da cobertura em m: ";
    cin >> larg_cobertura;

    cout << "Digite o raio da abertura circular de ventilacao em m: ";
    cin >> raio;

    cout << "Digite o angulo de inclinacao da cobertura em graus: ";
    cin >> graus;

    cout << "Digite o preco do piso por m2: ";
    cin >> preco_piso;

    cout << "Digite o preco do material da cobertura por m2: ";
    cin >> preco_cobertura;

    cout << "Digite o preco da pintura das paredes por m2: ";
    cin >> preco_pintura;

    cout << "Digite o preco do sistema de ventilacao por m2 de abertura: ";
    cin >> preco_vent;

    cout << "Digite a porcentagem de desperdicio de material: ";
    cin >> porcent;

    cout << "Digite a potencia sonora em watts: ";
    cin >> pot_som;

    cout << "Digite a distancia entre o equipamento e o observador em m: ";
    cin >> dist;

    // =========================================================
    // GEOMETRIA DA ARENA
    // =========================================================

    area_piso = comp_piso * larg_piso;

    area_paredes = 2 * (comp_piso * alt_parede)
                 + 2 * (larg_piso * alt_parede);

    rad = graus * PI / 180.0;
    comp_cobertura = larg_cobertura / cos(rad);
    alt_adicional = larg_cobertura * tan(rad);
    alt_total = alt_parede + alt_adicional;

    // =========================================================
    // COBERTURA E VENTILACAO
    // =========================================================

    area_cobertura = 2 * (comp_piso * comp_cobertura);
    area_abertura = PI * raio * raio;
    area_cobertura_util = area_cobertura - area_abertura;

    area_material = area_cobertura_util
                  * (1 + porcent / 100.0);

    // =========================================================
    // CUSTOS
    // =========================================================

    custo_piso = preco_piso * area_piso;
    custo_cobertura = preco_cobertura * area_material;
    custo_pintura = preco_pintura * area_paredes;
    custo_vent = preco_vent * area_abertura;

    custo_total = custo_piso
                + custo_cobertura
                + custo_pintura
                + custo_vent;

    // =========================================================
    // ANALISE ACUSTICA
    // =========================================================

    area_esfera = 4 * PI * dist * dist;
    intens = pot_som / area_esfera;
    intens_ref = pow(10, -12);
    nivel_sonoro = 10 * log10(intens / intens_ref);

    // =========================================================
    // INDICADORES DO PROJETO
    // =========================================================

    custo_medio = custo_total / area_piso;
    porcent_cobertura = (custo_cobertura / custo_total) * 100;

    diagonal = sqrt(comp_piso * comp_piso
                  + larg_piso * larg_piso);

    // =========================================================
    // RESULTADOS
    // =========================================================

    cout << fixed << setprecision(2);

    cout << "\n========== PROJETO DA ARENA ==========\n";

    cout << "\n--- GEOMETRIA ---\n";
    cout << "Area do piso: " << area_piso << " m2\n";
    cout << "Area das paredes: " << area_paredes << " m2\n";
    cout << "Comprimento inclinado da cobertura: " << comp_cobertura << " m\n";
    cout << "Altura adicional da cobertura: " << alt_adicional << " m\n";
    cout << "Altura total da estrutura: " << alt_total << " m\n";
    cout << "Area total da cobertura: " << area_cobertura << " m2\n";

    cout << "\n--- COBERTURA E VENTILACAO ---\n";
    cout << "Area da abertura: " << area_abertura << " m2\n";
    cout << "Area util da cobertura: " << area_cobertura_util << " m2\n";
    cout << "Area de material com desperdicio: " << area_material << " m2\n";

    cout << "\n--- CUSTOS ---\n";
    cout << "Custo do piso: R$ " << custo_piso << "\n";
    cout << "Custo da cobertura: R$ " << custo_cobertura << "\n";
    cout << "Custo da pintura: R$ " << custo_pintura << "\n";
    cout << "Custo da ventilacao: R$ " << custo_vent << "\n";
    cout << "Custo total da obra: R$ " << custo_total << "\n";

    cout << "\n--- ANALISE ACUSTICA ---\n";
    cout << "Area da esfera: " << area_esfera << " m2\n";

    cout << scientific << setprecision(6);
    cout << "Intensidade sonora: " << intens << " W/m2\n";

    cout << fixed << setprecision(2);
    cout << "Nivel sonoro: " << nivel_sonoro << " dB\n";

    cout << "\n--- INDICADORES ---\n";
    cout << "Custo medio por m2 do piso: R$ " << custo_medio << "\n";
    cout << "Percentual do custo na cobertura: " << porcent_cobertura << "%\n";
    cout << "Diagonal do piso: " << diagonal << " m\n";

    return 0;
}