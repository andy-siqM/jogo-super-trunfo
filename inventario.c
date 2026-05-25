// Sistema de gerenciamento de inventário
// Incluir comparações entre diferentes produtos, como quantidade em estoque e valor total
// Utilize operadores relacionais sem estruturas de controle (if e while)
// Use variáveis com modificadores de tipo (unsigned e long) para armazenar valores mais precisos

#include <stdio.h>
#include <string.h>

int main(){
    char produtoA[50] = "Produto A"; // armazena o nome do produto A
    char produtoB[50] = "Produto B"; // armazena o nome do produto B

    // Definir valor em estoque dos produtos
    // Usar modificador unsigned para garantir que a quantidade seja sempre positiva
    unsigned int quantidadeA = 1000; // armazena a quantidade em estoque do produto A
    unsigned int quantidadeB = 2000; // armazena a quantidade em estoque do produto B

    // Definir valor unitário de cada um dos produtos
    float valorA = 10.50;
    float valorB = 20.40;

    // Declarar estoque mínimo dos produtos
    // Usar modificador unsigned para garantir que a quantidade do estoque seja sempre positiva
    unsigned int estoque_minimoA = 500; // armazena o estoque mínimo do produto A
    unsigned int estoque_minimoB = 2500; // armazena o estoque mínimo do produto B

    // Calcular o valor total em estoque de cada produto (valor x quantidade)
    double valor_totalA = valorA * quantidadeA;
    double valor_totalB = valorB * quantidadeB;

    // Exibir as informações dos produtos
    // Produto A
    printf("Produto: %s\n", produtoA);
    printf("Quantidade em estoque: %u\n", quantidadeA);
    printf("Valor unitário: R$ %.2f\n", valorA);
    printf("Valor total em estoque: R$ %.2f\n", valor_totalA);
    printf("Estoque mínimo: %u\n", estoque_minimoA);
    printf("\n");
}