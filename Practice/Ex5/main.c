#include <stdio.h>

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
            printf("Invalid value. Please enter a number.\n");
            while(getchar() != '\n');
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
            printf("Invalid number. Please enter a positive number.\n");
        }
    }
    while (n < 0);
    return n;
}

long long sum1ToN(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int n;
    while (1)
    {
        n = isPositive("Enter a number: ");
        printf("The sum of odd numbers from 1 to %d is: %d\n", n, sum1ToN(n));
    }
    return 0;
}