/* Вычисление факториала */

#include <stdio.h>

int main (void) {
	int n, i;
	unsigned long long factorial = 1;

	printf("Введите целое число: ");
	scanf("%d", &n);

	if (n < 0)
		printf("Факториал отрицательного числа не существует!\n");
	else {
		for (i = 1; i <= n; i++)
			factorial *= i;
		printf("Факториал %d = %llu\n", n, factorial);
	}

	return 0;
}
