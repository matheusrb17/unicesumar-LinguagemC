#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    float soma, media;
    int nota, codigo, i;

    printf("Informe o número de notas existentes: ");
    scanf("%i", &nota);

    do {
        printf("Digite o código do aluno (0 para sair): ");
        scanf("%i", &codigo);

        for (i = 1; i <= nota, i++); {
            printf("Digite a %i° nota: ", i);
            scanf("%f", &soma);
            soma = soma + nota;
        }

    } while (codigo != 0); 

    return (0);
}