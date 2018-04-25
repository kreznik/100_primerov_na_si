/* Сумма двух матриц с использованием многомерных массивов */

#include <stdio.h>

int main (void) {
    int a[100][100];
    int b[100][100];
    int sum[100][100];
    int row;
    int col;

    printf("Введите количество строк от 1 до 100: ");
    scanf("%d", &row);
    printf("Введите количество столбцов от 1 до 100: ");
    scanf("%d", &col);

    printf("Введите элементы первой матрицы:\n");
    int i, j;
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            printf("Введите элемент a%d%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Введите элементы второй матрицы:\n");
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            printf("Введите элемент b%d%d: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }

    // сложение двух матриц
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // отображаем результат
    printf("\nСумма 2 матриц:\n\n");
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            printf("%d   ", sum[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}
