#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;
    int numtotal = 1;

    printf("Digite um número: ");
        scanf("%d", &num);

    while(num > 1){
        numtotal = num * numtotal;
        num--;
        printf("f: %d\n", num);
    }

    printf("Resultado do fatorial: %d\n\n", numtotal);

    return 0;
}
