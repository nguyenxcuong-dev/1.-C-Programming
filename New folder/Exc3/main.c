#include <stdio.h>

int isInt(const char *message)
{
    int value, check;
    while (1)
    {
        printf("%s", message);
        check = scanf("%d", &value);
        if (check == 1)
        {
            while (getchar() != '\n')
                ;
            return value;
        }
        else
        {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n')
                ;
        }
    }
}

int isPositive(const char *message)
{
    int n;
    do
    {
        n = isInt(message);
        if (n < 0)
        {
            printf("Invalid input! Please enter a positive number.\n");
        }
    } while (n < 0);
    return n;
}

int isLeap(int year)
{
    int leapYear = 0;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        leapYear = 1;
    }
    return leapYear;
}

int dayInMonth(int month, int year)
{
    int day;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        day = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        day = 30;
        break;
    case 2:
        if (isLeap(year))
        {
            day = 29;
            break;
        }
        else
        {
            day = 28;
            break;
        }
    }
    return day;
}

int main()
{
    int day, month, year;
    month = isPositive("Nhap vao thang: ");
    year = isPositive("Nhap vao nam: ");
    printf("Thang %d nam %d co %d ngay.\n", month, year, dayInMonth(month, year));
    return 0;
}