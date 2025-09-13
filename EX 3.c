 #include <stdio.h>
 
 

int potencia(int base, int expoente) {
    int resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    int base = 3, expoente = 4;
    printf("O resultado de %d^%d é:%d\n", base, expoente, potencia(base, expoente));
    
	
	return 0;
}

