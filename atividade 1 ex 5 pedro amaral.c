#include <stdio.h>  

int main() {
    float salario_atual, percentual_reajuste, novo_salario;

    printf("Informe o salario atual: ");
    scanf("%f", &salario_atual);
    printf("Informe o percentual de reajuste: ");
    scanf("%f", &percentual_reajuste);

    novo_salario = salario_atual + (salario_atual * percentual_reajuste / 100);
    printf("O novo salario é: %.2f\n", novo_salario);
    return 0;
}
