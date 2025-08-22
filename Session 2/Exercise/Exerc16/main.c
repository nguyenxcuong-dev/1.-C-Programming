#include <stdio.h>

int main() {

    // Nhập một số nguyên 1–7. In ra thứ tương ứng (1=Chủ nhật, 2=Thứ hai,…,7=Thứ bảy)
    int number;

    // Get Input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Condition
    switch (number)
    {
    case 1:
        printf("1 = Monday");
        break;
    case 2:
        printf("2 = Tuesday");
        break;
    case 3:
        printf("3 = Wednesday");
        break;
    case 4:
        printf("4 = Thursday");
        break;
    case 5:
        printf("5 = Friday");
        break;
    case 6:
        printf("6 = Saturday");
        break;
    case 7 :
        printf("7 = Sunday");
        break;
    default:
        printf("Invalid day");
        break;
    }

    return 0;
}