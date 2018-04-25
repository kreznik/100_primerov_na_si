/* Вычисляем обратное число */

#include <stdio.h>

int main (void) {
	int number;
	int reverse_number = 0;
	int remainder;

	printf("Введите целое число: ");
	scanf("%d", &number);

	while (number != 0) {
		remainder = number % 10;
		reverse_number = reverse_number * 10 + remainder;
		number /= 10;
	}

	printf("Обратное число = %d\n", reverse_number);

	return 0;
}
