#include <stdio.h>

int main() {

    // Nhập nhiệt độ (°C). Đổi sang °F = C*9/5+32 và K = C+273.15. In ra cả 3 giá trị
    // Init Var
    float celsius;
    const float K = 273.15;

    // Get Input from users
    printf("Enter the temperature in celsius: ");
    scanf("%f", &celsius);

    // Convert
    float fahrenheit = celsius * 9/5 + 32;
    float kelvin = celsius + K;

    printf("Celsius: %.2f C\n", celsius);
    printf("Fahrenheit: %.2f F\n", fahrenheit);
    printf("Kelvin: %.2f K\n", kelvin);

    return 0;
}