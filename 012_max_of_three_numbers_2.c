/* Определяем максимум среди трех чисел */

#include <stdio.h>

int main (void) {
	double n1, n2, n3;

	printf("Введите три числа: ");
	scanf("%lf %lf %lf", &n1, &n2, &n3);

	if (n1 >= n2) {
		if (n1 >= n3)
			printf("%.2f - маскимум\n", n1);
		else
			printf("%.2f - маскимум\n", n3);
	}
	else {
		if (n2 >= n3)
			printf("%.2f - максимум\n", n2);
		else
			printf("%.2f - максимум\n", n3);
	}

	return 0;
}
