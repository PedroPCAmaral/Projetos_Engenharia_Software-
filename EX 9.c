#include <stdio.h>

int main() {
    float horasTrabalhadas, salarioHora, salarioTotal;

    printf("Informe o numero de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    printf("Informe o valor do salario por hora: ");
    scanf("%f", &salarioHora);

    if (horasTrabalhadas > 40) {
        salarioTotal = (40 * salarioHora) + ((horasTrabalhadas - 40) * salarioHora * 1.5);
    } else {
        salarioTotal = horasTrabalhadas * salarioHora;
    }

    printf("O salario total e: R$%.2f\n", salarioTotal);

    return 0;
}
