/* Отображаем простые числа между двумя числами с использованием функции */

#include <stdio.h>

int checkPrimeNumber (int n);
void separator();

int main (void) {
    int n1, n2, i, flag;

    printf("Введите начало и конец диапазона чисел: ");
    scanf("%d %d", &n1, &n2);

    printf("Выводим простые числа в заданном диапазоне:");
    separator();
    for (i = n1 + 1; i < n2; ++i) {
        flag = checkPrimeNumber(i);
        if (flag == 1)
            printf("%d ", i);
    }

    separator();
    return 0;
}

void separator () {
    printf("\n");
    int i;
    for (i = 0; i < 80; ++i)
        printf("=");
    printf("\n");
}

int checkPrimeNumber (int n) {
    int j;
    for (j = 2; j <= n/2; ++j)
        if (n % j == 0)
            return 0;
    return 1;
}
