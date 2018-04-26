/* Сортировка строк в лексикографическом порядке */

#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, j;
    char str[10][50];
    char temp[50];

    printf("%s\n", "Введите 10 слов:");
    for (i = 0; i < 10; ++i)
        scanf("%s[^\n]",str[i]);

    for (i = 0; i < 9; ++i) {
        for (j = i + 1; j < 10; ++j) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("\n%s\n", "В лексикографическом порядке:");
    for (i = 0; i < 10; ++i) {
        puts(str[i]);
    }

    return 0;
}
