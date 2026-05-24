// Programa que calcula a média de três notas inseridas pelo usuário

#include <stdio.h>
#include <string.h>

int main() {
    float nota1, nota2, nota3;
    float media_nota;
    
    // solicitar dados ao usuário
    printf("\nVamos calcular a sua nota média no semestre!\n");
    printf("Informe a sua primeira nota: \n");
    scanf("%f", &nota1);
    printf("Informe a sua segunda nota: \n");
    scanf("%f", &nota2);
    printf("Informe a sua terceira nota: \n");
    scanf("%f", &nota3);

    // calcular média
    media_nota = (nota1 + nota2 + nota3) / 3;
    // Saída 
    printf("A sua média é: %.2f\n", media_nota);
    printf("\nCálculo realizado com sucesso!\n");
    return 0; // Encerrar programa
}