#include <stdio.h>

int main() {

    // Nhập vào ký tự, kiểm tra có phải nguyên âm (a, e, i, o, u) hay phụ âm
    char letter;
    printf("Enter a character: ");
    scanf("%c", &letter);
    // Check condition
    switch (letter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c la nguyen am.\n", letter);
            break;
        default:
            printf("%c la phu am", letter);
            break;
    }

    return 0;
}