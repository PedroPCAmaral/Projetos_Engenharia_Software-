#include <stdio.h>


int verificarNumero(int numero) {
    if (numero > 0) {
        return 1;   
    } else if (numero < 0) {
        return -1;  
    } else {
        return 0;   
    }
}

int main() {
    int numero;
    
    
    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);
    

    int resultado = verificarNumero(numero);
    
    if (resultado == 1) {
        printf("O numero %d é positivo.\n", numero);
    } else if (resultado == -1) {
        printf("O numero %d é negativo.\n", numero);
    } else {
        printf("O numero %d é zero.\n", numero);
    }
    
    return 0;
}