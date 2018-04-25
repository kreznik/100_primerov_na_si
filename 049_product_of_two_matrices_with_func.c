#include <stdio.h>

void enterData (int firstMatrix[][10], int secondMatrix[][10],
        int rowFirst, int colFirst, int rowSecond, int colSecond);
void multiplyMatrices (int firstMatrix[][10], int secondMatrix[][10],
        int multResult[][10], int rowFirst, int colFirst,
        int rowSecond, int colSecond);
void display (int mult[][10], int rowFirst, int colSecond);

int main () {
    int firstMatrix[10][10];
    int secondMatrix[10][10];
    int multMatrix[10][10];
    int rowFirst, colFirst;
    int rowSecond, colSecond;

    printf("Введите количество строк и колонок матрицы 1: ");
    scanf("%d %d", &rowFirst, &colFirst);

    printf("Введите количество строк и колонок матрицы 2: ");
    scanf("%d %d", &rowSecond, &colSecond);

    // проверяем, можем ли мы умножить 2 матрицы
    while (colFirst != rowSecond) {
        printf("Ошибка! К-во колонок первой матрицы не равно к-ву строк второй\n");
        printf("Введите количество строк и колонок матрицы 1: ");
        scanf("%d %d", &rowFirst, &colFirst);
        printf("Введите количество строк и колонок матрицы 2: ");
        scanf("%d %d", &rowSecond, &colSecond);
    }

    // вводим данные
    enterData(firstMatrix, secondMatrix, rowFirst, colFirst, rowSecond, colSecond);

    // умножаем две матрицы
    multiplyMatrices(firstMatrix, secondMatrix, multMatrix, rowFirst,
            colFirst, rowSecond, colSecond);

    // выводим результат
    display(multMatrix, rowFirst, colSecond);

    return 0;
}

void enterData (int firstMatrix[][10], int secondMatrix[][10],
        int rowFirst, int colFirst, int rowSecond, int colSecond) {
    int i, j;

    printf("Введите элементы матрицы 1:\n");
    for (i = 0; i < rowFirst; ++i) {
        for (j = 0; j < colFirst; ++j) {
            printf("Введите элемент a%d%d: ", i+1, j+1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Введите элементы матрицы 2:\n");
    for (i = 0; i < rowSecond; ++i) {
        for (j = 0; j < colSecond; ++j) {
            printf("Введите элемент a%d%d: ", i+1, j+1);
            scanf("%d", &secondMatrix[i][j]);
        }
    }
}

void multiplyMatrices (int firstMatrix[][10], int secondMatrix[][10],
        int multResult[][10], int rowFirst, int colFirst,
        int rowSecond, int colSecond) {
    int i, j, k;
    
    // заполняем результирующую матрицу нулями
    for (i = 0; i < rowFirst; ++i) {
        for (j = 0; j < colSecond; ++j) {
            multResult[i][j] = 0;
        }
    }

    // умножаем 2 матрицы и сохраняем результат в multResult
    for (i = 0; i < rowFirst; ++i) {
        for (j = 0; j < colSecond; ++j) {
            for (k = 0; k < colFirst; ++k) {
                multResult[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void display (int mult[][10], int rowFirst, int colSecond) {
    int i, j;

    printf("\nРезультат:\n");
    for (i = 0; i < rowFirst; ++i) {
        for (j = 0; j < colSecond; ++j) {
            printf("%d  ", mult[i][j]);
        }
        printf("\n\n");
    }
}
