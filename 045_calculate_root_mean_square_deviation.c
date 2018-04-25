/* Вычисляем среднеквадратичное отклонение */

#include <stdio.h>
#include <math.h>

float calc_sd (float data[]);

int main (void) {
    float data[10];

    printf("Введите 10 элементов: ");
    int i;
    for (i = 0; i < 10; ++i)
        scanf("%f", &data[i]);

    printf("Среднеквадратичное отклонение = %.6f\n", calc_sd(data));

    return 0;
}

float calc_sd (float data[]) {
    float sum = 0;
    float mean;
    float std_deviation = 0;

    int i;
    for (i = 0; i < 10; ++i)
        sum += data[i];

    mean = sum / 10;

    for (i = 0; i < 10; ++i)
        std_deviation += pow(data[i] - mean, 2);

    return sqrt(std_deviation / 10);
}
