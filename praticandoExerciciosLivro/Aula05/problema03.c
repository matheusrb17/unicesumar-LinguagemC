#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int idade;

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    if (idade < 16) {
        printf("Não eleitor.");
    } else if (idade < 18 || idade > 65) {
        printf("Eleitor facultativo.");
    } else {
        printf("Eleitor obrigatório.");
    }

    return (0);
}