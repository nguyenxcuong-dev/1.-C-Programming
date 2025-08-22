#include <stdio.h>

int main() {

    // Viết chương trình nhập 2 số nguyên a, b. Đổi chỗ giá trị của chúng bằng cách dùng biến trung gian
    // Init a & b % temp
    int a, b, temp;

    // Get Input from user
    printf("Enter the value for a: ");
    scanf("%d", &a);

    printf("Enter the value for b: ");
    scanf("%d", &b);

    // Change value
    temp = a;
    a = b;
    b = temp;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}