#include <stdio.h>

int main()
{

    // Nhập vào n, in ra tổng các sốchẵn từ 1 đến n
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalid number.");
    }
    else
    {
        int result = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                result += i;
            }
        }
        printf("Summary: %d\n", result);
    }

    return 0;
}