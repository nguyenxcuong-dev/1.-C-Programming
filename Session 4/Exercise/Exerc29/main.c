#include <stdio.h>
#include <math.h>

int main() {

    // Viết chương trình nhập 3 cạnh của tam giác, tính diện tích theo công thức Heron
    float a, b, c;
    printf("Nhap canh a: ");
    scanf("%f", &a);
    printf("Nhap canh b: ");
    scanf("%f", &b);
    printf("Nhap canh c: ");
    scanf("%f", &c);

    // Cac canh phai lon hon 0
    // Tong 2 canh phai lon hon canh con lai
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        printf("Ba canh tren khong tao thanh 1 tam giac.\n");
    }
    else {
        // Tinh chu vi / 2
        float perimeter = (a + b + c) / 2;
        // Ap dung cong thuc Heron
        float area = sqrt(perimeter * (perimeter - a) * (perimeter - b) * (perimeter - c));

        printf("Dien tich cua tam giac la: %.2fcm2\n", area);
    }

    return 0;
}