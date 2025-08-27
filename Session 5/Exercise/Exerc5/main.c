#include <stdio.h>

int main()
{

    // Nhập vào n, tính tổng các số từ 1 đến n
    int n;
    int summary = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Summary: 0\n");
        return 0;
    }
    else
    {
        summary = n * (n + 1) / 2;
        printf("Summary: %d\n", summary);
    }
}