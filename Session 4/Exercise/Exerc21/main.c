#include <stdio.h>

int main() {

    // Viết chương trình nhập vào điểm 3 môn Toán, Văn, Anh. Tính điểm trung bình và in ra kết quả xếp loại học lự c
    float a, b, c;
    printf("Nhap vao diem Toan: ");
    scanf("%f", &a);
    printf("Nhap vao diem Van: ");
    scanf("%f", &b);
    printf("Nhap vao diem Tieng Anh: ");
    scanf("%f", &c);

    // Calculation & Check conditions
    float avgScore = (a + b + c) / 3;
    printf("Diem Trung Binh: %.2f\n", avgScore);
    if (avgScore >= 8.5) {
        printf("Hoc luc gioi.\n");
    }
    else if (avgScore >= 6.5 && avgScore <= 8.4) {
        printf("Hoc luc kha.\n");
    }
    else if (avgScore >= 5.0 && avgScore <= 6.4) {
        printf("Hoc luc trung binh.\n");
    }
    else {
        printf("Hoc luc yeu!\n");
    }

    return 0;
}