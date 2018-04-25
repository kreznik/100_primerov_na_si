/* Вычисляем наибольший элемент массива */

#include <stdio.h>

int main (void) {
    int i, n;
    float arr[100];

    printf("Введите количество элементов массива (1-100): ");
    scanf("%d", &n);
    printf("\n");

    // читаем ввод пользователя
    for (i = 0; i < n; ++i) {
        printf("Введите элемент %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    // Проходимя по массиву, сохраняя наибольший элемент в arr[0]
    for (i = 1; i < n; ++i) {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }

    printf("Максимум = %.2f\n", arr[0]);

    return 0;
}
