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

void findMinMax(int a[], int n, int *max, int *min)
{
    *max = a[0];
    *min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > *max)
        {
            *max = a[i];
        }
        if (a[i] < *min)
        {
            *min = a[i];
        }
    }

}

int main()
{
    int n, min, max;
    n = isInt("Nhap gia tri cho n: ");

    int array[100];
    printf("Nhap gia tri cho cac phan tu: \n");
    for (int i = 0; i < n; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    findMinMax(array, n, &max, &min);
    printf("Gia tri lon nhat la: %d\n", max);
    printf("Gia tri nho nhat la: %d\n", min);

    return 0;
}