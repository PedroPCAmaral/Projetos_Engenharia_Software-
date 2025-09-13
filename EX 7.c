#include <stdio.h>

int verificarPar(int numero) {
    if (numero % 2 == 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int numero;
    
    
    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);
    
    
    int resultado = verificarPar(numero);
    
    if (resultado == 1) {
        printf("O numero %d é par.\n", numero);
    } else {
        printf("O numero %d é ímpar.\n", numero);
    }
    
    return 0;
}