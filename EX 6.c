#include <stdio.h>
#include <locale.h>

int main() {
    int valor1, valor2;

    printf("Informe o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Informe o segundo valor: ");
    scanf("%d", &valor2);

    if (valor1 > valor2) {
        printf("O maior valor e: %d\n", valor1);
    } else {
        printf("O maior valor e: %d\n", valor2);
    }

    return 0;
}
