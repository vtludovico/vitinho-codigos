#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float preco, valor, troco;
    int x;

    printf("Digite o valor da compra: ");
    scanf("%f", &preco);

    printf("Digite o valor pago: ");
    scanf("%f", &valor);

    troco = valor - preco;

    printf("Troco: %.2f\n", troco);

    if (troco >= 100) {
        x = troco / 100;
        printf("%dx100\n", x);
        troco = troco - x * 100;
    }

    if (troco >= 50) {
        x = troco / 50;
        printf("%dx50\n", x);
        troco = troco - x * 50;
    }

    if (troco >= 20) {
        x = troco / 20;
        printf("%dx20\n", x);
        troco = troco - x * 20;
    }

    if (troco >= 10) {
        x = troco / 10;
        printf("%dx10\n", x);
        troco = troco - x * 10;
    }

    if (troco >= 5) {
        x = troco / 5;
        printf("%dx5\n", x);
        troco = troco - x * 5;
    }

    if (troco >= 1) {
        x = troco / 1;
        printf("%dx1\n", x);
        troco = troco - x * 1;
    }

    if (troco >= 0.50) {
        x = troco / 0.50;
        printf("%dx0.50\n", x);
        troco = troco - x * 0.50;
    }

    return 0;
}
