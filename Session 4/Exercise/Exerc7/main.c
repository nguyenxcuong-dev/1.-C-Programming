#include <stdio.h>

int main() {

    // Nhập một số nguyên, kiểm tra số đó là chẵn hay lẻ
    int number;
    // Get Number
    printf("Enter a number: ");
    scanf("%d", &number);
    // Check condition
    if (number % 2 == 0) {
        printf("Even number.\n");
    }
    else {
        printf("Odd number.\n");
    }

    return 0;
}