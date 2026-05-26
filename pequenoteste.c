#include <stdio.h>

int main() {
    char letra;
    printf("Entre com uma letra minúscula: \n");
    scanf("%c", &letra);
    letra = letra + ('A' - 'a'); // converter letra minúscula para maiúscula
    printf("Caractere = %c\n", letra);
    int a=3, b=2, c;
    c = a != b; // operador de comparação de desigualdade
    printf("O resultado da comparação é: %d\n", c);
    printf("Os valores das variáveis são: a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}