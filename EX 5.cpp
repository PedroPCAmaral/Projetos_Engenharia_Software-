#include <stdio.h>

int main() {
    float nota1, nota2;

    printf("Digite a primeira nota (0 a 10): ");
    scanf("%f", &nota1);

    while (nota1 < 0 || nota1 > 10) {
        printf("Nota invalida! Informe a primeira nota (0 a 10): ");
        scanf("%f", &nota1);
    }

    printf("Digite a segunda nota (0 a 10): ");
    scanf("%f", &nota2);

    while (nota2 < 0 || nota2 > 10) {
        printf("Nota invalida! Informe a segunda nota (0 a 10): ");
        scanf("%f", &nota2);
    }

    float media = (nota1 + nota2) / 2;
    printf("Media: %.2f\n", media);

    return 0;
}


