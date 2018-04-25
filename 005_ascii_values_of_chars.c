/* Определение ASCII-значения символа */

#include <stdio.h>

int main (void) {
    char c;
    
    printf("Введите символ: ");
    scanf("%c", &c);

    printf("ASCII-код %c = %d\n", c, c);

    return 0;
}
