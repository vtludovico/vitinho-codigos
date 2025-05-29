#include <stdio.h>
#include <stdlib.h>

int main() {

    int numUsuario;
    int contador = 0;

    while(numUsuario != 24) {
        printf("Digite um numero de 0 a 100: ");
        scanf("%d", &numUsuario);

        if(numUsuario > 24)
            printf("un numero menor que esse!\n");
        else if(numUsuario < 24)
            printf("um numero maior que esse!\n");

        contador++;
    }

    printf("\Parabens, voce acertou o numero que e 24!\n");
    printf("Voce tentou %d vez(es)\n", contador);

    return 0;
}
