#include <stdio.h>

int main() {

    // Nhập vào n, đếm xem n có bao nhiêu chữ số
    int n, temp, count = 0;
    
    do {
        printf("Nhap vao 1 so nguyen duong: ");
        scanf("%d", &n);

        if (n < 0) {
            printf("So phai lon hon 0, vui long nhap lai.\n");
        }
    }
    while (n < 0);

    temp = n;
    if (n == 0) {
        count = 1;
    }
    while (temp != 0) {
        count++;
        temp /= 10;
    }
    printf("So %d co %d chu so.\n", n, count);

    return 0;
}