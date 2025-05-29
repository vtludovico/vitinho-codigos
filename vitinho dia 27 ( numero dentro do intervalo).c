#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero >= 1 && numero <= 20) {
        printf("O numero esta dentro do intervalo de 1 a 20.\n");
    } else {
        printf("O numero NAO esta dentro do intervalo de 1 a 20.\n");
    }

    return 0;
}
