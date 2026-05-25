// Programa para treinar conteúdos do tema 3 da cadeira
// Comparação entre números usando a estrutura composta da condição if-else
#include <stdio.h>
#include <string.h>

// Verificação de segurança de um armazém, observando atributos de temperatura, umidade e estoque de produtos
int main(){
    float temperatura, umidade; // armazena valores com casas decimais
    unsigned int estoque, estoqueMinimo; // valores armazenados devem ser inteiros positivos
    estoqueMinimo = 1000; // valor mínimo de estoque para o armazém

    // Solicita ao usuário as condições do armazém (entrada de dados)
    printf("Digite a temperatura do armazém (em graus Celsius): \n");
    scanf("%f", &temperatura);
    printf("Digite a umidade do armazém (em porcentagem): \n");
    scanf("%f", &umidade);
    printf("Digite a quantidade de estoque no armazém: \n");
    scanf("%u", &estoque);

    // Verifica se as condições estão dentro dos limites seguros
    // Bloco que verifica a temperatura
    if (temperatura > 30)  {
        printf("A temperatura do armazém está alta! Resfrie o espaço.\n");
    }
    else if (temperatura < 10) {
        printf("A temperatura do armazém está baixa! Aqueça o espaço.\n");
    } else {
        printf("A temperatura do armazém está dentro do limite seguro.\n");
    }

    // Bloco que verifica a umidade
    if (umidade > 50) {
        printf("A umidade do armazém está elevada! Ventile o espaço.\n");
    }
    else if (umidade < 20) {
        printf("A umidade do armazém está baixa! Use um umidificador.\n");
    } else {
        printf("A umidade do armazém está dentro do limite seguro.\n");
    }

    // Bloco que verifica quantidade de produtos no estoque
    if (estoque > estoqueMinimo) {
        printf("O estoque do armazém está dentro do limite seguro.\n");  
    } else {
        printf("O estoque do armazém está abaixo do minímo! Considere reabastecer o estoque imediatamente.\n");
    }
    return 0;
}