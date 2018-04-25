/* Вычисление НОД двух чисел */

#include <stdio.h>

int main (void) {
	int n1, n2;
	int gcd;
	int i;

	printf("Введите два целых числа: ");
	scanf("%d %d", &n1, &n2);

	for (i = 1; i <= n1 && i <= n2; i++)
		if (n1 % i == 0 && n2 % i == 0)
			gcd = i;

	printf("НОД - %d\n", gcd);

	return 0;
}
