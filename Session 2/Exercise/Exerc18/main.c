#include <stdio.h>

int main() {

    // Nhập một số nguyên. Kiểm tra và in ra số đó là số chẵn hay số lẻ
    int number;

    // Get input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Conditional Statament
    if (number % 2 == 0) {
        printf("%d is an evan number.\n", number);
    }else {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}