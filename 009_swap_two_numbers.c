/* Меняем местами два числа */

#include <stdio.h>

int main (void) {
    double a, b, temp;

    printf("Введите A: ");
    scanf("%lf", &a);

    printf("Введите B: ");
    scanf("%lf", &b);

    temp = a;
    a = b;
    b = temp;

    printf("\nПосле замены, A = %.2lf\n", a);
    printf("После замены, B = %.2lf\n", b);

    return 0;
}
