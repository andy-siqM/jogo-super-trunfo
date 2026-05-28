// Utilize os operadores ternários, estruturas de decisão if, if-else e switch
// Crie um programa em que o jogador escolhe um número e um tipo de comparação (maior, menor ou igual)
// Competir contra um número gerado aleatoriamente pelo computador

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()  {
    int numJogador, numComputador;
    char tipoComparacao;

    // Gerar número aleatório para o computador
    srand(time(0)); 
    numComputador = rand() % 100 + 1; // Número entre 1 e 100

    // Solicitar ao jogador que escolha um número e um tipo de comparação
    printf("Escolha um número entre 1 e 100: \n");
    scanf("%d", &numJogador);
        // Verificar se o número do jogador é válido
        if (numJogador < 1 || numJogador > 100) { // Se menor que 1 ou maior que 100, número inválido
            printf("Número inválido! Por favor, escolha um número entre 1 e 100.\n");
            return 1; // Encerrar o programa com código de erro
        } else {
            printf("Número válido! Você escolheu: %d\n", numJogador);
        }
    printf("Escolha o tipo de comparação (m para maior, n para menor, i para igual): \n");
    scanf(" %c", &tipoComparacao); // inclui caractere com ou sem espaço

    // Impressão dos dados impressos
    printf("Número do Jogador: %d\n", numJogador);
    printf("Número do Computador: %d\n", numComputador);

    // Verificar o resultado da comparação
    switch (tipoComparacao) {
        case 'M': // verificar se número do jogador é maior que o do computador
        case 'm': // verificar se número do jogador é maior que o do computador
            if (numJogador > numComputador) {
                printf("O seu número é maior que o do computador!\n");
                printf("Parabéns! Você venceu!\n");
            }
            // operador ternario: numJogador > numComputador ? printf("O seu número é maior que o do computador!\n") : printf("O seu número não é maior que o do computador!\n");
            break;
        case 'N': // verificar se número do jogador é menor que o do computador
        case 'n': // verificar se número do jogador é menor que o do computador
            if (numJogador < numComputador) {
                printf("O seu número é menor que o do computador!\n");
                printf("Parabéns! Você venceu!\n");
            }
            // operador ternario: numJogador < numComputador ? printf("O seu número é menor que o do computador!\n") : printf("O seu número não é menor que o do computador!\n");
            break;
        case 'I': // verificar se número do jogador é igual ao do computador
        case 'i': // verificar se número do jogador é igual ao do computador
            if (numJogador == numComputador) {
                printf("O seu número é igual ao do computador!\n");
                printf("Parabéns! Você venceu!\n");
            } else {
                printf("O seu número não é igual ao do computador!\n");
                printf("Que pena! Você perdeu!\n");
            }
            // op ternario: numJogador == numComputador ? printf("O seu número é igual ao do computador!\n") : printf("O seu número não é igual ao do computador!\n");
            break;
        default:
            printf("Tipo de comparação inválido! Insira 'm' para maior, 'n' para menor ou 'i' para igual.\n");
    }
    printf("Fim do jogo!\n");
    return 0;
}