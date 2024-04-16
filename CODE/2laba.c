#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double CalcSum(int N) {
    double sum = 0;
    for (int n = 1; n <= N; ++n) {
        sum += (double)n / ((n + 1) * (n + 1));
    }
    return sum;
}

int main2(void) {
    int N;
    printf("Vvedite kolichestvo elementov ryada: ");
    scanf("%d", &N);

    double result = CalcSum(N);
    printf("Cumma pervix %d elementov ryada: %f\n", N, result);

    return 0;
}