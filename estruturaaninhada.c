// Estrutura de if-else com decisão aninhada (if dentro do outro)
// Verificação de idade e renda
// Um programa que verifica se uma pessoa está qualificada para um desconto especial com base na idade e na renda mensal
// A pessoa deve ter mais de 60 anos ou menos de 18 anos e ter uma renda mensal abaixo de 2000.

#include <stdio.h>
int main() {
    int idade;
    float renda_mensal;

    // Solicitar a idade do usuário
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    // Solicitar a renda mensal do usuário
    printf("Digite sua renda mensal em reais: \n");
    scanf("%f", &renda_mensal);

    // Verificar se a pessoa está qualificada para o desconto especial
    // As duas condições de if devem ser atendidas ao mesmo tempo
    if (idade > 60 || idade < 18) {
        if(renda_mensal < 2000.00) {
            printf("Parabéns! Você está qualificado(a) para o desconto especial!\n");  
        } else {
            printf("Desculpe, você não está qualificado(a) para o desconto especial devido à sua renda mensal.\n");
        }
    } else {
        printf("Desculpe, você não está qualificado(a) para o desconto especial devido à sua idade.\n");
    }
    return 0;
}