// Super trunfo genérico - Nível Mestre (Tema 3)
/*
Permitir que o jogador escolha dois atributos numéricos diferentes para a comparação das cartas, através de menus interativos
Implemente a lógica necessária para garantir que o jogador não possa selecionar o mesmo atributo duas vezes.
Implemente a lógica para comparar as duas cartas com base nos dois atributos escolhidos. 
Para cada atributo, a regra geral é: vence a carta com o maior valor.
Após comparar os dois atributos individualmente, o sistema deve somar os valores dos atributos para cada carta. A carta com a maior soma vence a rodada.
Implemente a lógica para tratar empates. Se a soma dos atributos das duas cartas for igual, exiba a mensagem "Empate!".
Menus Dinâmicos: Crie menus interativos e dinâmicos usando switch.
Utilize o default no switch para tratar opções inválidas.
Após o jogador escolher o primeiro atributo, esse atributo não deve mais aparecer como opção para a escolha do segundo atributo.
Exibição Clara do Resultado: Mostre o resultado da comparação de forma clara e organizada, incluindo:
1) O nome dos dois países.
2) Os dois atributos usados na comparação.
3) Os valores de cada atributo para cada carta.
4) A soma dos atributos para cada carta.
5) Qual carta venceu (ou se houve empate).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int forca1, forca2, velocidade1, velocidade2, inteligencia1, inteligencia2, resistencia1, resistencia2; // atributos numéricos
    char nomeCarta1[50], nomeCarta2[50]; // nomes das duas cartas comparadas
    int somaAtributosCarta1, somaAtributosCarta2; // para armazenar a soma dos atributos de cada carta

    // Geração de dados aleatórios para as cartas
    printf("Bem-vindo ao Super Trunfo - Tema: Cartas de Super Heróis!\n");
    printf("Vamos comparar dois atributos de duas cartas!\n");
    printf("A de maior valor vence a rodada, e se a soma dos atributos for igual, é empate!\n");
    printf("\n");
    
    // Gerar dados para a carta 1
    printf("Forneça os dados para a carta 1:\n");
    printf("Informe o nome da carta 1: \n");
    scanf(" %49[^\n]", nomeCarta1); // espaço para incluir qualquer espaço em branco
    printf("Informe a força do herói 1: \n");
    scanf("%d", &forca1);
    printf("Informe a velocidade do herói 1: \n");
    scanf("%d", &velocidade1);
    printf("Informe a inteligência do herói 1: \n");
    scanf("%d", &inteligencia1);
    printf("Informe a resistência do herói 1: \n");
    scanf("%d", &resistencia1);
    printf("\n");

    // Gerar dados para a carta 2
    printf("Forneça os dados para a carta 2:\n");
    printf("Informe o nome da carta 2: \n");
    scanf(" %49[^\n]", nomeCarta2); // espaço para incluir qualquer espaço em branco
    printf("Informe a força do herói 2: \n");
    scanf("%d", &forca2);
    printf("Informe a velocidade do herói 2: \n");
    scanf("%d", &velocidade2);
    printf("Informe a inteligência do herói 2: \n");
    scanf("%d", &inteligencia2);
    printf("Informe a resistência do herói 2: \n");
    scanf("%d", &resistencia2);
    printf("\n");

    // Menu interativo para escolha dos atributos
    int escolha_atributo1, escolha_atributo2;
    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1 - Força\n");
    printf("2 - Velocidade\n");
    printf("3 - Inteligência\n");
    printf("4 - Resistência\n");
    scanf("%d", &escolha_atributo1);

    if (escolha_atributo1 < 1 || escolha_atributo1 > 4) {
        printf("Opção inválida! Por favor, escolha um número entre 1 e 4.\n");
        return 1; // Encerrar o programa com código de erro
    }

    // Após o jogador escolher o primeiro atributo, esse atributo não deve mais aparecer como opção para a escolha do segundo atributo.
    printf("Escolha o segundo atributo para comparação (diferente do primeiro):\n");
    switch (escolha_atributo1) {
        case 1:
            printf("2 - Velocidade\n");
            printf("3 - Inteligência\n");
            printf("4 - Resistência\n");
            break;
        case 2:
            printf("1 - Força\n");
            printf("3 - Inteligência\n");
            printf("4 - Resistência\n");
            break;
        case 3:
            printf("1 - Força\n");
            printf("2 - Velocidade\n");
            printf("4 - Resistência\n");
            break;
        case 4:
            printf("1 - Força\n");
            printf("2 - Velocidade\n");
            printf("3 - Inteligência\n");
            break;
        default:
            printf("Opção inválida! Por favor, escolha um número válido.\n");
            return 1; // Encerrar o programa com código de erro
    }
    scanf("%d", &escolha_atributo2);

    // Lógica para comparar as duas cartas com base nos dois atributos escolhidos
    // Atributo 1
    switch (escolha_atributo1) {
        case 1:
            printf("\nComparação de cartas (Atributo: Força)\n");
            printf("Carta 1 - %s: %d\n", nomeCarta1, forca1);
            printf("Carta 2 - %s: %d\n", nomeCarta2, forca2);
            if (forca1 > forca2) {
                printf("Carta 1 é a vencedora com maior força!\n");
            } else if (forca2 > forca1) {
                printf("Carta 2 é a vencedora com maior força!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            printf("\nComparação de cartas (Atributo: Velocidade)\n");
            printf("Carta 1 - %s: %d\n", nomeCarta1, velocidade1);
            printf("Carta 2 - %s: %d\n", nomeCarta2, velocidade2);
            if (velocidade1 > velocidade2) {
                printf("Carta 1 é a vencedora com maior velocidade!\n");
            } else if (velocidade2 > velocidade1) {
                printf("Carta 2 é a vencedora com maior velocidade!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
            printf("\nComparação de cartas (Atributo: Inteligência)\n");
            printf("Carta 1 - %s: %d\n", nomeCarta1, inteligencia1);
            printf("Carta 2 - %s: %d\n", nomeCarta2, inteligencia2);
            if (inteligencia1 > inteligencia2) {
                printf("Carta 1 é a vencedora com maior inteligência!\n");
            } else if (inteligencia2 > inteligencia1) {
                printf("Carta 2 é a vencedora com maior inteligência!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 4:
            printf("\nComparação de cartas (Atributo: Resistência)\n");
            printf("Carta 1 - %s: %d\n", nomeCarta1, resistencia1);
            printf("Carta 2 - %s: %d\n", nomeCarta2, resistencia2);
            if (resistencia1 > resistencia2) {
                printf("Carta 1 é a vencedora com maior resistência!\n");
            } else if (resistencia2 > resistencia1) {
                printf("Carta 2 é a vencedora com maior resistência!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Comparação inválida!\n");
            return 1; // Encerrar o programa com código de erro
    }

    // Atributo 2
    switch (escolha_atributo2) {
        case 1:
            printf("\nComparação de cartas (Atributo: Força)\n");
            printf("Carta 1 - %s: %d\n", nomeCarta1, forca1);
            printf("Carta 2 - %s: %d\n", nomeCarta2, forca2);
            if (forca1 > forca2) {
                printf("Carta 1 é a vencedora com maior força!\n");
            } else if (forca2 > forca1) {
                printf("Carta 2 é a vencedora com maior força!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            printf("\nComparação de cartas (Atributo: Velocidade)\n");
            printf("Carta 1 - %s: %d\n", nomeCarta1, velocidade1);
            printf("Carta 2 - %s: %d\n", nomeCarta2, velocidade2);
            if (velocidade1 > velocidade2) {
                printf("Carta 1 é a vencedora com maior velocidade!\n");
            } else if (velocidade2 > velocidade1) {
                printf("Carta 2 é a vencedora com maior velocidade!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
            printf("\nComparação de cartas (Atributo: Inteligência)\n");
            printf("Carta 1 - %s: %d\n", nomeCarta1, inteligencia1);
            printf("Carta 2 - %s: %d\n", nomeCarta2, inteligencia2);
            if (inteligencia1 > inteligencia2) {
                printf("Carta 1 é a vencedora com maior inteligência!\n");
            } else if (inteligencia2 > inteligencia1) {
                printf("Carta 2 é a vencedora com maior inteligência!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 4:
            printf("\nComparação de cartas (Atributo: Resistência)\n");
            printf("Carta 1 - %s: %d\n", nomeCarta1, resistencia1);
            printf("Carta 2 - %s: %d\n", nomeCarta2, resistencia2);
            if (resistencia1 > resistencia2) {
                printf("Carta 1 é a vencedora com maior resistência!\n");
            } else if (resistencia2 > resistencia1) {
                printf("Carta 2 é a vencedora com maior resistência!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Comparação inválida!\n");
            return 1; // Encerrar o programa com código de erro
        
        }
    // Verificar soma dos valores das cartas para determinar o vencedor geral
    somaAtributosCarta1 = forca1 + velocidade1 + inteligencia1 + resistencia1;
    somaAtributosCarta2 = forca2 + velocidade2 + inteligencia2 + resistencia2;
    // Operador ternario
    // 1ª condição: somaAtributosCarta1 > somaAtributosCarta2 (if)
    // 2ª condição: somaAtributosCarta2 > somaAtributosCarta1 (else if)
    // 3ª condição: somaAtributosCarta1 == somaAtributosCarta2 / empate (else)
    (somaAtributosCarta1 > somaAtributosCarta2) ? printf("\nCarta 1 é a vencedora geral com maior soma de atributos!\n") : (somaAtributosCarta2 > somaAtributosCarta1) ? printf("\nCarta 2 é a vencedora geral com maior soma de atributos!\n") : printf("\nEmpate geral! As somas dos atributos são iguais!\n");

    // Exibição clara do resultado
    printf("\nResultado da comparação:\n");
    printf("Carta 1 - %s:\n", nomeCarta1);
    printf("Força da carta 1: %d\n", forca1);
    printf("Velocidade da carta 1: %d\n", velocidade1);
    printf("Inteligência da carta 1: %d\n", inteligencia1);
    printf("Resistência da carta 1: %d\n", resistencia1);
    printf("Soma dos atributos da carta 1: %d\n", somaAtributosCarta1);
    printf("\n");
    printf("Carta 2 - %s:\n", nomeCarta2);
    printf("Força da carta 2: %d\n", forca2);
    printf("Velocidade da carta 2: %d\n", velocidade2);
    printf("Inteligência da carta 2: %d\n", inteligencia2);
    printf("Resistência da carta 2: %d\n", resistencia2);
    printf("Soma dos atributos da carta 2: %d\n", somaAtributosCarta2);
    printf("\n");
    printf("Atributos comparados: %d e %d\n", escolha_atributo1, escolha_atributo2);
    printf("Vencedor geral: \n");
    (somaAtributosCarta1 > somaAtributosCarta2) ? printf("Carta 1 (%s) venceu a rodada!\n", nomeCarta1) : (somaAtributosCarta2 > somaAtributosCarta1) ? printf("Carta 2 (%s) venceu a rodada!\n", nomeCarta2) : printf("Empate geral! Ninguém venceu a rodada!\n");
    printf("\n");
    printf("\nObrigado por jogar o Super Trunfo - Tema: Cartas de Super Heróis!\n");
    printf("Game over!\n");
    return 0; // encerrar programa
}