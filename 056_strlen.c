/* Определение длины строки */

#include <stdio.h>

int main(void)
{
    char s[1000];
    int i;

    printf("%s", "Введите строку: ");
    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0'; ++i)
        ;

    printf("Длина: %d\n", i);

    return 0;
}
