#include <stdio.h>

int main() {
    int valor;
    printf("Informe um valor: ");
    scanf("%d", &valor);

    if (valor > 10) {
        printf("E MAIOR QUE 10!\n");
    } else {
        printf("NAO E MAIOR QUE 10!\n");
    }

    return 0;
}