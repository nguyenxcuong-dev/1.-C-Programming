#include <stdio.h>

int main() {

    // Nhập vào tuổi của học sinh, in ra “Đủ tuổi vào lớp 10” nếu tuổi từ 15 trở lên
    int age;
    // Get Input
    printf("Enter your age: ");
    scanf("%d", &age);
    // Check condition
    if (age <= 0 || age > 120) {
        printf("Tuoi khong hop le! Vui long nhap lai.");
    }
    else if (age >= 15) {
        printf("Ban da du tuoi de vao lop 10.");
    }
    else {
        printf("Ban chua du tuoi de vao lop 10.");
    }

    return 0;
}