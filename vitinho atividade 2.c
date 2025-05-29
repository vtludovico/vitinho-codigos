#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operacao;

    printf("Digite o primeiro n�mero: ");
    scanf("%f", &num1);

    printf("Digite a opera��o (+, -, *, /): ");
    scanf(" %c", &operacao);  // espa�o antes do %c ignora caracteres anteriores como '\n'

    printf("Digite o segundo n�mero: ");
    scanf("%f", &num2);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: divis�o por zero!\n");
            }
            break;
        default:
            printf("Opera��o inv�lida.\n");
    }

    return 0;
}
