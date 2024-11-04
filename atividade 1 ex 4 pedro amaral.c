int main() {
    int total_eleitores, votos_brancos, votos_nulos, votos_validos;
    float perc_brancos, perc_nulos, perc_validos;

    printf("informe o numero total de eleitores: ");
    scanf("%d", &total_eleitores);
    printf("informe o numero de votos brancos: ");
    scanf("%d", &votos_brancos);
    printf("informe o numero de votos nulos: ");
    scanf("%d", &votos_nulos);
    printf("informe o numero de votos validos: ");
    scanf("%d", &votos_validos);

    perc_brancos = (votos_brancos / (float)total_eleitores) * 100;
    perc_nulos = (votos_nulos / (float)total_eleitores) * 100;
    perc_validos = (votos_validos / (float)total_eleitores) * 100;

    printf("Percentual de votos brancos: %2.f%%\n",perc_brancos);
    printf("Percentual de votos nulos: %2.f%%\n", perc_nulos);
    printf("Percentual de votos validos: %2.f%%\n", perc_validos);
}