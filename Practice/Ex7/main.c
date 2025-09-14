#include <stdio.h>

int isInt(const char *message)
{
    int value, check;
    while(1)
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

void countSign(const int a[], int n)
{
    int pos = 0, neg =0, zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            neg += 1;
        }
        else if (a[i] == 0)
        {
            zero += 1;
        }
        else 
        {
            pos += 1;
        }
    }
    printf("Pos: %d\nNeg: %d\nZero: %d\n", pos, neg, zero);
}

int main()
{
    int n;
    int array[100];
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
        countSign(array, n);
    }
    
    return 0;
}