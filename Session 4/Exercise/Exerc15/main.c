#include <stdio.h>

int main() {

    // Nhập vào chiều dài và chiều rộng, tính diện tích hình chữ nhật. Nếu diện tích > 100 thì in ra “Hình lớn”, ngượ c lại in ra “Hình nhỏ”.
    float width, length;
    // Get Input
    printf("Enter the width: ");
    scanf("%f", &width);
    printf("Enter the lengt: ");
    scanf("%f", &length);
    // Calculation
    float area = width * length;
    printf("Area: %.2f\n", area);
    // Check condition
    if (area > 100) {
        printf("Hinh lon.");
    }
    else {
        printf("Hinh nho.");
    }

    return 0;
}