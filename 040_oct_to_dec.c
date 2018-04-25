/* Конвертируем восьмеричные числа в десятичные и наоборот */

#include <stdio.h>
#include <math.h>

int dec_to_oct (int d);
long long oct_to_dec (int o);

int main (void) {
    int d;
    int o;

    printf("Введите десятичное число: ");
    scanf("%d", &d);

    printf("%d (десятичное) = %d (восьмеричное)\n", d, dec_to_oct(d));

    printf("Введите восьмеричное число: ");
    scanf("%d", &o);

    printf("%d (восьмеричное) = %lld (десятичное)\n", o, oct_to_dec(o));

    return 0;
}

int dec_to_oct (int d) {
    int o = 0;
    int i = 1;

    while (d != 0) {
        o += d % 8 * i;
        d /= 8;
        i *= 10;
    }

    return o;
}

long long oct_to_dec (int o) {
    int d = 0;
    int i = 0;

    while (o != 0) {
        d += o % 10 * pow(8, i);
        ++i;
        o /= 10;
    }

    return d;
}
