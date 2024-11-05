#include <stdio.h>

int main() {
    int valor;
    printf("Informe um valor: ");
    scanf("%d", &valor);

    if (valor >= 0) {
        printf("O valor e positivo.\n");
    } else {
        printf("O valor e negativo.\n");
    }

    return 0;
}