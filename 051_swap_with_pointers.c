/* Swap чисел с помощью вызова по ссылке */

#include <stdio.h>

void cyclic_swap(int *a, int *b, int *c);

int main(void) {
    int a, b, c;

    printf("%s", "Введите a, b и c: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("%s\n", "До замены:");
    printf("a = %d\nb = %d\nc = %d\n", a, b, c);

    cyclic_swap(&a, &b, &c);

    printf("%s\n", "После замены:");
    printf("a = %d\nb = %d\nc = %d\n", a, b, c);

    return 0;
}

void cyclic_swap(int *a, int *b, int *c)
{
    int temp;

    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}
