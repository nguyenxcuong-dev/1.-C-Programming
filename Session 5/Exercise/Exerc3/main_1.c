#include <stdio.h>

int main()
{

    // Mở rộng cho các bảng cửu chương khác
    int i, j = 1;
    printf("Enter a number: ");
    scanf("%d", &i);

    if (i <= 0)
    {
        printf("Invalid number! Please re-enter.");
        return 0;
    }
    else
    {
        do
        {
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        } while (j <= 10);
    }

    return 0;
}