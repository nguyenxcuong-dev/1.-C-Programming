#include <stdio.h>

int main() {

    // Nhập hai số nguyên a, b. In ra thương a/b (lấy phần nguyên) và số dư a%b
    int a, b;

    // Get Input from users
    printf("Enter the value for a: ");
    scanf("%d", &a);
    printf("Enter the value for b: ");
    scanf("%d", &b);

    // Calculation
    int division = a / b;
    int modulo = a % b;

    // Display
    printf("Division: %d\n", division);
    printf("Modulo: %d\n", modulo);

    return 0;
}