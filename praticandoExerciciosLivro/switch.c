#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, resultado;
    int op;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Escolha a opção: \n 1 - Soma \n 2 - Subtração \n 3 - Multiplicação \n 4 - Divisão \n ");
    scanf("%i", &op);

    switch (op)
    {
    case 1:
        resultado = num1 + num2;
        printf("A soma é %f \n", resultado);
        break;

    case 2:
        resultado = num1 - num2;
        printf("A subtração é %.3f \n", resultado);
    
    default:
        printf("Opção inválida. \n");
        break;
    }
}