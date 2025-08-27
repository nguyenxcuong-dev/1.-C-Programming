#include <stdio.h>

int main()
{

    // In ra bảng cửu chương 5 (dùng do while)
    int i = 5, j = 1;
    do
    {
        printf("%d x %d = %d\n", i, j, i * j);
        j++;
    } while (j <= 10);

    return 0;
}