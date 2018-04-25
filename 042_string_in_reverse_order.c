/* Выводим предложение в обратном порядке */

#include <stdio.h>

void reverse_sentence ();

int main (void) {
    printf("Введите предложение: ");

    reverse_sentence();
    printf("\n");
    
    return 0;
}

void reverse_sentence () {
    char c;
    scanf("%c", &c);

    if (c != '\n') {
        reverse_sentence();
        printf("%c", c);
    }
}
