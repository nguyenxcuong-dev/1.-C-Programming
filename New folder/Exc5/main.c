#include <stdio.h>

int isNumber(const char *message)
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
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n');
        }
    }
}

int isPositive (const char *message)
{
    int n;
    do 
    {
        n = isNumber(message);
        if (n < 0)
        {
            printf("Invalid Input! Please enter a positive number.\n");
        }
    }
    while (n < 0);
    return n;
}

long long sumOddToN(int n)
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
    int n = isPositive("Nhap vao 1 so nguyen duong: ");
    printf("Tong so le tu 1 - %d la: %d\n", n, sumOddToN(n));
    return 0;
}