/* Вычисляем степень числа */

#include <stdio.h>

int main (void) {
	int base;
	int exponent;
	long long result = 1;

	printf("Введите число: ");
	scanf("%d", &base);

	printf("Введите степень: ");
	scanf("%d", &exponent);

	while (exponent != 0) {
		result *= base;
		--exponent;
	}

	printf("Результат: %lld\n", result);

	return 0;
}
