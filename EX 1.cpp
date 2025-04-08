#include <stdio.h>
#include <locale.h>

int main() {
    int valor1, valor2;
    
	
	setlocale(LC_ALL, "Portuguese");
	
	

    printf("Informe o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Informe o segundo valor: ");
    scanf("%d", &valor2);

    while (valor2 == 0) {
        printf("VALOR INVALIDO! O segundo valor nao pode ser iguala zero. Informe outro valor: ");
        scanf("%d", &valor2);
    }

    int resultado = valor1 / valor2;
    printf("Resultado da divisao: %d\n", resultado);

    return 0;
}
