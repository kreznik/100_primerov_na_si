/* Вычисляем все корни квадратного уравнения */

#include <stdio.h>
#include <math.h>

int main (void) {
	double a, b, c;
	double d;
	double x1, x2;
	double re, im;

	printf("Введите коэффициенты a, b и c: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	d = b*b - 4*a*c;

	if (d > 0) {
		x1 = (-b + sqrt(d)) / (2*a);
		x2 = (-b - sqrt(d)) / (2*a);

		printf("x1 = %.2f\nx2 = %.2f\n", x1, x2);
	}
	else if (d == 0)  {
		x1 = x2 = -b/(2*a);

		printf("x1 = x2 = %.2f\n", x1);
	}
	else {
		re = -b/(2*a);
		im = sqrt(-d)/(2*a);

		printf("x1 = %.2f+%.2fi\nx2 = %.2f-%.2fi\n", re, im, re, im);
	}

	return 0;
}
