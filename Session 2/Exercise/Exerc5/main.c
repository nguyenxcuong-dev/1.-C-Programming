#include <stdio.h>

int main() {

    // Viết chương trình nhập một ký tự từ bàn phím, in ký tự đó và in ra mã ASCII tương ứng
    // Init Variable
    char c;

    // Get Character from user
    printf("Enter a character: ");
    scanf("%c", &c);

    // Display
    printf("Character: %c\n", c);
    printf("ASCII code: %d\n", c);

    return 0;
}