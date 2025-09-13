#include <stdio.h>

int main() {
    char mais_mercadorias;
    float valor_total = 0.0;
    int quantidade = 0;

    do {
        float valor;
        printf("Digite o valor da mercadoria: ");
        scanf("%f", &valor);
        valor_total += valor;
        quantidade++;

        printf("Deseja adicionar mais mercadorias? (S/N): ");
        scanf(" %c", &mais_mercadorias);

    } while (mais_mercadorias == 'S' || mais_mercadorias == 's');

    float media = valor_total / quantidade;
    printf("Valor total: %.2f\nMédia dos valores: %.2f\n", valor_total, media);

    return 0;
}
