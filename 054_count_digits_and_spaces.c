/* Программа для подсчета количества цифр и пробелов */

#include <stdio.h>

int main(void)
{
    char line[150];
    int i, total, digits, spaces;
    
    total = digits = spaces = 0;

    printf("%s", "Введите строку: ");
    scanf("%[^\n]", line);

    for (i = 0; line[i] != '\0'; ++i) {
        if (line[i] >= '0' && line[i] <= '9')
            ++digits;
        else if (line[i] == ' ')
            ++spaces;
        ++total;
    }

    printf("Всего символов: %d\n", total);
    printf("Цифр: %d\n", digits);
    printf("Пробелов: %d\n", spaces);

    return 0;
}
