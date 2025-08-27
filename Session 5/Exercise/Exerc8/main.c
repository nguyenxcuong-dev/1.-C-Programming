#include <stdio.h>

int main()
{

    // Nhập vào n, in ra bảng cửu chương n (1 đến 10)
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0 || n > 9)
    {
        printf("Invalid number.");
        return 0;
    }
    else
    {
        for (int i = 1; i < 10; i++)
        {
            printf("%d x %d = %d\n", n, i, n * i);
        }
    }

    return 0;
}