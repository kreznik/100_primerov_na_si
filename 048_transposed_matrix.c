/* Транспонированная матрица */

#include <stdio.h>

int main () {
    int a[10][10];
    int t[10][10];

    int row, col;
    int i, j;

    printf("Введите количество строк и колонок: ");
    scanf("%d %d", &row, &col);

    // сохраняем элементы
    printf("\nВведите элементы матрицы:\n");
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            printf("Введите элемент a%d%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    // показываем a[][]
    printf("\nИсходная матрица:\n");
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            printf("%d   ", a[i][j]);
        }
        printf("\n\n");
    }

    // вычисляем транспонированную матрицу
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            t[j][i] = a[i][j];
        }
    }

    // результат
    printf("\nТранспонированная матрица:\n");
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            printf("%d   ", t[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}
