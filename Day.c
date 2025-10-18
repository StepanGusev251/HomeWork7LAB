#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main() {
    int k, first_day;
    setlocale(LC_ALL, "RUS");

    // Ввод данных
    printf("Введите номер дня в году (k): ");
    scanf("%d", &k);

    printf("Введите день недели 1 января (1-понедельник, 2-вторник, ..., 7-воскресенье): ");
    scanf("%d", &first_day);

    // Вычисление дня недели для k-го дня
    int day = (first_day + k - 2) % 7 + 1;

    // Вывод результата с использованием switch
    printf("%d-й день невисокосного года - это ", k);

    switch (day) {
    case 1: printf("понедельник\n"); break;
    case 2: printf("вторник\n"); break;
    case 3: printf("среда\n"); break;
    case 4: printf("четверг\n"); break;
    case 5: printf("пятница\n"); break;
    case 6: printf("суббота\n"); break;
    case 7: printf("воскресенье\n"); break;
    default: printf("неизвестный день\n"); break;
    }
    
    return 0;
}