/* Проверяем число Армстронга */

#include <stdio.h>
#include <math.h>

int main (void) {
    int number;
    int original_number;
    int remainder;
    int result = 0;
    int n = 0;

    printf("Введите число: ");
    scanf("%d", &number);

    original_number = number;

    while (original_number != 0) {
        original_number /= 10;
        ++n;
    }

    original_number = number;

    while (original_number != 0) {
        remainder = original_number % 10;
        result += pow(remainder, n);
        original_number /= 10;
    }

    if (result == number)
        printf("%d - число Армстронга\n", number);
    else
        printf("%d - не число Армстронга\n", number);

    return 0;
}
