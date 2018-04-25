/* Проверяем, является ли символ гласным или согласным */

#include <stdio.h>

int main (void) {
	char c;
	int isLowercaseVowel, isUppercaseVowel;

	printf("Введите символ: ");
	scanf("%c", &c);

	isLowercaseVowel = (c == 'a' ||
						c == 'e' ||
						c == 'i' ||
						c == 'o' ||
						c == 'u' ||
						c == 'y');

	isUppercaseVowel = (c == 'A' ||
						c == 'E' ||
						c == 'I' ||
						c == 'O' ||
						c == 'U' ||
						c == 'Y');

	if (isLowercaseVowel || isUppercaseVowel)
		printf("Введенный символ - гласный\n");
	else
		printf("Введенный символ - согласный\n");

	return 0;
}
