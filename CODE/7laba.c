#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fromHEXtoBIN(long a);
int isPalindrome(long a, int len);

int main7()     
{
    long a = 0;
    printf("Input Hex number: ");
    scanf("%lx", &a); // Заменим %x на %lx для считывания в формате long
    fromHEXtoBIN(a);
    return 0;
}

void fromHEXtoBIN(long a)
{ 
    long tmp = a;
    int N;
    if (a == 0)
        N = 1;
    else
    {
        N = 0;
        while (tmp != 0)
        {
            N++;
            tmp = tmp / 16;
        }
    }
    
    for (int i = N * 4 - 1; i >= 0; i--)
    {
        int digit = (a >> i) & 1; // Получаем i-тый бит числа
        printf("%d", digit);
        if (i % 4 == 0) // Добавим пробел после каждых 4 двоичных символов
            printf(" ");
    }
    printf("\n");

    // Проверка на палиндром
    int len = N * 4;
    if (isPalindrome(a, len)) {
        printf("Simmetrical\n");
    } else {
        printf("Not simmetrical.\n");
    }
}

int isPalindrome(long a, int len)
{
    for (int i = 0; i < len / 2; i++) {
        int leftBit = (a >> i) & 1; // Получаем бит с левой стороны
        int rightBit = (a >> (len - i - 1)) & 1; // Получаем бит с правой стороны

        if (leftBit != rightBit) {
            return 0; // Не является палиндромом
        }
    }
    return 1; // Является палиндромом
}
