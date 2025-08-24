#include <stdio.h>

int main() {

    // Nhập vào số nguyên từ 1–4, in ra mùa trong năm
    int season;
    printf("Enter a number: ");
    scanf("%d", &season);
    // Check conditions
    switch (season) {
        case 1:
            printf("Spring");
            break;
        case 2:
            printf("Summer");
            break;
        case 3:
            printf("Autumn");
            break;
        case 4:
            printf("Winter");
            break;
        default:
            printf("There are only 4 seasons in a year! Please re-enter (1 - 4).\n");
            break;
    }

    return 0;
}