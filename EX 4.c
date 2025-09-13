#include <stdio.h>
#include <string.h>
#include <ctype.h>

int eh_palindromo(const char *str) {
    
	int inicio = 0;
    
	int fim = strlen(str) - 1;

    while (inicio < fim) {
        while (inicio < fim && !isalnum(str[inicio])) inicio++;
        while (inicio < fim && !isalnum(str[fim])) fim--;

        if (tolower(str[inicio]) != tolower(str[fim])) {
           
		    return 0;
        }
        inicio++;
        fim--;
    }

    return 1; 
}

int main() {
   
    char str[200];

    printf("Informe uma string: ");
    
	fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    if (eh_palindromo(str)) {
       
	    printf("A string e um palindromo.\n");
    
	} else {
        
		printf("A string nao e um palindromo.\n");
    }

    return 0;
}
