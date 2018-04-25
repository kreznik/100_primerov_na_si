/* Проверяем, может ли число быть выраженным как сумма двух простых чисел */

#include <stdio.h>

int checkPrimeNumber (int n);

int main (void) {
    int n;
    int flag = 0;

    printf("Введите целое положительное число: ");
    scanf("%d", &n);

    int i;
    for (i = 2; i <= n/2; ++i) {
        if (checkPrimeNumber(i)) {
            if (n != i && checkPrimeNumber(n-i)) {
                printf("%d = %d + %d\n", n, i, n-i);
                flag = 1;
            }
        }
    }

    if (flag == 0)
        printf("%d не может быть выражено как сумма простых чисел.\n", n);

    return 0;
}

int checkPrimeNumber (int n) {
    int j;
    for (j = 2; j <= n/2; ++j)
        if (n % j == 0)
            return 0;
    return 1;
}
