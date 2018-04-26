/* Удаляем все символы в строке, кроме цифровых */

#include <stdio.h>

int main(void)
{
    char line[150];
    int i, j;

    printf("%s", "Введите строку: ");
    fgets(line, sizeof(line), stdin);

    for (i = 0; line[i] != '\0'; ++i) {
        while (!((line[i] >= '0' && line[i] <= '9') || line[i] == '\0')) {
            for (j = i; line[j] != '\0'; ++j) {
                line[j] = line[j + 1];
            }
            line[j] = '\0';
        }
    }

    printf("%s", "Результат: ");
    puts(line);

    return 0;
}
