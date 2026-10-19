#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, ".UTF8");
    int type; // 1 с понедельника, 2 с воскресенья
    int day;  // номер дня от 1 до 7

    printf("Выберите тип нумерации (1 - с Понедельника, 2 - с Воскресенья): ");
    scanf("%d", &type);

    printf("Введите порядковый номер дня недели (1-7): ");
    scanf("%d", &day);

    switch (type)
    {
    case 1: //нумерация с понедельника
        switch (day)
        {
        case 1:
            printf("Понедельник\n");
            break;
        case 2:
            printf("Вторник\n");
            break;
        case 3:
            printf("Среда\n");
            break;
        case 4:
            printf("Четверг\n");
            break;
        case 5:
            printf("Пятница\n");
            break;
        case 6:
            printf("Суббота\n");
            break;
        case 7:
            printf("Воскресенье\n");
            break;
        default:
            printf("Дня с таким порядковым номером нет");
            break;
        }
        break;

    case 2: //нумерация с воскресенья
        switch (day)
        {
        case 1:
            printf("Воскресенье\n");
            break;
        case 2:
            printf("Понедельник\n");
            break;
        case 3:
            printf("Вторник\n");
            break;
        case 4:
            printf("Среда\n");
            break;
        case 5:
            printf("Четверг\n");
            break;
        case 6:
            printf("Пятница\n");
            break;
        case 7:
            printf("Суббота\n");
            break;
        default:
            printf("Дня с таким порядковым номером нет");
            break;
        }
        break;
    default:
        printf("Неправильно выбран тип нумерации\n");
        break;
    }
    return 0;
}