#include <stdio.h>

int main() {
    int quantidade;
    float valor_total = 0.0;

    printf("Digite a quantidade de mercadorias em estoque: ");
    scanf("%d", &quantidade);

    for (int i = 1; i <= quantidade; i++) {
        float valor;
        printf("Digite o valor da mercadoria %d: ", i);
        scanf("%f", &valor);
        valor_total += valor;
    }

    float media = valor_total / quantidade;
     printf("Valor total: %.2f\nMédia dos valores: %.2f\n", valor_total, media);

    return 0;
}
