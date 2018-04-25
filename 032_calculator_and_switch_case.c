/* Делаем простой калькулятор с использованием switch..case */

#include <stdio.h>

int main () {
    char operator;
    double num1, num2;

    printf("Введите оператор (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Введите два операнда: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            printf("%.11f + %.11f = %.11f", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.11f - %.11f = %.11f", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.11f * %.11f = %.11f", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%.11f / %.11f = %.11f", num1, num2, num1 / num2);
            else
                printf("На ноль делить нельзя!");
            break;
        default:
            printf("Ошибка! Неправильный оператор! Можно +, -, *, /.");
    }

    printf("\n");
    return 0;
}
