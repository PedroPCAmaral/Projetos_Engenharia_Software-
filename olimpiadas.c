#include <stdio.h>
#include <stdlib.h>
#include <string.h>  

typedef struct {
    char nome[100];
    char modalidade[50];
    float nota;  
} Atleta;

int main() {
    int n;

    printf("Quantos atletas voce deseja cadastrar? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Número de atletas inválido.\n");
        return 1;  
    }

    Atleta* atletas = (Atleta*)malloc(n * sizeof(Atleta));
    if (atletas == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;  
    }

    getchar();  

    for (int i = 0; i < n; i++) {
        printf("\nAtleta #%d\n", i + 1);
        
        
        printf("Nome: ");
        fgets(atletas[i].nome, sizeof(atletas[i].nome), stdin);
        
        atletas[i].nome[strcspn(atletas[i].nome, "\n")] = '\0';

        
        printf("Modalidade: ");
        fgets(atletas[i].modalidade, sizeof(atletas[i].modalidade), stdin);
        
        atletas[i].modalidade[strcspn(atletas[i].modalidade, "\n")] = '\0';

        
        printf("Nota: ");
        if (scanf("%f", &atletas[i].nota) != 1) {
            printf("Erro ao ler a nota do atleta #%d.\n", i + 1);
            free(atletas); 
            return 1;
        }

        getchar();
    }

    
    printf("\n--- Dados dos Atletas ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nAtleta #%d\n", i + 1);
        printf("Nome: %s\n", atletas[i].nome);
        printf("Modalidade: %s\n", atletas[i].modalidade);
        printf("Nota: %.2f\n", atletas[i].nota);
    }

    free(atletas);  

    return 0;
}
