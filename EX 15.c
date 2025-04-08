#include <stdio.h>

int main() {
    int soma = 0;
    int quantidade = 0;

    for (int i = 15; i <= 100; i++) {
        soma += i;
        quantidade++;
    }

    float media = (float)soma / quantidade;
    printf("Media: %.2f\n", media);

    return 0;
}
