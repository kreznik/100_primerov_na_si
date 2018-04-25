/* Выводим числа Армстронга в заданном диапазоне */

#include <stdio.h>
#include <math.h>

int main (void) {
    int low, high;
    int temp1, temp2;
    int i, remainder;
    int n = 0, result = 0;

    printf("Введите два числа (начало и конец диапазона): ");
    scanf("%d %d", &low, &high);
    printf("Выводим числа Армстронга: ");

    for (i = low + 1; i < high; ++i) {
        temp2 = i;
        temp1 = i;

        // кол-во разрядов
        while (temp1 != 0) {
            temp1 /= 10;
            ++n;
        }

        // сумма цифр возведенных в степень n
        while (temp2 != 0) {
            remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 /= 10;
        }

        // проверяем на число Армстронга
        if (result == i) 
            printf("%d ", i);

        // сброс значений перед следующей итерацией
        n = 0;
        result = 0;
    }

    printf("\n");
    return 0;
}
