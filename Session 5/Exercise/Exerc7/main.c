#include <stdio.h>

int main()
{

    // Nhập vào n, in ra các sốlẻnhỏ hơn n
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
        for (int i = 0; i < n; i++)
        {
            if (i % 2 != 0)
            {
                printf("i = %d\n", i);
            }
        }
    }

    return 0;
}