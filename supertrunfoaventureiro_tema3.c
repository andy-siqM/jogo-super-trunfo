// Aproveitar código anterior
// Implementar um menu interativo usando switch
// jogador pode escolher o atributo de comparação entre duas cartas de países
// Além disso, você usará estruturas de decisão aninhadas
//(if-else dentro de if-else) para criar uma lógica de comparação mais complexa

#include <stdio.h>
#include <string.h>

int main() {
    char nomePais_1[50], nomePais_2[50]; // armazena o nome do país
    int populacao1, populacao2; // armazena a população total do país
    float area1, area2; // armazena a área do país em km²
    float pib1, pib2; // armazena o PIB do país
    int numero_pontos_turisticos1, numero_pontos_turisticos2; // armazena o número de pontos turísticos do país
    float densidade1, densidade2; // numero de habitante/km² para os dois países
    float pib_per_capita1, pib_per_capita2; // riqueza média por pessoa de cada um dos dois países
    // float super_poder1, super_poder2; 

    printf("\n");
    printf("Bem-vindo ao Super Trunfo Aventureiro - Tema: Países!\n");
    printf("Vamos comparar um dos atributos de duas cartas de países e determinar a carta vencedora!\n");
    printf("\n");

    // Identificando a carta 1
    printf("Forneça os dados para a carta 1:\n");
    printf("Informe o nome do país: \n");
    scanf(" %49[^\n]", nomePais_1); // espaço antes de %49[^\n] para consumir qualquer espaço em branco
    printf("Informe a população do país: \n");
    scanf("%d", &populacao1);
    printf("Informe a área do país (em km²): \n");
    scanf("%f", &area1);
    printf("Informe o PIB do país: \n");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos da cidade: \n");
    scanf("%d", &numero_pontos_turisticos1);
    printf("\n");
    // identificando a carta 2
    printf("Forneça os dados para a carta 2:\n");
    printf("Informe o nome do país: \n");
    scanf(" %49[^\n]", nomePais_2); // espaço antes de %49[^\n] para consumir qualquer espaço em branco
    printf("Informe a população do país: \n");
    scanf("%d", &populacao2);
    printf("Informe a área do país (em km²): \n");
    scanf("%f", &area2);
    printf("Informe o PIB do país: \n");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos do país: \n");
    scanf("%d", &numero_pontos_turisticos2);
    printf("\n");
    printf("Cartas cadastradas com sucesso!\n");
    
     // Calcular densidade demografica do país 1
    densidade1 = populacao1 / area1;
    // Calcular densidade demografica do  país 2
    densidade2 = populacao2 / area2;

     // Momento de comparação entre as cartas usando um menu interativo
     int escolha_atributo; // usuário escolhe o atributo de comparação
     printf("\nEscolha o atributo para comparação entre as cartas:\n");
     printf("1 - Nome do País (apenas para informação)\n");
     printf("2 - População\n");
     printf("3 - Área\n");
     printf("4 - PIB\n");
     printf("5 - Número de pontos turísticos\n");
     printf("6 - Densidade demográfica\n");
     scanf("%d", &escolha_atributo);

     // estrutura de decisão com switch case
     switch (escolha_atributo) {
        case 1:
            printf("\nInformação de cartas (Atributo: Nome dos dois países):\n");
            printf("Carta 1 - País: %s\n", nomePais_1);
            printf("Carta 2 - País: %s\n", nomePais_2);
            printf("A comparação de nomes é apenas informativa, não há carta vencedora!\n");
            break;
        case 2:
            printf("\nComparação de cartas (Atributo: População):\n");
            printf("Carta 1 - %s: %d habitantes\n", nomePais_1, populacao1);
            printf("Carta 2 - %s: %d habitantes\n", nomePais_2, populacao2);
            if (populacao1 > populacao2) {
                printf("Carta 1 é a vencedora com maior população!\n");
            } else if (populacao2 > populacao1) {
                printf("Carta 2 é a vencedora com maior população!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
            printf("\nComparação de cartas (Atributo: Área):\n");
            printf("Carta 1 - %s: %.2f km²\n", nomePais_1, area1);
            printf("Carta 2 - %s: %.2f km²\n", nomePais_2, area2);
            if (area1 > area2) {
                printf("Carta 1 é a vencedora com maior área!\n");
            } else if (area2 > area1) {
                printf("Carta 2 é a vencedora com maior área!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 4:
            printf("\nComparação de cartas (Atributo: PIB):\n");
            printf("Carta 1 - %s: %.2f bilhões de reais\n", nomePais_1, pib1);
            printf("Carta 2 - %s: %.2f bilhões de reais\n", nomePais_2, pib2);
            if (pib1 > pib2) {
                printf("Carta 1 é a vencedora com maior PIB!\n");
            } else if (pib2 > pib1) {
                printf("Carta 2 é a vencedora com maior PIB!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 5:
            printf("\nComparação de cartas (Atributo: Número de pontos turísticos):\n");
            printf("Carta 1 - %s: %d pontos turísticos\n", nomePais_1, numero_pontos_turisticos1);
            printf("Carta 2 - %s: %d pontos turísticos\n", nomePais_2, numero_pontos_turisticos2);
            if (numero_pontos_turisticos1 > numero_pontos_turisticos2) {
                printf("Carta 1 é a vencedora com maior número de pontos turísticos!\n");
            } else if (numero_pontos_turisticos2 > numero_pontos_turisticos1) {
                printf("Carta 2 é a vencedora com maior número de pontos turísticos!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 6:
            printf("\nComparação de cartas (Atributo: Densidade demográfica):\n");
            printf("Carta 1 - %s: %.2f habitantes/km²\n", nomePais_1, densidade1);
            printf("Carta 2 - %s: %.2f habitantes/km²\n", nomePais_2, densidade2);
            if (densidade1 < densidade2) {
                printf("Carta 1 é a vencedora com menor densidade demográfica!\n");
            } else if (densidade2 < densidade1) {
                printf("Carta 2 é a vencedora com menor densidade demográfica!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida! Por favor, escolha um número entre 1 e 6.\n");
            break;
     }
     return 0; // encerrar programa
}