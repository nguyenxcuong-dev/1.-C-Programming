#include <stdio.h>

int main() {

    // Nhập vào 2 số nguyên, tính và in ra tổng, hiệu, tích, thương
    int a, b;
    // Get Input
    printf("Enter the value for a: ");
    scanf("%d", &a);
    printf("Enter the value for b: ");
    scanf("%d", &b);
    // Calculation
    int sum = a + b;
    int sub = a - b;
    int mult = a * b;
    float div = (float)a / b;
    // Display
    printf("Sum: %d\n", sum);
    printf("Sub: %d\n", sub);
    printf("Mult: %d\n", mult);
    printf("Div: %.2f\n", div);

    return 0;
}