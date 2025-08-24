#include <stdio.h>

int main() {

    // Nhập vào 3 số, kiểm tra cótạo thành tam giác không
    float a, b, c;
    // Get Input
    printf("Nhap vao canh a: ");
    scanf("%f", &a);
    printf("Nhap vao canh b: ");
    scanf("%f", &b);
    printf("Nhap vao canh c: ");
    scanf("%f", &c);
    // Check condition
    if (a > 0 && b > 0 && c > 0 &&
        (a + b > c) && 
        (a + c > b) &&
        (b + c > a)) {
        printf("Ba canh nay tao thanh 1 tam giac.");
    }
    else {
        printf("Ba canh nay khon tao thanh 1 tam giac.");
    }

    return 0;
}