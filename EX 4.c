#include <stdio.h>


int absoluto(int n) {
    return (n < 0) ? -n : n;
}

int main() {
    int valores[5] = {-8, 5, -4, 10, -2};
    for (int i = 0; i < 5; i++) {
        printf("O valor absoluto de %d é: %d\n", valores[i], absoluto(valores[i]));
    }
   
   
    return 0;
}


