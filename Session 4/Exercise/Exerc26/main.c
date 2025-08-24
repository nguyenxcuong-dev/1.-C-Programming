#include <stdio.h>

int main() {

    // Viết chương trình giải phương trình bậc nhất ax + b = 0
    float a, b, x;
    printf("Nhap gia tri cho a: ");
    scanf("%f", &a);
    printf("Nhap gia tri cho b: ");
    scanf("%f", &b);

    // Calculation
    if (a == 0 && b == 0) {
        printf("Phuong trinh co vo so nghiem.\n");
    }
    else if (a == 0 && b != 0) {
        printf("Phuong trinh vo nghiem.\n");
    }
    else {
        x = (-b) / a;
        printf("Phuong trinh co nghiem la %.2f\n", x);
    }

    return 0;
}