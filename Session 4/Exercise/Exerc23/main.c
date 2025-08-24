#include <stdio.h>

int main() {

    // Nhập số tiền điện (kWh). Tính tiền điện theo quy tắc: 0–50 kWh: 1.700 đ/kWh; 51–100 kWh: 2.000 đ/kWh; >100 kWh: 2.500 đ/kWh
    int electricity;
    float expense;
    printf("Enter the amount of electricity consumed: ");
    scanf("%d", &electricity);
    // Check condition
    if (electricity < 0) {
        printf("Invalid value! Please re-enter.\n");
    }
    else if (electricity <= 50) {
        expense = 1700 * electricity;
        printf("You have consumed %d kwh, the amount to pay is %.2f\n", electricity, expense);
    }
    else if (electricity <= 100) {
        expense = (1700 * 50) + (2000 * (electricity - 50));
        printf("You have consumed %d kwh, the amount to pay is %.2f\n", electricity, expense);
    }
    else {
        expense = (1700 * 50) + (2000 * 50) + (2500 * (electricity - 100));
        printf("You have consumed %d kwh, the amount to pay is %.2f\n", electricity, expense);
    }
    return 0;
}