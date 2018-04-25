/* Является ли число четным */

#include <stdio.h>

int main (void) {
    int number;

    printf("Введите целое число: ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("%d - четное\n", number);
    else
        printf("%d - нечетное\n", number);

    return 0;
}
