#include <stdio.h>

int main() {
    int N;

    printf("Digite um numero entre 1 e 10 para ver sua tabuada: ");
    scanf("%d", &N);

    while (N < 1 || N > 10) {
        printf("Numero invalido! Informe um numero entre 1 e 10: ");
        scanf("%d", &N);
    }

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}
