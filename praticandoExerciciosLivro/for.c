#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL, "Portuguese");

    char nome[30];
    int i;

    printf("Digite o seu nome: ");
    scanf("%s", &nome);

    for (i = 1; i <= 10; i++)
    {
        printf("Seu nome está aqui: %s \n", nome);
    }

    return (0);
}
