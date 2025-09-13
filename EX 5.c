 #include <stdio.h>


int somaDivisores(int n) {
    int soma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int valores[5] = {4, 8, 12, 24, 6};
    for (int i = 0; i < 5; i++) {
        printf("A soma dos divisores de %d é: %d\n", valores[i], somaDivisores(valores[i]));
    }
    return 0;
}
