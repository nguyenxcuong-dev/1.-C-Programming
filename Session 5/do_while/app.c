#include <stdio.h>

int main()
{

    int min, max, div;

    while (1)
    {
        printf("Enter min: ");
        scanf("%d", &min);
        printf("Enter max: ");
        scanf("%d", &max);
        printf("Enter div: ");
        scanf("%d", &div);

        int i = min;
        if (min <= max)
        {

            if (div != 0)
            {

                do
                {
                    if (i % div == 0)
                    {
                        printf("i = %d\n", i);
                    }
                    i++;
                } while (i <= max);
            }
            else
            {
                printf("Divisor is zero! Cannot divide.\n");
            }
        }
        else
        {
            printf("Invalid range!\n");
        }
    }

    return 0;
}