#include <stdio.h>

// Ham nhap so nguyen;
int isInt (const char *message)
{
    int value, check;
    while (1)
    {
        printf("%s", message);
        check = scanf("%d", &value);
        if (check == 1)
        {
            while (getchar() != '\n');
            return value;
        }
        else
        {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
        }
    }
}


// Kiem tra nam nhuan;
int isLeap (int year) 
{
    int isLeap = 0;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        isLeap = 1;
    }
    return isLeap;
}

// In ra nam nhuan;
void printLeap(int year)
{
    if (isLeap(year))
    {
        printf("%d is leap year.\n");
    }
    else
    {
        printf("%d is not a leap year.\n");
    }
}


// Tra ve so ngay;
int dayInMonth (int month, int year)
{
    switch (month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2: 
            if (isLeap(year))
            {
                return 29;
            }
            else
            {
                return 28;
            }
        default:
            return -1;
    }
}

int main()
{
    int month, year;
    while (1)
    {
        printf("\n");
        month = isInt("Enter the month: ");
        year = isInt("Enter the year: ");
        printf("\n");
        int days = dayInMonth(month, year);
        if (days == -1)
        {
            printf("Invalid Month. \n");
        }
        else 
        {
            printLeap(year);
            printf("%d/%d has %d days.\n", month, year, days);
        }
    }
    return 0;
}