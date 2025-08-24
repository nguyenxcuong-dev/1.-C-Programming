#include <stdio.h>

int main() {

    // Viết chương trình nhập vào sốnguyên có 3 chữ số, kiểm tra xem có phải sốđối xứng (palindrome) hay không (vídụ 121, 343)
    int number;
    printf("Nhap vao 1 so co 3 chu so: ");
    scanf("%d", &number);

    // Tach so dau va so cuoi
    int num1 = number / 100;
    int num3 = number % 10;

    // Kiem tra xem so dau va so cuoi co bang nhau k
    if (num1 == num3) {
        printf("%d la so doi xung.", number);
    }
    else {
        printf("%d khong phai la so doi xung.\n", number);
    }

    return 0;
}