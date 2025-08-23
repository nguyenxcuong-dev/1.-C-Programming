#include <stdio.h>

int main() {

    // Nhập một số nguyên, kiểm tra số đó có chia hết cho 5 không
    int number;
    // Get Number
    printf("Enter a number: ");
    scanf("%d", &number);
    // Check condition
    if (number % 5 == 0) {
        printf("Divisible by 5");
    }
    else {
        printf("Not divisible by 5");
    }

    return 0;
}