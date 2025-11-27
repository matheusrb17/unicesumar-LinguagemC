#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    float altura, pesoIdeal;
    char sexo;

    printf("Informe seu sexo (M/F): ");
    scanf(" %c", &sexo);
    printf("Informe sua altura (em metros e com vírgula): ");
    scanf("%f", &altura);

    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
        printf("Seu peso ideal como homem é: %f.2", pesoIdeal);
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal como mulher é: %.2f", pesoIdeal);
    } else {
        printf("Opção inválida.");
    }

    return (0);
}