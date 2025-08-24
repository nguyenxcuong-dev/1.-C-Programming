#include <stdio.h>

int main() {

    // Nhập vào số nguyên n, kiểm tra n có phải bội số của 3 và 5 không
    int number;
    // Get input from user
    printf("Enter a number: ");
    scanf("%d", &number);
    // Check condition
    if (number % 3 == 0 && number % 5 == 0) {
        printf("%d la boi so cua 3 va 5.\n", number);
    }
    else {
        printf("%d khong phai la boi so cua 3 va 5.\n", number);
    }

    return 0;
}