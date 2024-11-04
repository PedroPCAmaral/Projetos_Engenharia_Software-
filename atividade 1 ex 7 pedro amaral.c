int main() {
    int carros_vendidos;
    float salario_fixo, comissao_fixa, valor_vendas, salario_final;

    printf("Informe o salario fixo: ");
    scanf("%f", &salario_fixo);
    printf("Informe a comissao fixa por carro vendido: ");
    scanf("%f", &comissao_fixa);
    printf("Informe o numero de carros vendidos: ");
    scanf("%d", &carros_vendidos);
    printf("Informe o valor total das vendas: ");
    scanf("%f", &valor_vendas);

    salario_final = salario_fixo + (comissao_fixa * carros_vendidos) + (0.05 * valor_vendas);
    printf("O salario final do vendedor e: %.2f\n", salario_final);
    return 0;
}
