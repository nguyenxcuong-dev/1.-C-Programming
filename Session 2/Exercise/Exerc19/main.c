#include <stdio.h>

int main() {

    // Nhập một số nguyên. In ra dạng nhị phân (gợi ý: chia số liên tiếp cho 2 và lấy dư)
    int number;

    // Get input
    printf("Enter a number (0 - 255): ");
    scanf("%d", &number);

    int bit1 = number % 2; number /= 2;
    int bit2 = number % 2; number /= 2;
    int bit3 = number % 2; number /= 2;
    int bit4 = number % 2; number /= 2;
    int bit5 = number % 2; number /= 2;
    int bit6 = number % 2; number /= 2;
    int bit7 = number % 2; number /= 2;
    int bit8 = number % 2; 

    printf("Binary: %d%d%d%d%d%d%d%d\n", bit8, bit7, bit6, bit5, bit4, bit3, bit2, bit1);

    return 0;
}