/* Вычисляем сумму натуральных чисел */

#include <stdio.h>

int main (void) {
	int n, i, sum = 0;

	do {
		printf("Введите положительное целое число: ");
		scanf("%d", &n);
	} while (n <= 0);

	for (i = 1; i <= n; i++) {
		sum += i;
	}

	printf("Сумма = %d\n", sum);

	return 0;
}
