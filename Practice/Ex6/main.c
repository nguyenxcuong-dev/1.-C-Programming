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

int isNonDescreasing (const int a[], int n)
{
    int isTrue = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            isTrue = 0;
        }
    }
    return isTrue;
}

int main()
{
    int array[100];
    int n;
    while (1)
    {
        n = isInt("Enter the value for n: ");
        for (int i = 0; i < n; i++)
        {
            printf("array[%d] = ", i);
            if (scanf("%d", &array[i]) != 1)
            {
                printf("Invalid value. Please enter a number.\n");
                while (getchar() != '\n');
                i--;
            }
        }
        if (isNonDescreasing(array, n))
        {
            printf("array[100] is descreasing array.\n");
        }
        else 
        {
            printf("array[100] is non-descreasing array.\n");
        }
    }

    return 0;
}