#include <stdio.h>

int main()
{

    // Nhập vào n, in ra dãy Fibonacci gồm n sốhạng
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    long long num1 = 0, num2 = 1, nextNumber;
    if (n <= 0)
    {
        printf("Invalid Number.\n");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%lld ", num1);
            nextNumber = num1 + num2;
            num1 = num2;
            num2 = nextNumber;
        }
    }

    return 0;
}