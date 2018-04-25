/* Наименьшее общее кратное */

#include <stdio.h>

int main (void) {
	int n1, n2;
	int lcm;

	printf("Введите два целых положительных числа: ");
	scanf("%d %d", &n1, &n2);

	lcm = (n1 > n2) ? n1 : n2;

	while (1) {
		if (lcm % n1 == 0 && lcm % n2 == 0) {
			printf("НОК = %d\n", lcm);
			break;
		}
		++lcm;
	}

	return 0;
}
