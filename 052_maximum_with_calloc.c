/* Поиск максимума с использованием динамического выделения памяти */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, num;
    float *data;
    
    printf("%s", "Введите количество элементов: ");    
    scanf("%d", &num);

    // выделяем память под 'num' элементов
    data = (float*) calloc(num, sizeof(float));

    if (data == NULL) {
        printf("%s\n", "Ошибка выделения памяти.");    
        exit(1);
    }

    puts("");

    // вводим элементы
    for (i = 0; i < num; ++i) {
        printf("Введите элемент %d: ", i + 1);
        scanf("%f", data + i);
    }

    // ищем максимальный элемент
    for (i = 1; i < num; ++i) {
        if (*data < *(data + i))
            *data = *(data + i);    
    }

    printf("Максимум = %.2f\n", *data);

    return 0;
}
