/* Чтение строки из файла */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c[1000];
    FILE *fptr;

    if ((fptr = fopen("065_text.txt", "r")) == NULL) {
        printf("Ошибка при открытии файла");
        exit(1);
    }

    fscanf(fptr, "%[^\n]", c);

    printf("Прочитано из файла:\n%s\n", c);
    fclose(fptr);

    return 0;
}
