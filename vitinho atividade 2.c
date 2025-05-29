#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operacao;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operacao);  // espaço antes do %c ignora caracteres anteriores como '\n'

    printf("Digite o segundo número: ");
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
                printf("Erro: divisão por zero!\n");
            }
            break;
        default:
            printf("Operação inválida.\n");
    }

    return 0;
}
