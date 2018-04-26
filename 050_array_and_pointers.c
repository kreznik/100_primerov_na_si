#include <stdio.h>

int main (void) {
    int data[5];
    int i;

    printf("%s", "Введите 5 элементов: ");

    for (i = 0; i < 5; ++i)
        scanf("%d", data + i);

    printf("%s\n", "Содержимое массива:");
    for (i = 0; i < 5; ++i)
        printf("%d\n", *(data + i));

    return 0;
}
