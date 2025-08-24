#include <stdio.h>

int main() {

    // Nhập sốnguyên từ 1–3, in ra tên cấp học (1: Tiểu học, 2: THCS, 3: THPT)
    int level;
    printf("Enter a number: ");
    scanf("%d", &level);
    // Check conditions
    switch (level) {
        case 1:
            printf("1: Tieu hoc.\n");
            break;
        case 2:
            printf("2: THCS.\n");
            break;
        case 3:
            printf("3: THPT.\n");
            break;
        default:
            printf("Invalid value! Please enter from 1 - 3.\n");
            break;
    }

    return 0;
}