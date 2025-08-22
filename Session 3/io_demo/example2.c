#include <stdio.h>

int main() {

    float r, s;
    const float pi = 3.14159;

    // get input
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Enter height: ");
    scanf("%f", &s);

    // Calculation
    float volume = (pi * r * r * s) / 1000;
    printf("The volume of a cylinder is: %.2f cm3\n", volume);


    return 0;
}