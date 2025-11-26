#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero, contadorPar, contadorImpar;
    contadorPar = 0;
    contadorImpar = 0;

    do
    {
        printf("\n Digite um número (presione 0 para sair): ");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            contadorPar++;
        } else {
            contadorImpar++;
        }

    } while (numero != 0);

    printf("A quantidade de números pares é: %i \n", contadorPar);
    printf("A quantidade de números ímpares é: %i \n", contadorImpar);

    return (0);
}
