// Programa com código do Super Trunfo de nível iniciante
// Novidade: lógica para calcular e exibir duas novas propriedades: densidade populacional e PIB per capita
// Densidade: divida população da cidade pela sua área (habitantes/km²)
// Densidade deve armazenar valor em uma var do tipo float
// PIB per capita: PIB total dividido pela população da cidade
// PIB deve armazenar valor em uma var do tipo float


#include <stdio.h>
#include <string.h>
int main() {
    char estado1, estado2; // armazena a letra do estado (A a H)
    char codigo_1[4], codigo_2[4]; // armazena o código da carta (3 caracteres + \0)
    char nomeCidade_1[50], nomeCidade_2[50]; // armazena o nome da cidade
    float populacao1, populacao2; // armazena a população da cidade
    float area1, area2; // armazena a área da cidade em km²
    float pib1, pib2; // armazena o PIB da cidade
    int numero_pontos_turisticos1, numero_pontos_turisticos2; // armazena o número de pontos turísticos da cidade
    float densidade1, densidade2; // numero de habitante/km² para as duas cidades
    float pib_per_capita1, pib_per_capita2; // riqueza média por pessoa de cada uma das duas cidades

    // solicitar dados da carta 1
    printf("Digite os dados da carta 1:\n");
    printf("Informe uma letra de 'A' a 'H': \n");
    scanf(" %c", &estado1); // espaço antes de %c para consumir qualquer espaço em branco
    printf("Informe o código da carta (ex: A01, B03): \n");
    scanf(" %s", codigo_1); // espaço antes de %s para consumir qualquer espaço em branco
    printf("Informe o nome da cidade: \n");
    scanf(" %49[^\n]", nomeCidade_1); // espaço antes de %49[^\n] para consumir qualquer espaço em branco
    printf("Informe a população da cidade: \n");
    scanf("%f", &populacao1);
    printf("Informe a área da cidade (em km²): \n");
    scanf("%f", &area1);
    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos da cidade: \n");
    scanf("%d", &numero_pontos_turisticos1);

    // solicitar dados da carta 2
    printf("\nDigite os dados da carta 2:\n");
    printf("Informe uma letra de 'A' a 'H': \n");
    scanf(" %c", &estado2); // espaço antes de %c para consumir qualquer espaço em branco
    printf("Informe o código da carta (ex: A01, B03): \n");
    scanf(" %s", codigo_2);
    printf("Informe o nome da cidade: \n");
    scanf(" %49[^\n]", nomeCidade_2);
    printf("Informe a população da cidade: \n");
    scanf("%f", &populacao2);
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

    // Calcular PIB per capita da cidade 1
    pib_per_capita1 = pib1 / populacao1 * 1000000000; // multiplicar por 1 bilhão para converter de bilhões de reais para reais
    // Calcular PIB per capita da cidade 2
    pib_per_capita2 = pib2 / populacao2 * 1000000000; // multiplicar por 1 bilhão para converter de bilhões de reais para reais

    // imprimir informações cadastradas para a carta 1
    printf("\nCarta1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", nomeCidade_1);
    printf("População: %.2f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // imprimir informações cadastradas para a carta 2
    printf("\nCarta2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", nomeCidade_2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    printf("\nCartas cadastradas com sucesso!\n");
    return 0; // encerrar programa
}