"""
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
"""

temperatura = float(input("Digite a temperatura da amostra em Celsius: "))
pH = float(input("Digite o valor do pH da amostra: "))
nutrientes = float(input("Digite a concentração de nutrientes em g/L: "))
oxigenio = float(input("Digite a concentração de oxigênio dissolvido em mg/L: "))
antibiotico = float(input("Digite a concentração de antibiótico em mg/L: "))

print("\nTipo da bactéria:")
print("P - Gram-positiva")
print("N - Gram-negativa")
tipo = input("Digite o tipo da bactéria: ").upper()

dados_invalidos = (
    temperatura < 0
    or nutrientes < 0
    or oxigenio < 0
    or antibiotico < 0
    or pH < 0
    or pH > 14
)

if dados_invalidos:
    print("\nDado inválido.")
    exit()

if tipo != "P" and tipo != "N":
    print("\nTipo de bactéria inválido.")
    exit()

print("\n--- Análise da cultura ---")

if temperatura > 37:
    print("Temperatura: Elevada.")
elif temperatura >= 20:
    print("Temperatura: Adequada.")
else:
    print("Temperatura: Fria.")

if pH > 8:
    print("pH: Básico.")
elif pH >= 6:
    print("pH: Neutro.")
else:
    print("pH: Ácido.")

if nutrientes > 5:
    print("Nutrientes: Alta concentração.")
elif nutrientes >= 2:
    print("Nutrientes: Concentração adequada.")
else:
    print("Nutrientes: Baixa concentração.")

if oxigenio > 6:
    print("Oxigênio: Alta concentração.")
elif oxigenio >= 2:
    print("Oxigênio: Concentração adequada.")
else:
    print("Oxigênio: Baixa concentração.")

if antibiotico > 10:
    print("Pressão antibiótica: Alta.")
elif antibiotico >= 5:
    print("Pressão antibiótica: Moderada.")
else:
    print("Pressão antibiótica: Baixa.")

forte_pressao = False

if tipo == "P":
    forte_pressao = antibiotico > 8
elif tipo == "N":
    forte_pressao = antibiotico > 12

if forte_pressao:
    print("Situação: Cultura sob forte pressão antibiótica.")
else:
    print("Situação: Cultura não está sob forte pressão antibiótica.")

temperatura_adequada = temperatura >= 20 and temperatura <= 37

ph_adequado = pH >= 6 and pH <= 8

nutrientes_adequados = nutrientes >= 2 and nutrientes <= 5

oxigenio_adequado = oxigenio >= 2 and oxigenio <= 6

antibiotico_adequado = not forte_pressao

print("\n--- Condições de crescimento ---")

if temperatura_adequada:
    print("Temperatura: Adequada.")
else:
    print("Temperatura: Inadequada.")

if ph_adequado:
    print("pH: Adequado.")
else:
    print("pH: Inadequado.")

if nutrientes_adequados:
    print("Nutrientes: Adequados.")
else:
    print("Nutrientes: Inadequados.")

if oxigenio_adequado:
    print("Oxigênio: Adequado.")
else:
    print("Oxigênio: Inadequado.")

if antibiotico_adequado:
    print("Antibiótico: Adequado.")
else:
    print("Antibiótico: Inadequado.")

condicoes_ideais = (
    temperatura_adequada
    and ph_adequado
    and nutrientes_adequados
    and oxigenio_adequado
    and antibiotico_adequado
)

print("\n--- Classificação geral ---")

if forte_pressao:
    print("Crescimento comprometido.")
elif condicoes_ideais:
    print("Crescimento favorável.")
else:
    print("Crescimento limitado.")