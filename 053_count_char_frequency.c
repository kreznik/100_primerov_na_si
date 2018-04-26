/* Поиск частоты знаков в строке */

#include <stdio.h>

int main(void)
{
    char str[1000], ch;
    int i, frequency = 0;
    
    printf("%s", "Вветие строку: ");
    fgets(str, sizeof(str), stdin);

    printf("%s", "Введите символ: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++frequency;
    }

    printf("Частота = %d\n", frequency);

    return 0;
}
