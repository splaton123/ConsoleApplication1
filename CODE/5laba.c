#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 10

int module(int n) {
    return (n < 0) ? -n : n;
}

//структура
struct MinMaxStruct
    {
        int Min;
        int Max;
    };
        
int main5(void) {
    int a[N]; // массив из N элементов
    int sum_positive = 0; // сумма положительных элементов
    int sum_negative_m = 0; // сумма модулей отрицательных элементов
    int i;

    // ввод массива
    printf("Input 10 numbers: \n");
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
    
    //вычисление MinMax структуры
    struct MinMaxStruct MinMax;
    MinMax.Min = a[0];
    MinMax.Max = a[0];
    for (i=0; i < N; i++) {
        if (a[i] < MinMax.Min){
        MinMax.Min = a[i];
        }
        if (a[i] > MinMax.Max){
        MinMax.Max = a[i];
        }
    }
    printf("Min: %d\n", MinMax.Min);
    printf("Max: %d\n", MinMax.Max);

    // вычисление суммы положительных элементов и суммы модулей отрицательных элементов
    for (i = 0; i < N; i++) {
        if (a[i] > 0)
            sum_positive += a[i];
        else
            sum_negative_m += module(a[i]);
    }

    // обнуление ( сумма модулей отрицательных меньше суммы положительных элементов )
    if (sum_negative_m < sum_positive) {
        for (i = 0; i < N; i++) {
            if (a[i] < 0)
                a[i] = 0;
        }
    }

    // вывод массива
    for (i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
