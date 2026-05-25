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
    printf("Quantidade em estoque: %u unidades\n", quantidadeA);
    printf("Valor unitário: R$ %.2f reais\n", valorA);
    printf("Valor total em estoque: R$ %.2f reais\n", valor_totalA);
    printf("Estoque mínimo: %u unidades\n", estoque_minimoA);
    printf("\n");

    // Produto B
    printf("Produto: %s\n", produtoB);
    printf("Quantidade em estoque: %u unidades\n", quantidadeB);
    printf("Valor unitário: R$ %.2f reais\n", valorB);
    printf("Valor total em estoque: R$ %.2f reais\n", valor_totalB);
    printf("Estoque mínimo: %u unidades\n", estoque_minimoB);
    printf("\n");

    // Comparações com valores mínimos de estoque usando operadores relacionais
    int resultadoA, resultadoB; // variáveis para armazenar os resultados das comparações entre o estoque atual e o estoque mínimo
    resultadoA = (quantidadeA > estoque_minimoA); // comparação entre a quantidade atual de A e seu estoque mínimo
    resultadoB = (quantidadeB > estoque_minimoB); // comparação entre a quantidade atual de B e seu estoque mínimo
    
    printf("Comparação com estoque mínimo:\n");
    printf("O estoque do %s está acima do mínimo (%u)? %d\n", produtoA, estoque_minimoA, resultadoA);
    printf("O estoque do %s está acima do mínimo (%u)? %d\n", produtoB, estoque_minimoB, resultadoB);

    // Comparação entre os valores totais dos produtos usando operadores relacionais
    int comparacao_valor_total; // variável para armazenar o resultado da comparação entre os valores totais dos produtos A e B
    comparacao_valor_total = (valor_totalA > valor_totalB); // operação relacional
    printf("\nComparação entre os valores totais dos produtos:\n");
    printf("O valor total em estoque do %s é maior que o do %s? %d\n", produtoA, produtoB, comparacao_valor_total);
     
    printf("\nComparação entre os valores totais dos produtos (usando os cálculos dentro do printf):\n");
    printf("O valor total em estoque de A é maior que o de B? %d\n", (valor_totalA > valor_totalB));
    printf("O valor total em estoque de A (R$ %.2f) é maior que o valor de B (R$ %.2f)? %d\n", (quantidadeA * valorA), (quantidadeB * valorB), (quantidadeA * valorA > quantidadeB * valorB));
    return 0;
}