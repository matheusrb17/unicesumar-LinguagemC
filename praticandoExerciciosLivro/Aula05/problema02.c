#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    char nome[30];
    int idade;

    printf("Informe seu nome: ");
    fgets(nome, 30, stdin);
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    printf("\n");

    printf("Nome: %s", nome);
    printf("Idade: %d \n", idade);

    if (idade <= 18) {
        printf("Até 18 anos, seu plano de saúde custa: R$50. \n");
        printf("\n");
    } else if (idade <= 29) {
        printf("De 19 a 29 anos, seu plano de saúde custa: R$70. \n");
        printf("\n");
    } else if (idade <= 45) {
        printf("De 30 a 45 anos, seu plano de saúde custa: R$90. \n");
        printf("\n");
    } else {
        printf("Acima de 65 anos, seu plano de saúde custa: R$150. \n");
        printf("\n");
    }

    return (0);
}