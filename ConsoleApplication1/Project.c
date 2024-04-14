#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // Добавляем библиотеку для использования функции exit()

// Объявляем функции из всех программ
int main1(void);
int main2(void);
int main3(void);
int main4(void);
int main5(void);
int main6(void);
int main7(void);

int main() {
    int choice;

    while (1) { // Цикл будет выполняться бесконечно
        // Отображаем пользователю меню
        printf("\nSelect a program:\n");
        printf(" 1 program\n");
        printf(" 2 program\n");
        printf(" 3 program\n");
        printf(" 4 program\n");
        printf(" 5 program\n");
        printf(" 6 program\n");
        printf(" 7 program\n");
        printf("Enter 0 to exit.\n");
        printf(" ");
        scanf("%d", &choice);

        // Проверяем, если выбор пользователя равен 0, то завершаем программу
        if (choice == 0) {
            printf("Closing the project.\n");
            break; // Выходим из цикла, завершая программу
        }

        printf("Launching program %d\n", choice);

        // В зависимости от выбора пользователя вызываем соответствующую функцию
        switch (choice) {
        case 1:
            main1();
            break;
        case 2:
            main2();
            break;
        case 3:
            main3();
            break;
        case 4:
            main4();
            break;
        case 5:
            main5();
            break;
        case 6:
            main6();
            break;
        case 7:
            main7();
            break;
        default:
            printf("Invalid choice.\n");
            break;
        }
    }

    return 0;
}
