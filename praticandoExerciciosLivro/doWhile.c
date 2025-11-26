#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[30];
    int i;

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    i = 1;

    do
    {
        printf("\n %d - %s ", i, nome);
        i++;
    } while (i != 11);    
}
