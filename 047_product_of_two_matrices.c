/* Произведение двух матриц */

#include <stdio.h>

int main (void) {
    int a[10][10];
    int b[10][10];
    int result[10][10];

    int row1, row2;
    int col1, col2;

    printf("Введите количество строк и колонок первой матрицы: ");
    scanf("%d %d", &row1, &col1);

    printf("Введите количество строк и колонок второй матрицы: ");
    scanf("%d %d", &row2, &col2);

    // проверяем, можем ли мы умножить две матрицы
    while (col1 != row2) {
        printf("Ошибка! К-во колонок первой матрицы не равно количеству строк\
                второй\n\n");

        printf("Введите количество строк и колонок первой матрицы: ");
        scanf("%d %d", &row1, &col1);

        printf("Введите количество строк и колонок второй матрицы: ");
        scanf("%d %d", &row2, &col2);
    }

    // вводим элементы первой матрицы
    printf("\nВведите элементы первой матрицы:\n");
    int i, j;
    for (i = 0; i < row1; ++i) {
        for (j = 0; j < col1; ++j) {
            printf("Введите элемент a%d%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    // вводим элементы второй матрицы
    printf("\nВведите элементы второй матрицы:\n");
    for (i = 0; i < row2; ++i) {
        for (j = 0; j < col2; ++j) {
            printf("Введите элемент a%d%d: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }

    // заполняем все элементы результирующей матрицы нулями
    for (i = 0; i < row1; ++i) {
        for (j = 0; j < col2; ++j) {
            result[i][j] = 0;
        }
    }

    // умножаем матрицы a и b
    // результат сохраняем в матрице result
    int k;
    for (i = 0; i < row1; ++i) {
        for (j = 0; j < col2; ++j) {
            for (k = 0; k < col1; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // отображаем результат
    printf("\nРезультат умножения матриц:\n");
    for (i = 0; i < row1; ++i) {
        for (j = 0; j < col2; ++j) {
            printf("%d  ", result[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}
