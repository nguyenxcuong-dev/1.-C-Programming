#include <stdio.h>

int main() {

    float width, length;

    // Get Input
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