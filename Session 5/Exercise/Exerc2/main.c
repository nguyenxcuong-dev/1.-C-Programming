#include <stdio.h>

int main()
{

    // In ra các sốchẵn từ 1 đến 100 (dùng while)
    int i = 0;
    while (i <= 100)
    {
        if (i % 2 == 0)
        {
            printf("i = %d\n", i);
        }
        i++;
    }

    return 0;
}