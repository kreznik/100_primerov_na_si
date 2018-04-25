/* Умножение двух вещественных чисел */

#include <stdio.h>

int main (void) {
    double firstNumber, secondNumber, product;

    printf("Введите два числа: ");
    scanf("%lf %lf", &firstNumber, &secondNumber);

    product = firstNumber * secondNumber;
    printf("Product = %.2lf\n", product);

    return 0;
}
