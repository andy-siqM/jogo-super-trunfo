// Programa em C para cadastrar cartas do Super Trunfo com informações sobre as cidades
// Cadastrar dados de 2 cartas com as seguintes informações:
// Estado: uma letra de A a H (Oito estados)  tipo char
// Código da carta: letra do estado seguida de um número de 01 a 04
// O código é tipo char array de 3 posições (ex: A01, B03, etc)
// Nome da cidade: tipo char array string
// População: tipo int
// Área (em km²): tipo float
// PIB (Produto Interno Bruto): tipo float
// Número de pontos turísticos: tipo int
// Depois de inserir os dados das cartas, imprima as informações cadastradas 
// Para cada carta, imprimir cada informação em uma linha separada, com descrição clara

#include <stdio.h>
#include <string.h>
int main() {
    char estado1, estado2; // armazena a letra do estado (A a H)
    char codigo_1[4], codigo_2[4]; // armazena o código da carta (3 caracteres + \0)
    char nomeCidade_1[50], nomeCidade_2[50]; // armazena o nome da cidade
    int populacao1, populacao2; // armazena a população da cidade
    float area1, area2; // armazena a área da cidade em km²
    float pib1, pib2; // armazena o PIB da cidade
    int numero_pontos_turisticos1, numero_pontos_turisticos2; // armazena o número de pontos turísticos da cidade

    // solicitar dados da carta 1
    printf("Digite os dados da carta 1:\n");
    printf("Informe uma letra de 'A' a 'H': \n");
    scanf(" %c", &estado1); // espaço antes de %c para consumir qualquer espaço em branco
    printf("Informe o código da carta (ex: A01, B03): \n");
    scanf(" %s", codigo_1); // espaço antes de %s para consumir qualquer espaço em branco
    printf("Informe o nome da cidade: \n");
    scanf(" %49[^\n]", nomeCidade_1); // espaço antes de %49[^\n] para consumir qualquer espaço em branco
    printf("Informe a população da cidade: \n");
    scanf("%d", &populacao1);
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
    scanf("%d", &populacao2);
    printf("Informe a área da cidade (em km²): \n");
    scanf("%f", &area2);
    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos da cidade: \n");
    scanf("%d", &numero_pontos_turisticos2);

    // imprimir informações cadastradas para a carta 1
    printf("\nCarta1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", nomeCidade_1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos1);

    // imprimir informações cadastradas para a carta 2
    printf("\nCarta2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", nomeCidade_2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos2);

    printf("\nCartas cadastradas com sucesso!\n");
    return 0; // encerrar programa
}