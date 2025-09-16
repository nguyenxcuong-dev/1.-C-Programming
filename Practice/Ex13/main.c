#include <stdio.h>

void reverseArray (int a[], int n, int k)
{
    while (n < k)
    {
        int temp = a[n];
        a[n] = a[k];
        a[k] = temp;
        n++;
        k--;
    }
}

void rotateRight (int a[], int n, int k)
{
    if (n == 1)
    {
        return;
    }
    k = k % n;
    if (k < 0)
    {
        k = (k + n) % n;
    }
    if (k == 0)
    {
        return;
    }

    reverseArray(a, 0, n - 1);
    reverseArray(a, 0, k - 1);
    reverseArray(a, k, n - 1);
}

int main()
{
    int array[100], n, k = 2;
    while (1)
    {
        printf("Enter the value for n: ");
        if (scanf("%d", &n) != 1)
        {
            printf("Invalid value. Please enter a number.\n");
            while (getchar() != '\n');
        }

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
        rotateRight(array, n, k);

        printf("\n");

        for (int i = 0; i < n; i++)
        {
            printf("array[%d] = %d\n", i, array[i]);
        }
    }

    return 0;
}