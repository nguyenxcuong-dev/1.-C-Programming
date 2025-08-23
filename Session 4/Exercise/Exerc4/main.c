#include <stdio.h>

int main() {

    // Nhập vào bán kính hình tròn, tính và in ra chu vi và diện tích (lấy π = 3.14)
    float radius;
    const float pi = 3.14;
    // Get Radius
    printf("Enter the radius: ");
    scanf("%f", &radius);
    // Calculation
    float perimater = 2 * pi * radius;
    float area = pi * radius * radius;
    // Display
    printf("Perimeter: %.2f cm\n", perimater);
    printf("Area: %.2f cm^2\n", area);

    return 0;
}