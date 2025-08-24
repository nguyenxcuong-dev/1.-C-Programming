#include <stdio.h>

int main() {

    // Nhập vào một năm, kiểm tra có phải năm nhuận không
    int year;
    // Get Input
    printf("Enter a year: ");
    scanf("%d", &year);
    // Check condition
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        printf("Leap Year.\n");
    }
    else {
        printf("Not a Leap Year.\n");
    }

    return 0;
}