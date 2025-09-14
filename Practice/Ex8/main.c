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
            while (getchar() != '\n');
        }
    }
}

void findMinMax (int arr[], int n, int *min, int *max)
{
    *min = *max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}

int main()
{
    int n;
    int arr[100];
    int min, max;
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
        findMinMax(arr, n, &min, &max);
        printf("The largest value is: %d\n", max);
        printf("The smallest value is: %d\n", min);
        printf("\n");
    }
    return 0;
}