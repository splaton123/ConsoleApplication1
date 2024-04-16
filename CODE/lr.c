#define _CRT_SECURE_NO_WARNINGS
#include "lr.h"
#include <stdio.h>

int otdelenie_slov(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int kolvo_bukv(const char *text) {
    int kolvo_bukv = 0;

    while (*text) {
        if (otdelenie_slov(*text)) {
            kolvo_bukv++;
        }
        text++;
    }

    return kolvo_bukv;
}

double sr_dl_slova(const char *text) {
    int kolvo_slov = 0;
    int dlina = 0;
    int in_word = 0;

    while (*text) {
        if (otdelenie_slov(*text)) {
            if (!in_word) {
                in_word = 1;
                kolvo_slov++;
            }
            dlina++;
        } else {
            in_word = 0;
        }
        text++;
    }

    return (kolvo_slov == 0) ? 0 : (double)dlina / kolvo_slov;
}
