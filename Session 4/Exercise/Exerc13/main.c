#include <stdio.h>

int main() {

    // Nhập vào 3 số, tìm sốl ớn nhất
    float num1, num2, num3;
    // Get Numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Enter the third number: ");
    scanf("%f", &num3);
    // Check condition
    if (num1 > num2 && num1 > num3) {
        printf("%.2f is the biggest number.\n", num1);
    }
    else if (num2 > num1 && num2 > num3) {
        printf("%.2f is the biggest number.\n", num2);
    }
    else {
        printf("%.2f is the biggest number.\n", num3);
    }

    return 0;
}