/* Запись предложения в файл */

#include <stdio.h>
#include <stdlib.h> /* для функции exit() */

int main()
{
    char sentence[1000];
    FILE *fptr;

    fptr = fopen("065_text.txt", "w");
    if (fptr ==  NULL) {
        printf("Ошибка!");
        exit(1);
    }

    printf("Введите предложение:\n");
    fgets(sentence, 1000, stdin);

    fprintf(fptr, "%s", sentence);
    fclose(fptr);

    return 0;
}
