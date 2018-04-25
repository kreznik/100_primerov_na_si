/* Проверка на простое число и число Армстронга с использованием функций */

#include <stdio.h>
#include <math.h>

int check_prime_number (int n);
int check_armstrong_number (int n);

int main (void) {
    int n, flag;

    printf("Введите положительное целое число: ");
    scanf("%d", &n);

    // проверка на простое число
    flag = check_prime_number(n);
    if (flag == 1)
        printf("%d - простое.\n", n);
    else
        printf("%d - не является простым.\n", n);

    // проверка на число армстронга
    flag = check_armstrong_number(n);
    if (flag == 1)
        printf("%d - число Армстронга.\n", n);
    else
        printf("%d - не является число Армстронга.\n", n);

    return 0;
}


int check_prime_number (int n) {
    int i, flag = 1;

    for (i = 2; i <= n/2; ++i) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }

    return flag;
}


int check_armstrong_number (int n) {
    int num, remainder, result = 0, len = 0, flag;

    num = n;

    while (num != 0) {
        num /= 10;
        len++;
    }

    num = n;

    while (num != 0) {
        remainder = num % 10;
        result += pow(remainder, len);
        num /= 10;
    }

    if (result == n)
        flag = 1;
    else
        flag = 0;

    return flag;
}
