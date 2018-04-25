/* Меняем местами два числа */

#include <stdio.h>

int main (void) {
    double a, b;

    printf("Введите A: ");
    scanf("%lf", &a);

    printf("Введите B: ");
    scanf("%lf", &b);

    a = a - b;
    b = a + b;
    a = b - a;

    printf("\nПосле замены, A = %.2lf\n", a);
    printf("После замены, B = %.2lf\n", b);

    return 0;
}
