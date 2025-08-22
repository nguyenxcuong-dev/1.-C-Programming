#include <stdio.h>

int main() {

    // Nhập một số nguyên. Ép kiểu sang float và in ra màn hình
    int number;

    // Get Input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Display
    printf("Original (int): %d\n", number);
    printf("As float: %.2f", (float)number);

    return 0;
}