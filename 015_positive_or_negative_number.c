/* Проверяем, является ли число отрицательным или положительным */

#include <stdio.h>

int main (void) {
	double n;

	printf("Введите число: ");
	scanf("%lf", &n);

	if (n > 0)
		printf("%f - положительное\n", n);
	else if (n < 0)
		printf("%f - отрицательное\n", n);
	else
		printf("ноль\n");

	return 0;
}
