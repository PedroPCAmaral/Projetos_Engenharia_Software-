#include <stdio.h>

int main() {
    int horaInicio, minutoInicio, horaFim, minutoFim;
    int duracaoHoras, duracaoMinutos;

    printf("Informe a hora de inicio (24h): ");
    scanf("%d", &horaInicio);

    printf("Informe o minuto de inicio:\n ");
    scanf("%d", &minutoInicio);

    printf("Informe a hora de termino (24h): ");
    scanf("%d", &horaFim);

    printf("Informe o minuto de termino: ");
    scanf("%d", &minutoFim);

    duracaoHoras = horaFim - horaInicio;
    duracaoMinutos = minutoFim - minutoInicio;

    if (duracaoMinutos < 0) {
        duracaoMinutos += 60;
        duracaoHoras--;
    }

    if (duracaoHoras < 0) {
        duracaoHoras += 24;
    }

    printf("A duracao do jogo e: %d horas e %d minutos.\n", duracaoHoras, duracaoMinutos);

    return 0;
}
