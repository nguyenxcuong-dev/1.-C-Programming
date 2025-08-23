#include <stdio.h>

int main() {

    // Nhập một số nguyên, kiểm tra số đó có dương hay âm
    int number;
    // Get Number
    printf("Enter a number: ");
    scanf("%d", &number);
    // Check condition
    if (number > 0) {
        printf("Positive Number.\n");
    }
    else {
        printf("Negative Number.\n");
    }

    return 0;
}