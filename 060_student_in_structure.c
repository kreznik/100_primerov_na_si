/* Храним информацию о студенте в структуре */

#include <stdio.h>

struct studend {
    char name[50];
    int roll;
    int group;
} s;

int main(void)
{
    printf("%s\n", "Введите информацию:");

    printf("%s", "Имя: ");
    scanf("%s", s.name);

    printf("%s", "Номер билета: ");
    scanf("%d", &s.roll);

    printf("%s", "Номер группы: ");
    scanf("%d", &s.group);

    printf("\n%s\n", "Выводим информацию:");

    printf("Имя: ");
    puts(s.name);
    printf("Номер билета: %d\n", s.roll);
    printf("Номер группы: %d\n", s.group);

    return 0;
}
