#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float prod, desconto;
    char operador;
    char a = 'a', b = 'b', c = 'c', d = 'd', e = 'e';

    printf("Digite o valor do produto: ");
    scanf("%f", &prod);

    if (prod <= 100) {
        operador = a;
    }
    else if (prod <= 200) {
        operador = b;
    }
    else if (prod <= 300) {
        operador = c;
    }
    else if (prod <= 400) {
        operador = d;
    }
    else {
        operador = e;
    }

    switch (operador) {
        case 'a':
            desconto = prod - (prod * 0.10);
            printf("Valor: %.2f. Com desconto de 10%%: %.2f\n", prod, desconto);
            break;
        case 'b':
            desconto = prod - (prod * 0.20);
            printf("Valor: %.2f. Com desconto de 20%%: %.2f\n", prod, desconto);
            break;
        case 'c':
            desconto = prod - (prod * 0.30);
            printf("Valor: %.2f. Com desconto de 30%%: %.2f\n", prod, desconto);
            break;
        case 'd':
            desconto = prod - (prod * 0.40);
            printf("Valor: %.2f. Com desconto de 40%%: %.2f\n", prod, desconto);
            break;
        case 'e':
            desconto = prod - (prod * 0.50);
            printf("Valor: %.2f. Com desconto de 50%%: %.2f\n", prod, desconto);
            break;
        default:
            printf("Operador inválido!\n");
    }

    return 0;
}
