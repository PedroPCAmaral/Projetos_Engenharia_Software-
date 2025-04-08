#include <stdio.h>
#include <locale.h>

int main() {
    int estoqueAtual, estoqueMaximo, estoqueMinimo, estoqueMedio;
    setlocale(LC_ALL,"Portuguese");

    printf("Informe a quantidade atual em estoque: ");
    scanf("%d", &estoqueAtual);

    printf("Informe a quantidade maxima em estoque: ");
    scanf("%d", &estoqueMaximo);

    printf("Digite a quantidade minima em estoque: ");
    scanf("%d", &estoqueMinimo);

    estoqueMedio = (estoqueMaximo + estoqueMinimo) / 2;

    if (estoqueAtual >= estoqueMedio) {
        printf("Nao efetuar compra\n");
    } else {
        printf("Efetuar compra\n");
    }

    return 0;
}