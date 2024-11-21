#include <stdio.h>

int main() {
    char nome[50];
    char sexo;
    float altura, pesoIdeal;

    printf("Informe o nome: ");
    scanf("%s", nome);

    printf("Informe a altura: ");
    scanf("%f", &altura);

    printf("Informe o sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
    } else {
        printf("Sexo invalido\n");
        return 1;
    }

    printf("%s, seu peso ideal é:%.2f kg\n", nome, pesoIdeal);

    return 0;
}
