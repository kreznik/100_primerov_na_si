/* Вычисляем сумму натуральных чисел */

#include <stdio.h>

int main (void) {
	int n, i, sum = 0;

	printf("Введите положительное целое число: ");
	scanf("%d", &n);

	i = 1;
	while (i <= n) {
		sum += i;
		++i;
	}

	printf("Сумма = %d\n", sum);

	return 0;
}
