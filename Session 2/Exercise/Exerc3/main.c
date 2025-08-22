#include <stdio.h>

int main() {

    // Viết chương trình nhập một số nguyên từ bàn phím, sau đó in ra màn hình số vừa nhập
    // Init Variable
    int number;

    // Get Input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Display
    printf("Number: %d", number);

    return 0;
}