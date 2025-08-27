#include <stdio.h>

int main()
{

    // Nhập vào n, kiểm tra n có phải sốnguyên tốkhông
    int n;
    int isTrue = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        isTrue = 0;
    }
    else if (n == 2)
    {
        isTrue = 1;
    }
    else if (n % 2 == 0)
    {
        isTrue = 0;
    }
    else
    {
        for (int i = 3; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                isTrue = 0;
                break;
            }
        }
    }

    if (isTrue == 1)
    {
        printf("%d la so nguyen to.\n", n);
    }
    else
    {
        printf("%d khong phai la so nguyen to.\n", n);
    }

    return 0;
}