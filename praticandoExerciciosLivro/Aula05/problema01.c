#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Informe um número para saber se ele é divisível por 5: ");
    scanf("%d", &num);

    if (num % 5 ==0) {
        printf("O número %d é divisível por 5.\n", num);
    } else {
        printf("O número %d não é divisível por 5.\n", num);
    }

    return 0;
}