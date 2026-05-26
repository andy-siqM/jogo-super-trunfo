// programa para adivinhar um número entre 1 e 10, usando switch case
// Incluir função de geração de número aleatório 
// Incluir função de gerar sequências de números diferentes a cada execução

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao, numeroSecreto, chute;

    // menu interativo
    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Escolha uma opção:\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ler regras\n");
    printf("3. Sair\n");
    printf("Digite a opção desejada: \n");
    scanf("%d", &opcao);

    // estrutura switch case para executar as opções do menu
    switch (opcao) {
        case 1:
            // Gerar número aleatório entre 1 e 10
            srand(time(0)); // Inicializa o gerador de números aleatórios
            numeroSecreto = rand() % 10 + 1; // Gera um número entre 1 e 10
            printf("Tente adivinhar um número entre 1 e 10: \n");
            scanf("%d", &chute);

            if (chute == numeroSecreto) {
                printf("Parabéns! Você adivinhou o número secreto!\n");
            } else {
                printf("Que pena! O número secreto era %d.\n", numeroSecreto);
            }
            break;

        case 2:
            printf("Regras do jogo:\n");
            printf("1. O objetivo é adivinhar um número secreto entre 1 e 10.\n");
            printf("2. Você tem apenas uma chance para adivinhar o número.\n");
            printf("3. Se você acertar, ganha o jogo. Se errar, perde.\n");
            break;

        case 3:
            printf("Saindo... obrigado por jogar! Até a próxima!\n");
            break;

        default:
            printf("Opção inválida! Por favor, escolha outra opção.\n");
    }
    return 0;
}