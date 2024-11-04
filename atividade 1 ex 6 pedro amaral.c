#include <stdio.h>

int main() {
    float custo_fabrica, custo_final, percentual_distribuidor = 28, impostos = 45;

    printf("Informe o custo de fabrica: ");
    scanf("%f", &custo_fabrica);

    custo_final = custo_fabrica + (custo_fabrica * percentual_distribuidor / 100) + (custo_fabrica * impostos / 100);
    printf("O custo final ao consumidor é: %.2f\n", custo_final);
    return 0;
}
