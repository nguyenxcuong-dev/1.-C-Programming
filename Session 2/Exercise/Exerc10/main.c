#include <stdio.h>
#include <math.h>

int main() {

    // Nhập bán kính r của hình tròn. Tính chu vi = 2*π*r và diện tích = π*r^2
    float radius;
    const float pi = 3.14159;

    // Get radius from user
    printf("Enter the radius: ");
    scanf("%f", &radius);

    // Calculation
    float perimeter = 2 * pi * radius;
    float area = pi * pow(radius, 2);

    // Display
    printf("Perimeter = %.2f\n", perimeter);
    printf("Area = %.2f\n", area);

    return 0;
}