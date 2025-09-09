#include <stdio.h>

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

int isPositive(const char *message)
{
    int n;
    do
    {
        n = isInt(message);
        if (n < 0)
        {
            printf("Gia tri khong hop le. Vui long nhap 1 so nguyen duong.\n");
        }
    } while (n < 0);
    return n;
}

int isPrime(int n)
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

int count_prime(const int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(a[i]))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n = isPositive("Nhap vao so phan tu cua mang: ");
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("So luong so nguyen to trong mang la: %d", count_prime(a, n));

    return 0;
}