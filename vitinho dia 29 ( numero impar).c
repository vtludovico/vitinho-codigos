#include <stdio.h>

int main() {
    int numero, i = 1;

    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    printf("N�meros �mpares de 1 at� %d:\n", numero);

    while (i <= numero) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i++;  // Incrementa para pr�xima itera��o
    }

    printf("\n");

    return 0;
}
