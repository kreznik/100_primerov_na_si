/* Конвертируем двоичные числа в восьмеричные и наоборот */

#include <stdio.h>
#include <math.h>

int bin_to_oct (long long b);
long long oct_to_bin (int o);

int main (void) {
    long long b;
    int o;

    printf("Введите двоичное число: ");
    scanf("%lld", &b);

    printf("%lld (двоичное) = %d (восьмеричное)\n", b, bin_to_oct(b));

    printf("Введите восьмеричное число: ");
    scanf("%d", &o);

    printf("%d (восьмеричное) = %lld (двоичное)\n", o, oct_to_bin(o));

    return 0;
}

long long oct_to_bin (int o) {
    int b = 0;
    int d = 0;
    int i = 0;

    while (o != 0) {
        d += o % 10 * pow(8, i);
        ++i;
        o /= 10;
    }

    i = 1;

    while (d != 0) {
        b += d % 2 * i;
        d /= 2;
        i *= 10;
    }

    return b;
}


int bin_to_oct (long long b) {
    int o = 0;
    int d = 0;
    int i = 0;

    while (b != 0) {
        d += b % 10 * pow(2, i);
        ++i;
        b /= 10;
    }

    i = 1;

    while (d != 0) {
        o += d % 8 * i;
        d /= 8;
        i *= 10;
    }

    return o;
}
