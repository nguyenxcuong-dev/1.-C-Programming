#include <stdio.h>

int main() {

    // Nhập chiều dài và chiều rộng hình chữ nhật. Tính chu vi = 2*(dài+rộng) và diện tích = dài*rộng
    // Init Width & Length
    float width, length;

    // Get Input from Users
    printf("Enter the width: ");
    scanf("%f", &width);

    printf("Enter the length: ");
    scanf("%f", &length);

    // Calculation
    float perimeter = 2 * (width + length);
    float area = width * length;

    printf("Perimeter: %.2f\n", perimeter);
    printf("Area: %.2f\n", area);

    return 0;
}