/* Выводим простые числа в интервале */

#include <stdio.h>

int main (void) {
    int low, high;
    int i, flag;

    printf("Выводим простые числа между a и b.\nВведит a и b: ");
    scanf("%d %d", &low, &high);

    if (low > high) {
        low = low - high;
        high = low + high;
        low = high - low;
    }

    while (low < high) {
        flag = 0;

        for (i = 2; i <= low/2; ++i) {
            if (low % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", low);

        ++low;
    }

    printf("\n");
    return 0;
}
