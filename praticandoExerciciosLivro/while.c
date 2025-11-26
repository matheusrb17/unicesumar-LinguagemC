#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    char nome[30];
    int i;

    printf("Digite o seu nome: \n");
    scanf("%s", &nome);

    i = 0;

    while (i != 10)
    {
        printf("\n Eis o seu nomezinho: %s", nome);
        i++;
    }
    return (0);
}