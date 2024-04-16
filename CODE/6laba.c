#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main6() {
    int i, j, ratio;
    const int N = 3;
    const int K = 3;

    printf(" The array has size 3 x 3 :\n ");

    int array[3][3]; // Задайте достаточно большие константные размеры

    // Вводим элементы массива
    for (i = 0; i < N; i++) {
        for (j = 0; j < K; j++) {
            printf("Enter an array element[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Проверяем, являются ли строки геометрической прогрессией
    for (i = 0; i < N; i++) {
        ratio = array[i][1] / array[i][0]; // Вычисляем отношение между соседними элементами

        for (j = 1; j < K; j++) {
            if (array[i][j] / array[i][j - 1] != ratio) {
                printf("The line %d is not a geometric progression\n", i + 1);
                break;
            }
        }
        if (j == K) printf("The line %d is a geometric progression\n", i + 1);
    }

    // Сортировка массива методом пузырька
    for (i = 0; i < N; i++) {
        for (j = 0; j < K - 1; j++) {
            for (int k = 0; k < K - j - 1; k++) {
                if (array[i][k] > array[i][k + 1]) {
                    // Меняем местами элементы, если текущий больше следующего
                    int tmp = array[i][k];
                    array[i][k] = array[i][k + 1];
                    array[i][k + 1] = tmp;
                }
            }
        }
    }

    // Выводим отсортированный массив
    for (i = 0; i < N; i++) {
        for (j = 0; j < K; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
