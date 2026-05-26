// Aproveitar código do nível anterior
// Incluir nova lógica para comparar 2 cartas e determinar a vencedora com base em único atributo numérico


#include <stdio.h>
#include <string.h>

int main(){
    char estado1[50], estado2[50]; // armazena a letra do estado (A a H)
    char codigo_1[4], codigo_2[4]; // armazena o código da carta (3 caracteres + \0)
    char nomeCidade_1[50], nomeCidade_2[50]; // armazena o nome da cidade
    unsigned long int populacao1, populacao2; // armazena a população da cidade em números positivos maiores
    float area1, area2; // armazena a área da cidade em km²
    float pib1, pib2; // armazena o PIB da cidade
    int numero_pontos_turisticos1, numero_pontos_turisticos2; // armazena o número de pontos turísticos da cidade
    float densidade1, densidade2; // numero de habitante/km² para as duas cidades
    float pib_per_capita1, pib_per_capita2; // riqueza média por pessoa de cada uma das duas cidades
    float super_poder1, super_poder2; // variáveis para armazenar o valor do super poder de cada carta
    
    // solicitar dados da carta 1
    printf("Digite os dados da carta 1:\n");
    printf("Informe uma letra de 'A' a 'H': \n");
    scanf(" %49[^\n]", estado1); // espaço antes de %49[^\n] para consumir qualquer espaço em branco
    printf("Informe o código da carta (ex: A01, B03): \n");
    scanf(" %3s", codigo_1); // espaço antes de %3s para consumir qualquer espaço em branco
    printf("Informe o nome da cidade: \n");
    scanf(" %49[^\n]", nomeCidade_1); // espaço antes de %49[^\n] para consumir qualquer espaço em branco
    printf("Informe a população da cidade: \n");
    scanf("%lu", &populacao1);
    printf("Informe a área da cidade (em km²): \n");
    scanf("%f", &area1);
    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos da cidade: \n");
    scanf("%d", &numero_pontos_turisticos1);

    // solicitar dados da carta 2
    printf("\nDigite os dados da carta 2:\n");
    printf("Informe uma letra de 'A' a 'H': \n");
    scanf(" %49[^\n]", estado2); // espaço antes de %49[^\n] para consumir qualquer espaço em branco
    printf("Informe o código da carta (ex: A01, B03): \n");
    scanf(" %3s", codigo_2);
    printf("Informe o nome da cidade: \n");
    scanf(" %49[^\n]", nomeCidade_2);
    printf("Informe a população da cidade: \n");
    scanf("%lu", &populacao2);
    printf("Informe a área da cidade (em km²): \n");
    scanf("%f", &area2);
    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos da cidade: \n");
    scanf("%d", &numero_pontos_turisticos2);

    // Calcular densidade populacional da cidade 1
    densidade1 = populacao1 / area1;
    // Calcular densidade populacional da cidade 2
    densidade2 = populacao2 / area2;

    // Calcular inverso da densidade populacional para a cidade 1 (quanto menor a densidade, maior o super poder)
    float inverso_densidade1 = 1 / densidade1;
    // Calcular inverso da densidade populacional para a cidade 2 (quanto menor, maior o poder)
    float inverso_densidade2 = 1 / densidade2;

    // Calcular PIB per capita da cidade 1
    pib_per_capita1 = pib1 / populacao1 * 1000000000; // multiplicar por 1 bilhão para converter de bilhões de reais para reais
    // Calcular PIB per capita da cidade 2
    pib_per_capita2 = pib2 / populacao2 * 1000000000; // multiplicar por 1 bilhão para converter de bilhões de reais para reais

    // Calcular super poder da carta 1 (soma de todos os atributos numéricos da carta 1)
    super_poder1 = (float)(populacao1 + area1 + pib1 + numero_pontos_turisticos1 + inverso_densidade1 + pib_per_capita1);
    
    // Calcular super poder da carta 2 (soma de todos os atributos numéricos da carta 2)
    super_poder2 = (float)(populacao2 + area2 + pib2 + numero_pontos_turisticos2 + inverso_densidade2 + pib_per_capita2);

    /* Comparações das cartas por atributos individuais usando operadores relacionais
    // Exceto na densidade, as cartas com maiores valores vencem!
    int comparacao_populacao = (populacao1 > populacao2);
    int comparacao_area = (area1 > area2);
    int comparacao_pib = (pib1 > pib2);
    int comparacao_pontos_turisticos = (numero_pontos_turisticos1 > numero_pontos_turisticos2);
    int comparacao_densidade = (inverso_densidade1 > inverso_densidade2); // carta com menor densidade vai vencer
    int comparacao_pib_per_capita = (pib_per_capita1 > pib_per_capita2);
    int comparacao_super_poder = (super_poder1 > super_poder2);
    */

    // imprimir informações cadastradas para a carta 1
    printf("\nCarta1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", nomeCidade_1);
    printf("População: %.2lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // imprimir informações cadastradas para a carta 2
    printf("\nCarta2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", nomeCidade_2);
    printf("População: %.2lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("\nCartas cadastradas com sucesso!\n");
    printf("\n");

    // Imprimir resultados das comparações entre as cartas
    printf("Comparação de cartas (Atributo: População):\n");
    printf("\n");
    printf("Carta %s - %s: %lu\n", codigo_1, nomeCidade_1, populacao1);
    printf("Carta %s - %s: %lu\n", codigo_2, nomeCidade_2, populacao2);
    
    // Fazer comparação com o valor do atributo população e determinar a carta vencedora
    // Para todos os atributos, a carta com maior valor vence, exceto na densidade populacional, onde a carta com menor valor vence
    // Comparar valor de população entre as duas cartas
    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu a Carta 2 (%s)!\n", nomeCidade_1, nomeCidade_2);
    } else if (populacao1 < populacao2) {
        printf("\nResultado: Carta 2 (%s) venceu a Carta 1 (%s)!\n", nomeCidade_2, nomeCidade_1);
    } else {
        printf("\nResultado: As cartas %s e %s empataram!\n", nomeCidade_1, nomeCidade_2);
    }

    /*
    printf("1 para verdadeiro - Carta 1 vence - e 0 para falso - Carta 2 vence\n");
    printf("População: Carta %s vence a Carta %s? %d\n", codigo_1, codigo_2, comparacao_populacao); 
    printf("Área: Carta %s vence a Carta %s? %d\n", codigo_1, codigo_2, comparacao_area);
    printf("PIB: Carta %s vence a Carta %s? %d\n", codigo_1, codigo_2, comparacao_pib);
    printf("Pontos Turísticos: Carta %s vence a Carta %s? %d\n", codigo_1, codigo_2, comparacao_pontos_turisticos);
    printf("Densidade Populacional: Carta %s vence a Carta %s? %d\n", codigo_1, codigo_2, comparacao_densidade);
    printf("PIB per Capita: Carta %s vence a Carta %s? %d\n", codigo_1, codigo_2, comparacao_pib_per_capita);
    printf("Super Poder: Carta %s vence a Carta %s? %d\n", codigo_1, codigo_2, comparacao_super_poder);
    printf("\nComparações realizadas com sucesso!\n");
    */

    return 0; // encerrar programa
}