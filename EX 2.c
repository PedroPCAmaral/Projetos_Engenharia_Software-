#include <stdio.h>
#include <locale.h>


int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int valor1, valor2;
    
    

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    do {
        printf("Digite o segundo valor: ");
        scanf("%d", &valor2);
        

        if (valor2 == 0) {
            printf("VALOR INVALIDO! O segundo valor nao pode ser zero.\n");
        }
        
    } while (valor2 == 0);

    int resultado = valor1 / valor2;
    printf("Resultado da divisao: %d\n", resultado);

    return 0;
}
