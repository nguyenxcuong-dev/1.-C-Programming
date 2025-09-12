#include <stdio.h>

// Viet ham nhap so nguyen
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
            printf("Gia tri khong hop le. Vui long nhap vao 1 so nguyen.\n");
            while (getchar() != '\n');
        }
    }
}

int findMin(int a[], int n, int *min)
{
    *min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < *min)
        {
            *min = a[i];
        }
    }
    return *min;
}

int findMax(int a[], int n, int *max)
{
    *max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > *max)
        {
            *max = a[i];
        }
    }
    return *max;
}

int main()
{
    int n, min, max;
    int array[100];
    n = isInt("Nhap vao gia tri cho n: ");

    printf("Nhap cac phan tu cho mang: \n");
    for (int i = 0; i < n; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    findMin(array, n, &min);
    findMax(array, n, &max);
    printf("\n");
    
    printf("Gia tri lon nhat la: %d\n", max);
    printf("Gia tri nho nhat la: %d\n", min);

    return 0;
}