#include <stdio.h>
#include <string.h>

int tamanho_sem_strlen(const char *str) {
    
	int count = 0;
    
	while (str[count] != '\0') {
        count++;
    }
    
	return count;
}

int main() {
    
	char str[100];

    printf("Informe uma string: ");
    
	fgets(str, sizeof(str), stdin);
    
	str[strcspn(str, "\n")] = '\0'; 

    int tamanho1 = strlen(str);
   
    int tamanho2 = tamanho_sem_strlen(str);

    printf("Tamanho usando strlen: %d\n", tamanho1);
    
	printf("Tamanho sem usar strlen: %d\n", tamanho2);
    
	printf("Os tamanhos sao %s.\n", (tamanho1 == tamanho2) ? "iguais" : "diferentes");

    return 0;
}
