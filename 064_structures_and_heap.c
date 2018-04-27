/* Структуры и динамическое выделение памяти */

#include <stdio.h>
#include <stdlib.h>

struct course {
    int marks;
    char subject[30];
};

int main(void)
{
    struct course *ptr;
    int quantity;

    printf("Количество записей: ");
    scanf("%d", &quantity);

    ptr = (struct course*)malloc(quantity * sizeof(struct course));
    int i;
    for (i = 0; i < quantity; ++i) {
        printf("Введите название предмета и оценку:\n");
        scanf("%s %d", (ptr + i)->subject, &(ptr + i)->marks);
    }

    printf("Результат:\n");
    for (i = 0; i < quantity; ++i) {
        printf("%s\t%d\n", (ptr + i)->subject, (ptr + i)->marks);
    }

    return 0;
}
