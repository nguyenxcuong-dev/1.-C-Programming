#include <stdio.h>

int main()
{

    // In ra tất cả các sốnguyên tốnhỏ hơn n
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        int isTrue = 1;

        if (i > 2 && i % 2 == 0)
        {
            isTrue = 0;
        }
        else
        {
            for (int j = 3; j * j <= i; j += 2)
            {
                if (i % j == 0)
                {
                    isTrue = 0;
                    break;
                }
            }
        }

        if (isTrue == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}