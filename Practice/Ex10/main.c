#include <stdio.h>

int isInt(const char *message)
{
    int check;
    int value;
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

int isPrime (int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int countPrimeNumber (int array[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(array[i]))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n, array[100];
    int count;
    while (1)
    {
        n = isInt("Enter the value for n: ");
        for (int i = 0; i < n; i++)
        {
            printf("array[%d]: ", i);
            if (scanf("%d", &array[i]) != 1)
            {
                printf("Invalid value. Please enter a number.\n");
                while (getchar() != '\n');
                i--;
            }
        }
        count = countPrimeNumber(array, n);
        printf("There are %d prime numbers in the array.\n", count);
    }

    return 0;
}