#include <stdio.h>

int main() {
    int N;

    printf("Digite o numero de linhas para o triangulo: ");
    scanf("%d", &N);

    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
