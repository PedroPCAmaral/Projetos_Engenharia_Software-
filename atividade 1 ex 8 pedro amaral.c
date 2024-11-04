#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;
    printf("A temperatura em Celsius e: %.2f\n", celsius);
    return 0;
}
