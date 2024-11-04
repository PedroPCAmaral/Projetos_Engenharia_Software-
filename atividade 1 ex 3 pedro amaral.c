#include <stdio.h>

int main() {
    int anos, meses, dias, total_dias;
    printf("informe sua idade em anos, meses e dias:\n");
    printf("anos: ");
    scanf("%d", &anos);
    printf("meses: ");
    scanf("%d", &meses);
    printf("dias: ");
    scanf("%d", &dias);

    total_dias = (anos * 365) + (meses * 30) + dias;
    printf("sua idade em dias e: %d\n", total_dias);

	return 0;
}