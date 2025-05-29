#include <stdio.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float peso, altura, imc;

    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    if (altura <= 0) {
        printf("Altura inv�lida!\n");
        return 1;
    }

    imc = peso / (altura * altura);

    printf("Seu IMC �: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classifica��o: Abaixo do peso.\n");
    }
    else if (imc < 25) {
        printf("Classifica��o: Peso normal.\n");
    }
    else if (imc < 30) {
        printf("Classifica��o: Sobrepeso.\n");
    }
    else {
        printf("Classifica��o: Obesidade.\n");
    }

    return 0;
}
