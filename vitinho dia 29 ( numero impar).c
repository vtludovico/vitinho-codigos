#include <stdio.h>

int main() {
    int numero, i = 1;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("Números ímpares de 1 até %d:\n", numero);

    while (i <= numero) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i++;  // Incrementa para próxima iteração
    }

    printf("\n");

    return 0;
}
