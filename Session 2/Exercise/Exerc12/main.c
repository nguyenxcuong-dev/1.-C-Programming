#include <stdio.h>

int main() {

    // Nhập một số nguyên có 3 chữ số. Tách các chữ số và tính tổng. Ví dụ: 123 → 1+2+3=6
    int number;

    // Get Input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculation
    int firstNumber = number / 100;
    int secondNumber = number / 10 % 10;
    int thirdNumber = number % 10;

    int result = firstNumber + secondNumber + thirdNumber;

    printf("Result: %d\n", result);

    return 0;
}