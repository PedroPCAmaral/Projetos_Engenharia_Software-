#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
    struct Aluno *prox;
} aluno_t;

void printar(aluno_t *aluno) {
    printf("Estudante: %sFaltas: %d\nNota: %.2f\nSituacao: %s\n", aluno->nome,
           aluno->faltas, aluno->nota,
           aluno->faltas < 15 && aluno->nota >= 7 ? "Aprovado" : "Reprovado");
}

aluno_t *criar() {
    aluno_t *aluno = (aluno_t *)malloc(sizeof(aluno_t));
    if (aluno == NULL) {
        printf("Erro ao alocar memoria!\n");
        return NULL;
    }

    printf("Digite o nome do aluno: ");
    fgets(aluno->nome, sizeof(aluno->nome), stdin);
    aluno->nome[strcspn(aluno->nome, "\n")] = '\0'; 

    printf("Digite a quantidade de faltas: ");
    scanf("%d", &aluno->faltas);
    while (getchar() != '\n'); 

    printf("Digite a nota: ");
    scanf("%f", &aluno->nota);
    while (getchar() != '\n'); 

    aluno->prox = NULL;

    return aluno;
}

int main() {
    aluno_t *primeiro_aluno = NULL, *aux = NULL;
    int continuar;
    int aprovados = 0, reprovados = 0;
    aluno_t *melhor_aluno = NULL;
    float melhor_nota = -1.0f;

    
    primeiro_aluno = criar();
    if (primeiro_aluno == NULL) return 1; 

    aux = primeiro_aluno;

    
    do {
        aux->prox = criar();
        if (aux->prox != NULL) {
            aux = aux->prox;
        }
        printf("\nDigite zero para parar: ");
        scanf("%d", &continuar);
        while (getchar() != '\n'); 
    } while (continuar);

    
    aux = primeiro_aluno;
    while (aux != NULL) {
        printar(aux);
        
        
        if (aux->faltas < 15 && aux->nota >= 7) {
            aprovados++;
        } else {
            reprovados++;
        }

    
        if (aux->nota > melhor_nota) {
            melhor_nota = aux->nota;
            melhor_aluno = aux;
        }

        aux = aux->prox;
    }

    
    printf("\nTotal de alunos aprovados: %d\n", aprovados);
    printf("Total de alunos reprovados: %d\n", reprovados);

    if (melhor_aluno != NULL) {
        printf("O aluno com a melhor nota foi: %s com nota %.2f\n", melhor_aluno->nome, melhor_nota);
    }

    
    aux = primeiro_aluno;
    while (aux != NULL) {
        aluno_t *temp = aux;
        aux = aux->prox;
        printf("Limpando: %s\n", temp->nome);
        free(temp);
    }

    return 0;
}
