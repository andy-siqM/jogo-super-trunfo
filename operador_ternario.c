#include <stdio.h>;
// estudo prático para operador ternário
int main() {
    int idade = 16;
    char *resultado = (idade >= 18) ? "Maior de idade" : "Menor de idade";
    printf("Resultado é: %s\n", resultado);
    printf("Primeiro caractere: %c\n", resultado[0]);

// Determinação do maior número entre dois usando operador ternário
    int num1 = 30, num2 = 20;
    int maior = (num1 > num2) ? num1 : num2;
    printf("O maior número entre %d e %d é: %d\n", num1, num2, maior);
    return 0;
}