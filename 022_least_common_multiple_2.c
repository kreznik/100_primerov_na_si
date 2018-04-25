/* Наименьшее общее кратное */

#include <stdio.h>

int main (void) {
	int n1, n2;
	int lcm, gcd;
	int i;

	printf("Введите два целых положительных числа: ");
	scanf("%d %d", &n1, &n2);

	// вычисляем НОД
	for (i = 1; i <= n1 && i <= n2; ++i)
		if (n1 % i == 0 && n2 % i == 0)
			gcd = i;

	// вычисляем НОК
	lcm = (n1 * n2) / gcd;

	printf("НОК = %d\n", lcm);

	return 0;
}
