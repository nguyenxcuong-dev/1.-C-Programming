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

void stable_odds_first (int array[], int n)
{
    // Tao array va index tam thoi;
    int temp[n];
    int idx = 0;

    // Lap qua array va day so le len truoc
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 != 0)
        {
            temp[idx] = array[i];
            idx++;
        }
    }

    // Dua so chan ra sau
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            temp[idx] = array[i];
            idx++;
        }
    }

    // Copy sang array chinh;
    for (int i = 0; i < n; i++)
    {
        array[i] = temp[i];
    }
}

int main()
{
    int n, array[100];
    while (1)
    {
        n = isInt("Enter the value for n: ");
        for (int i = 0; i < n; i++)
        {
            printf("Array[%d]: ", i);
            if (scanf("%d", &array[i]) != 1)
            {
                printf("Invalid value. Please enter a number.\n");
                while (getchar() != '\n');
                i--;
            }
        }

        stable_odds_first(array, n);

        printf("\n");

        for (int i = 0; i < n; i++)
        {
            printf("array[%d] = %d\n", i, array[i]);
        }
    }

    return 0;
}