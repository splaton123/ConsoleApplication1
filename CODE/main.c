
#define _CRT_SECURE_NO_WARNINGS
#include "lr.h"
#include <stdio.h>

int main3() {
    int N;
    printf("Input sentence: ");
    scanf("%d", &N);
    char input[100];
    printf("Vvedite predlozenie:\n");
    scanf("%99[^\n]", input); // Учитываем ограничение длины ввода

    double avg_dlina = sr_dl_slova(input);
    int bukvi = kolvo_bukv(input);
    printf("Avg dlina: %.2f\n", avg_dlina);
    printf("Kolvo bukv: %d\n", bukvi);
    return 0;
}