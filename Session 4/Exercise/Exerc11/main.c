#include <stdio.h>

int main() {

    // Nhập vào điểm số(0–10), in ra phân loại: Giỏi (≥8), Khá(6.5–7.9), Trung bình (5–6.4), Yếu (<5)
    float score;
    // Get score 
    printf("Enter your score: ");
    scanf("%f", &score);
    // Check condition
    if (score < 0 || score > 10) {
        printf("Diem khong hop le! Vui long nhap lai.");
    }
    else if (score >= 8) {
        printf("Hoc luc gioi.");
    }
    else if (score >= 6.5 && score <= 7.9) {
        printf("Hoc luc kha");
    }
    else if (score >= 5 && score <= 6.4) {
        printf("Hoc luc trung binh");
    }
    else {
        printf("Hoc luc yeu");
    }

    return 0;
}