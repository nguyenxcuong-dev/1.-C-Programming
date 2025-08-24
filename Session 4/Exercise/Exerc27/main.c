#include <stdio.h>
#include <math.h>

int main() {

    // Viết chương trình giải phương trình bậc hai ax^2 + bx + c = 0.	
    float a, b, c, x;
    float delta;
    printf("Nhap vao gia tri cua a: ");
    scanf("%f", &a);
    printf("Nhap vao gia tri cua b: ");
    scanf("%f", &b);
    printf("Nhap vao gia tri cua c: ");
    scanf("%f", &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem.\n");
            }
            else {
                printf("Phuong trinh vo nghiem.\n");
            }
        }
        else {
            x = (-c) / b;
            printf("Phuong trinh co nghiem bac nhat x = %.2f\n", x);
        }
    }
    else {
        delta = b * b - 4 * a * c;
        if (delta < 0) {
            printf("Phuong trinh vo nghiem.\n");
        }
        else if (delta == 0) {
            x = (-b) / (2 * a);
            printf("Phuong trinh co nghiem kep x1 = x2 = %.2f\n", x);
        }
        else {
            float x1 = ((-b) + sqrt(delta)) / (2 * a);
            float x2 = ((-b) - sqrt(delta)) / (2 * a);
            printf("X1 = %.2f\nX2 = %.2f\n", x1, x2);
        }
    }

    return 0;
}