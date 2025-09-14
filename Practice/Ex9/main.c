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
            while(getchar() != '\n');
            return value;
        }
        else
        {
            printf("Invalid value. Please enter a number.\n");
            while (getchar() != '\n');
        }
    }
}

int freg_of (const int arr[], int n, int x)
{
    int countX = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            countX += 1;
        }
    }
    return countX;
}

int main()
{
    int n;
    int arr[100];
    int x;
    while (1)
    {
        n = isInt("Enter the value for n: ");
        for (int i = 0; i < n; i++)
        {
            printf("arr[%d]: ", i);
            if (scanf("%d", &arr[i]) != 1)
            {
                printf("Invalid value. Please enter a number.\n");
                while (getchar() != '\n');
                i--;
            }
        }
        x = isInt("Enter the value you want to count: ");
        if (freg_of(arr, n, x) == 0)
        {
            printf("%d was not found.\n", x);
        }
        else
        {
            printf("%d appears %d times in the array.\n", x, freg_of(arr, n, x));
        }
    }

    return 0;
}