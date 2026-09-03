"""
====================================================================
DESAFIO FINAL — PROJETO DE UMA ESTRUTURA ESPORTIVA
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
"""

import math

# =========================================================
# ENTRADA DE DADOS
# =========================================================

comp_piso = float(input("Digite o comprimento do piso em m: "))
larg_piso = float(input("Digite a largura do piso em m: "))
alt_parede = float(input("Digite a altura das paredes em m: "))
larg_cobertura = float(input("Digite a largura de cada lado da cobertura em m: "))
raio = float(input("Digite o raio da abertura circular de ventilação em m: "))
graus = float(input("Digite o ângulo de inclinação da cobertura em graus: "))

# Informacoes dos materiais
preco_piso = float(input("Digite o preço do piso por m2: "))
preco_cobertura = float(input("Digite o preço do material da cobertura por m2: "))
preco_pintura = float(input("Digite o preço da pintura das paredes por m2: "))
preco_vent = float(input("Digite o preço do sistema de ventilacao por m2 de abertura: "))
porcent = float(input("Digite a porcentagem de desperdício de material: "))


# Informacoes do equipamento de som
pot_som = float(input("Digite a potência sonora em watts: "))
dist = float(input("Digite a distância entre o equipamento e o observador em m: "))

# =========================================================
# GEOMETRIA DA ARENA
# =========================================================

area_piso = comp_piso * larg_piso

area_paredes = (
    2 * (comp_piso * alt_parede)
    + 2 * (larg_piso * alt_parede)
)

rad = graus * math.pi / 180.0
comp_cobertura = larg_cobertura / math.cos(rad)
alt_adicional = larg_cobertura * math.tan(rad)
alt_total = alt_parede + alt_adicional

# =========================================================
# COBERTURA E VENTILACAO
# =========================================================

area_cobertura = 2 * (comp_piso * comp_cobertura)
area_abertura = math.pi * raio ** 2
area_cobertura_util = area_cobertura - area_abertura
area_material = (area_cobertura_util * (1 + porcent / 100.0))

# =========================================================
# CUSTOS
# =========================================================

custo_piso = preco_piso * area_piso
custo_cobertura = preco_cobertura * area_material
custo_pintura = preco_pintura * area_paredes
custo_vent = preco_vent * area_abertura

custo_total = (
    custo_piso
    + custo_cobertura
    + custo_pintura
    + custo_vent
)

# =========================================================
# ANALISE ACUSTICA
# =========================================================

area_esfera = 4 * math.pi * dist ** 2
intens = pot_som / area_esfera
intens_ref = 10 ** -12
nivel_sonoro = 10 * math.log10(intens / intens_ref)

# =========================================================
# INDICADORES DO PROJETO
# =========================================================

custo_medio = custo_total / area_piso
porcent_cobertura = (custo_cobertura / custo_total) * 100

diagonal = math.sqrt(comp_piso ** 2 + larg_piso ** 2)

# =========================================================
# RESULTADOS
# =========================================================

print("\n========== PROJETO DA ARENA ==========")

print("\n--- GEOMETRIA ---")
print(f"Área do piso: {area_piso:.2f} m2")
print(f"Área das paredes: {area_paredes:.2f} m2")
print(f"Comprimento inclinado da cobertura: {comp_cobertura:.2f} m")
print(f"Altura adicional da cobertura: {alt_adicional:.2f} m")
print(f"Altura total da estrutura: {alt_total:.2f} m")
print(f"Área total da cobertura: {area_cobertura:.2f} m2")

print("\n--- COBERTURA E VENTILAÇÃO ---")
print(f"Área da abertura: {area_abertura:.2f} m2")
print(f"Área útil da cobertura: {area_cobertura_util:.2f} m2")
print(f"Área de material com desperdicio: {area_material:.2f} m2")

print("\n--- CUSTOS ---")
print(f"Custo do piso: R$ {custo_piso:.2f}")
print(f"Custo da cobertura: R$ {custo_cobertura:.2f}")
print(f"Custo da pintura: R$ {custo_pintura:.2f}")
print(f"Custo da ventilação: R$ {custo_vent:.2f}")
print(f"Custo total da obra: R$ {custo_total:.2f}")

print("\n--- ANÁLISE ACÚSTICA ---")
print(f"Área da esfera: {area_esfera:.2f} m2")
print(f"Intensidade sonora: {intens:.6e} W/m2")
print(f"NÍvel sonoro: {nivel_sonoro:.2f} dB")

print("\n--- INDICADORES ---")
print(f"Custo medio por m2 do piso: R$ {custo_medio:.2f}")
print(f"Percentual do custo na cobertura: {porcent_cobertura:.2f}%")
print(f"Diagonal do piso: {diagonal:.2f} m")