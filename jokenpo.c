// Jogo de jokenpo usando if-else e switch-case em C
// O jogador escolhe entre pedra, papel ou tesoura, e o computador faz uma escolha aleatória
// O programa determina o vencedor com base nas regras do jogo.
// Regras: papel vence pedra, pedra vence tesoura, e tesoura vence papel.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;
    srand(time(0)); // Inicializa o gerador de números aleatórios

    // Menu interativo com o jogador
    printf("Bem-vindo ao jogo de Jokenpo!\n");
    printf("Escolha uma opção: \n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Digite sua escolha (1-3): \n");
    scanf("%d", &escolhaJogador);

    // Gerar escolha aleatória para o computador
    escolhaComputador = rand() % 3 + 1; // Gera um número aleatório entre 1 e 3

    // Determinar vencedor com estrutura switch-case
    // 1 - Pedra, 2 - Papel, 3 - Tesoura
    switch (escolhaJogador) {
        case 1: // Jogador escolheu Pedra
            if (escolhaComputador == 1) { // Computador escolheu Pedra
                printf("Empate! Ninguém venceu desta vez\n");
                printf("Você e o computador escolheram Pedra.\n");
            } else if (escolhaComputador == 2) { // Computador escolheu Papel
                printf("Que pena! Você perdeu!\n");
                printf("Você escolheu Pedra e o computador escolheu Papel.\n");
            } else { // Computador escolheu Tesoura
                printf("Parabéns! Você venceu!\n");
                printf("Você escolheu Pedra e o computador escolheu Tesoura.\n");
            }
            break;
        case 2: // Jogador escolheu Papel
            if (escolhaComputador == 1) { // Computador escolheu Pedra
                printf("Parabéns! Você venceu!\n");
                printf("Você escolheu Papel e o computador escolheu Pedra.\n");
            } else if (escolhaComputador == 2) { // Computador escolheu Papel
                printf("Empate! Ninguém venceu desta vez, porque você e computador escolheram Papel.\n");
            } else { // Computador escolheu Tesoura
                printf("Que pena! Você perdeu!\n");
                printf("Você escolheu Papel e o computador escolheu Tesoura.\n");
            }
            break;
        case 3: // Jogador escolheu Tesoura
            if (escolhaComputador == 1) { // Computador escolheu Pedra
                printf("Que pena! Você perdeu!\n");
                printf("Você escolheu Tesoura e o computador escolheu Pedra.\n");
            } else if (escolhaComputador == 2) { // Computador escolheu Papel
                printf("Parabéns! Você venceu!\n");
                printf("Você escolheu Tesoura e o computador escolheu Papel.\n");
            } else { // Computador escolheu Tesoura
                printf("Empate! Ninguém venceu desta vez\n");
                printf("Você e o computador escolheram Tesoura.\n");
            }
            break;
        default: // Caso o jogador digite um número diferente de 1, 2, 3
            printf("Opção inválida! Por favor, escolha entre 1, 2 ou 3.\n");
    }

    // bloco if-else encadeado
    /*
    if (escolhaJogador == escolhaComputador) {
        printf("Empate! Ninguém venceu desta vez\n");
    } else if ((escolhaJogador == 1 && escolhaComputador == 3) || // Pedra vence Tesoura
               (escolhaJogador == 2 && escolhaComputador == 1) || // Papel vence Pedra
               (escolhaJogador == 3 && escolhaComputador == 2)) { // Tesoura vence Papel
        printf("Parabéns! Você venceu!\n");
    } else {
        printf("Que pena! Você perdeu!\n");
    }
    */

    return 0;
}