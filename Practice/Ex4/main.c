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
            while (getchar() != '\n');
            return value;
        }
        else
        {
            printf("Invalid value. Please enter a number.\n");
            while (getchar() != '\n');
        }
    }
}

int positiveNum (const char *message)
{
    int n;
    do 
    {
        n = isInt(message);
        if (n < 0)
        {
            printf("Invalid number. Please enter a positive number.\n");
        }
    }
    while (n < 0);
    return n;
}

double simpleInterest (int p, double rPercent, int year)
{
    return p + p * (rPercent / 100) * year;
}

int main()
{
    int p, year;
    double r;
    while (1)
    {
        p = positiveNum("Enter amount: ");
        printf("Enter the percent: ");
        scanf("%lf", &r);
        year = positiveNum("Enter the year: ");
        printf("The amount your revice after %d year is: %.2lf\n", year, simpleInterest(p, r, year));
    }
    return 0;
}