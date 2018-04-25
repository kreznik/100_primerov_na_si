/* Выводим таблицу умножения */

#include <stdio.h>

int main (void) {
	int n, i;

	printf("Введите число: ");
	scanf("%d", &n);

	for (i = 1; i <= 10; i++)
		printf("%2d * %2d = %2d\n", n, i, n*i);

	return 0;
}
