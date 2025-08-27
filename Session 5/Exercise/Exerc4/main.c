#include <stdio.h>

int main()
{

    // Nhập vào n, in ra các sốtừ 1 đến n
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number.\n");
        return 0;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            printf("i = %d\n", i);
        }
    }

    return 0;
}