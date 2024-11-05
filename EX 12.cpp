#include <stdio.h>

int main() {
    float saldo, debito, credito, saldoAtual;

    printf("Informe o saldo inicial: ");
    scanf("%f", &saldo);

    printf("Informe o valor do debito: ");
    scanf("%f", &debito);

    printf("Infrome o valor do credito: ");
    scanf("%f", &credito);

    saldoAtual = saldo - debito + credito;

    if (saldoAtual >= 0) {
        printf("Saldo Positivo\n");
    } else {
        printf("Saldo Negativo\n");
    }

    return 0;
}
