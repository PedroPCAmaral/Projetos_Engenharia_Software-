#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Informe uma string: ");
    
	fgets(str, sizeof(str), stdin);
    
	str[strcspn(str, "\n")] = '\0'; 

    printf("String de tras para frente: ");
    
	for (int i = strlen(str) - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    putchar('\n');

    return 0;
}
