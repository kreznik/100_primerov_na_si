/* Конкатенация двух строк без функции strcat */

#include <stdio.h>

int main(void)
{
    char s1[200];
    char s2[100];
    int i, j;

    printf("Первая строка: ");
    fgets(s1, 100, stdin);

    printf("Вторая строка: ");
    fgets(s2, 100, stdin);

    // вычисляем длину s1 и помещаем ее в i
    for (i = 0; s1[i] != '\0'; ++i)
        ;

    --i; // удаляем '\0' из s1

    for (j = 0; s2[j] != '\0'; ++j, ++i)
        s1[i] = s2[j];
    s1[i] = '\0';

    printf("Результат: %s", s1);

    return 0;
}
