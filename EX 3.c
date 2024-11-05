#include <stdio.h>

int main() {
    int quantidade;
    float preco;

    printf("Informe o numero de macas compradas: ");
    scanf("%d", &quantidade);

    if (quantidade < 12) {
        preco = 1.30;
    } else {
        preco = 1.00;
    }

    float custo_total = quantidade * preco;
    printf("O custo total e: R$%.2f\n", custo_total);

    return 0;
}
