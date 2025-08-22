#include <stdio.h>

int main() {

    // Nhập số tiền VNĐ. Đổi sang USD với tỉ giá 1 USD = 25,000 VNĐ. In ra kết quả
    float vnd;

    // Get Input
    printf("Enter the amount you want to exchange: ");
    scanf("%f", &vnd);

    // Convert
    float usd = vnd / 25000;

    // Result
    printf("%.1f VND equals %.2f USD.\n", vnd, usd);

    return 0;
}