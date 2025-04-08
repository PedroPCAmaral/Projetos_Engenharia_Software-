#include <stdio.h>

int main() {
    int valor1, valor2;

    printf("Informe o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Informe o segundo valor: ");
    scanf("%d", &valor2);

    if (valor1 > valor2) {
        printf("%d, %d\n", valor2, valor1);
    } else {
        printf("%d, %d\n", valor1, valor2);
    }

    return 0;
}
