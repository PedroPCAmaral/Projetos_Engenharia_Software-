int main() {
    float nota1, nota2, nota3, media_final;

    printf("Informe a primeira nota (peso 2): ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota (peso 3): ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota (peso 5): ");
    scanf("%f", &nota3);

    media_final = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;
    printf("A media final e: %.2f\n", media_final);
    return 0;
}