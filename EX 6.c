#include <stdio.h>
#include <math.h>


float mediaHarmonica(float a, float b, float c) {
    if (a == 0 || b == 0 || c == 0) {
        printf("Notas nao podem ser zero para calcular a media harmonica.\n");
        return -1; 
    }
    return 3.0f / ((1.0f / a) + (1.0f / b) + (1.0f / c));
}


float calcularMedia(float nota1, float nota2, float nota3, char letra) {
    float media;
    switch (letra) {
        case 'A':
            
            media = (nota1 + nota2 + nota3) / 3.0f;
            break;
        
        case 'P':
            
            media = (nota1 * 5 + nota2 * 3 + nota3 * 2) / (5 + 3 + 2);
            break;
        
        case 'H':
            
            media = mediaHarmonica(nota1, nota2, nota3);
            if (media == -1) {
                return -1; 
            }
            break;
        
        default:
            printf("Letra invalida. Use 'A' para media aritmetica, 'P' para media ponderada ou 'H' para media harmonica.\n");
            return -1; 
    }
    return media;
}

int main() {
    float nota1, nota2, nota3;
    char letra;
    
    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a letra (A para media aritmetica, P para media ponderada, H para media harmonica): ");
    scanf(" %c", &letra);
    
    
    float resultado = calcularMedia(nota1, nota2, nota3, letra);
    
    if (resultado != -1) {
        printf("O resultado da media e: %.2f\n", resultado);
    }
    
    return 0;
}