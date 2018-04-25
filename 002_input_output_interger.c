/* Выводим целое число, введенное пользователем */

#include <stdio.h>

int main (void) {
    int k;

    printf("Введите целое число: ");
    scanf("%d", &k);
    printf("Вы ввели: %d\n", k);

    return 0;
}
