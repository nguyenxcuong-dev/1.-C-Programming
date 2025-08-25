#include <stdio.h>

int main()
{

    int min, max;

    while (1)
    {
        printf("Enter min: ");
        scanf("%d", &min);
        printf("Enter max: ");
        scanf("%d", &max);

        int i = min;
        if (min <= max)
        {
            do
            {
                if (i % 3 == 0)
                {
                    printf("i = %d\n", i);
                }
                i++;
            } while (i <= max);
        }
        else
        {
            printf("Invalid range!\n");
        }
    }

    return 0;
}