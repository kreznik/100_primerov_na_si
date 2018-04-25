/* Проверяем, является ли число палиндромом или нет */

#include <stdio.h>

int main (void) {
	int original_number;
	int reversed_number = 0;
	int n;
	int remainder;

	printf("Введите целое число: ");
	scanf("%d", &n);

	original_number = n;

	while (n != 0) {
		remainder = n % 10;
		reversed_number = reversed_number * 10 + remainder;
		n /= 10;
	}

	if (original_number == reversed_number)
		printf("%d - палиндром\n", original_number);
	else
		printf("%d - не палиндром\n", original_number);

	return 0;
}
