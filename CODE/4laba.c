#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

#define MAXLINE 100000

// Прототип функции для обработки строки
void process_line(char buffer[], char formatted_buffer[]);

// Функция для проверки, является ли символ буквой
int is_alpha(char c) {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; alphabet[i] != '\0'; i++) {
        if (c == alphabet[i]) {
            return 1; // true (буква)
        }
    }
    return 0; // false (не буква)
}

int main4(void) {
    int N;
    printf("Input sentence: ");
    char line[MAXLINE];
    char formatted_line[MAXLINE]; // Увеличиваем размер для учета возможных добавленных символов
    scanf("%d", &N);
    fgets(line, MAXLINE, stdin); // Считываем строку из stdin
    process_line(line, formatted_line);
    printf("Formatted text: %s\n", formatted_line); // Выводим отформатированный текст
    return 0;
}

void process_line(char buffer[], char formatted_buffer[]) {
    char c; // текущий символ
    int letter_count = 0; // счетчик букв в текущем слове
    int i; // позиция текущего символа исходной строки
    int pos = 0; // позиция текущего символа результирующей строки

    // Цикл чтения символов из строки
    for (i = 0; buffer[i] != '\0'; i++) {
        c = buffer[i]; // Взять текущий символ из буфера

        // Если текущий символ - буква, увеличиваем счетчик букв
        if (is_alpha(c)) {
            letter_count++;
        } else {
            // Если текущий символ не буква и программа находится внутри слова, это конец слова
            if (letter_count > 0) {
                // Если количество букв в слове четное, копируем его в результирующую строку
                if (letter_count % 2 == 0) {
                    for (int j = i - letter_count; j < i; j++) {
                        formatted_buffer[pos++] = buffer[j];
                    }
                    // Добавляем пробел после удаленного слова
                    formatted_buffer[pos++] = ' ';
                } else { // Если количество букв в слове нечетное
                    for (int j = i - letter_count; j < i; j++) {
                        formatted_buffer[pos++] = buffer[j];
                    }
                    // Добавляем букву "P" и пробел после нечетного слова
                    formatted_buffer[pos++] = 'P';
                    formatted_buffer[pos++] = ' ';
                }
                // Сбрасываем счетчик букв для следующего слова
                letter_count = 0;
            }
            // Если текущий символ не буква, игнорируем его и не копируем в результирующую строку
        }
        printf("Current position: %d, Current character: %c, Letter count: %d\n", i, c, letter_count); // Отладочный вывод
    }
    // Устанавливаем конец строки
    formatted_buffer[pos] = '\0';
}
