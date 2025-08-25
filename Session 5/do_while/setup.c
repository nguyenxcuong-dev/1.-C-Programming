#include <stdio.h>

int main()
{
    int i = 1;
    do {
        if (i % 5 == 0) {
            printf("i = %d\n", i);
        }
        i++;
    }
    while (i <= 100);
    return 0;
}