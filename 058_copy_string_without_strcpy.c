/* Копирование строки без функции strcpy */

#include <stdio.h>

int main(void)
{
    char s1[100];
    char s2[100];
    int i;

    printf("%s", "Введите строку s1: ");
    fgets(s1, sizeof(s1), stdin);

    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }
    s2[i] = '\0';

    printf("Строка s2: %s", s2);

    return 0;
}
