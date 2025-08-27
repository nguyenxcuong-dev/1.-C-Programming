#include <stdio.h>

int main()
{

    // Nhập vào n, tính tích các số từ 1 đến n
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid Number.\n");
        return 0;
    }
    else
    {
        int result = 1;
        for (int i = 1; i <= n; i++)
        {
            result *= i;
        }
        printf("Result: %d\n", result);
    }

    return 0;
}