#include <stdio.h>

int main() {
    float valor1, valor2;
    
    
    printf("Informe o primeiro valor: ");
    scanf("%f", &valor1);
    
    
    do {
        printf("Informe o segundo valor: ");
        scanf("%f", &valor2);
        if (valor2 == 0) {
            printf("VALOR INVALIDO. O segundo valor nao pode ser zero.\n");
        }
    } while (valor2 == 0);
    

    printf("Resultado: %.2f\n", valor1 / valor2);
    
    return 0;
}
