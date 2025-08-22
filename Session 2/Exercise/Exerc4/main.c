#include <stdio.h>

int main() {

    // Viết chương trình nhập một số thực float từ bàn phím và in ra màn hình với 2 chữ số thập phân
    // Init Variable
    float gpa;

    // Get Input
    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    // Display
    printf("Your GPA: %.2f", gpa);

    return 0;
}