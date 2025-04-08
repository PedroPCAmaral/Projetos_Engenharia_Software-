#include <stdio.h>

int main() {
    int N;

    do {
        printf("Digite um valor positivo para N: ");
        scanf("%d", &N);
    } while (N <= 0);

    for (int i = 1; i <= N; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
