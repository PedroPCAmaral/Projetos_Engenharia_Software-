#include <stdio.h>
#include <string.h>
#include <ctype.h>

int verifica_senha(const char *senha) {
    if (strlen(senha) < 8 || strlen(senha) > 100) {
        return 0;
    }

    int tem_numero = 0, tem_maiuscula = 0, tem_minuscula = 0;

    
	
	for (int i = 0; senha[i] != '\0'; i++) {
        if (isdigit(senha[i])) {
            tem_numero = 1;
        } else if (isupper(senha[i])) {
            tem_maiuscula = 1;
        } else if (islower(senha[i])) {
            tem_minuscula = 1;
        }
    }

   
    return tem_numero && tem_maiuscula && tem_minuscula;
}


int main() {
    char senha[101];

    
	
	printf("Informe a senha: ");
   
   
    fgets(senha, sizeof(senha), stdin);
    
	
	senha[strcspn(senha, "\n")] = '\0'; 

    if (verifica_senha(senha)) {
        
		printf("Senha valida.\n");
    
	} else {
        
		printf("Senha invalida.\n");
    }

    
	return 0;
}
