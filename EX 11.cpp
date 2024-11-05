#include <stdio.h>

int main() {
    float salarioBase, vendas;
    float comissao = 0.03, salarioFinal;

    printf("Informe o salario base: ");
    scanf("%f", &salarioBase);

    printf("Informe o valor total das vendas: ");
    scanf("%f", &vendas);

    if (vendas > 1500.0) {
        salarioFinal = salarioBase + (comissao * 1500) + ((vendas - 1500) * 0.05);
    } else {
        salarioFinal = salarioBase + (comissao * vendas);
    }

    printf("O salario final e: R$%.2f\n", salarioFinal);

    return 0;
}
