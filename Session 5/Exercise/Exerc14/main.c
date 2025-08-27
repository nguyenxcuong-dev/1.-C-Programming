#include <stdio.h>

int main()
{

    // Nhập vào n, tính giai thừa n!
    int n;

    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &n);

        long long result = n;
        if (n < 0)
        {
            printf("Invalid number.\n");
        }
        else if (n == 0 || n == 1)
        {
            result = 1;
            printf("%d! = %d\n", n, result);
        }
        else
        {
            for (int i = n - 1; i > 0; i--)
            {
                result *= i;
            }
            printf("%d! = %lld\n", n, result);
        }
    }

    return 0;
}