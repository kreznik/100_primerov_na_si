/* Вычисление разницы между двумя периодами времени */

#include <stdio.h>

struct time {
    int seconds;
    int minutes;
    int hours;
};

void diff_time(struct time t1, struct time t2, struct time *diff);

int main(void)
{
    struct time start;
    struct time stop;
    struct time diff;

    printf("Начальное время:\n");
    printf("Введите часы, минуты, секунды: ");
    scanf("%d %d %d", &start.hours, &start.minutes, &start.seconds);

    printf("Конечное время:\n");
    printf("Введите часы, минуты, секунды: ");
    scanf("%d %d %d", &stop.hours, &stop.minutes, &stop.seconds);

    // вычисляем разницу
    diff_time(start, stop, &diff);

    printf("\nРазница: %d:%d:%d - %d:%d:%d = %d:%d:%d\n",
        start.hours, start.minutes, start.seconds,
        stop.hours, stop.minutes, stop.seconds,
        diff.hours, diff.minutes, diff.seconds);

    return 0;
}

void diff_time(struct time start, struct time stop, struct time *diff)
{
    if (stop.seconds > start.seconds) {
        --start.minutes;
        start.seconds += 60;
    }

    diff->seconds = start.seconds - stop.seconds;

    if (stop.minutes > start.minutes) {
        --start.hours;
        start.minutes += 60;
    }

    diff->minutes = start.minutes - stop.minutes;
    diff->hours = start.hours - stop.hours;
}
