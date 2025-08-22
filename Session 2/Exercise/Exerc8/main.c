#include <stdio.h>

int main() {

    // Nhập 3 số thực a, b, c. Tính trung bình cộng = (a+b+c)/3 và in ra kết quả
    // Init 
    float a, b, c;

    // Get Input from users
    printf("Enter the value for a: ");
    scanf("%f", &a);
    printf("Enter the value for b: ");
    scanf("%f", &b);
    printf("Enter the value for c: ");
    scanf("%f", &c);

    // Result
    float avg = (a + b + c) /3;
    printf("Average = %.2f", avg);

    return 0;
}