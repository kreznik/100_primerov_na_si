/* Конвертируем двоичные числа в десятичные и наоборот */

#include <stdio.h>
#include <math.h>

int bin_to_dec (long long n);
long long dec_to_bin (int n);

int main (void) {
    long long b;
    printf("Введите двоичное число: ");
    scanf("%lld", &b);
    printf("%lld (двоичное) = %d (десятичное)\n", b, bin_to_dec(b));

    int d;
    printf("Введите десятичное число: ");
    scanf("%d", &d);
    printf("%d (десятичное) = %lld (двоичное)\n", d, dec_to_bin(d));

    return 0;
}

int bin_to_dec (long long b) {
    int d = 0;
    int i = 0;
    int remainder;

    while (b != 0) {
        remainder = b % 10;
        b /= 10;
        d += remainder * pow(2, i);
        ++i;
    }

    return d;
}

long long dec_to_bin (int d) {
    long long b = 0;
    int remainder;
    int i = 1;
    int step = 1;

    while (d != 0) {
        remainder = d % 2;
        printf("Шаг %d: %d/2, Остаток = %d, Частное = %d\n",
               step++, d, remainder, d/2);
        d /= 2;
        b += remainder * i;
        i *= 10;
    }

    return b;
}
