/* Сложение двух структур */

#include <stdio.h>

struct Distance {
    int feet;
    float m;
} d1, d2, sum_of_distance;

int main(void)
{
    printf("Заполняем первую структуру\n");
    printf("Количество шагов: ");
    scanf("%d", &d1.feet);
    printf("Количество метров: ");
    scanf("%f", &d1.m);

    printf("\nЗаполняем вторую структуру\n");
    printf("Количество шагов: ");
    scanf("%d", &d2.feet);
    printf("Количество метров: ");
    scanf("%f", &d2.m);

    sum_of_distance.feet = d1.feet + d2.feet;
    sum_of_distance.m = d1.m + d2.m;

    printf("\nРезультат = %d - %.1f\n",
        sum_of_distance.feet, sum_of_distance.m);

    return 0;
}
