#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// Объявление лаб
void run1laba();
void run2laba();
void run3laba();
void run4laba();
void run5laba();
void run6laba();
void run7laba();

// Функция проверки ввода на соответствие цифре от 1 до 8
int valid(char c) {
    return (c >= '0' && c <= '8');
}

int main() {
    char choice;

    do {
        // Меню выбора
        printf("Select a program:\n");
        printf(" 1 program\n");
        printf(" 2 program\n");
        printf(" 3 program\n");
        printf(" 4 program\n");
        printf(" 5 program\n");
        printf(" 6 program\n");
        printf(" 7 program\n");
        printf("For Close the project type 0\n");

        // Получаем ввод пользователя
        scanf(" %c", &choice);

        if (valid(choice)) {
            switch (choice) {
            case '1':
                run1laba();
                break;
            case '2':
                run2laba();
                break;
            case '3':
                run3laba();
                break;
            case '4':
                run4laba();
                break;
            case '5':
                run5laba();
                break;
            case '6':
                run6laba();
                break;
            case '7':
                run7laba();
                break;
            case '0':
                printf("Closing the project.\n");
                break;
            default:
                printf("Program %c in progress,,,.\n", choice);
                break;
            }
        }
        else {
            printf("Invalid choice. Please enter a number between 1 and 8, or 0 for closing the project.\n");
        }
    } while (choice != '0');

    return 0;
}

// Запуск программы 1
void run1laba() {
    printf("Launching program 1 ...\n");
    system("1laba.exe");
}

// Запуск программы 2
void run2laba() {
    printf("Launching program 2 ...\n");
    system("2laba.exe");
}

// Запуск программы 3
void run3laba() {
    printf("Launching program 3 ...\n");
    system("3laba.exe");
}

// Запуск программы 4
void run4laba() {
    printf("Launching program 4 ...\n");
    system("4laba.exe");
}

// Запуск программы 5
void run5laba() {
    printf("Launching program 5 ...\n");
    system("5laba.exe");
}

// Запуск программы 6
void run6laba() {
    printf("Launching program 6 ...\n");
    system("6laba.exe");
}

// Запуск программы 7
void run7laba() {
    printf("Launching program 7 ...\n");
    system("7laba.exe");
}
