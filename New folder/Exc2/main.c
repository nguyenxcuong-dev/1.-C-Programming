#include <stdio.h>

int isInt (const char *notification)
{
    int value, check;
    while (1)
    {
        printf("%s", notification);
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

int positiveNumber (const char *notification)
{
    int n;
    do 
    {
        n = isInt(notification);
        if (n < 0)
        {
            printf("Gia tri khong hop le. Vui long nhap so nguyen duong\n");
        }
    }
    while (n < 0);
    return n;
}

double powerBill(int kwh)
{
    int k1 = 1200, k2 = 1500, k3 = 1800;
    if (kwh <= 50)
    {
        return 50 * k1;
    }
    else if (kwh <= 100)
    {
        return 50 * k1 + (kwh-50) * k2;
    }
    else 
    {
        return 50 * k1 + (kwh-50) * k2 + (kwh - 100) * k3;
    }
}

int main()
{
    int n;
    n = positiveNumber("Nhap vao so dien da tieu thu: ");
    printf("Ban da su dung %d kwh. So tien dien can tra la %.2lf VND.\n", n, powerBill(n));
    return 0;
}