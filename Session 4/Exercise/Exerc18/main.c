#include <stdio.h>

int main() {

    // Nhập số nguyên từ 1–7, in ra thứ trong tuần (dùng switch-case)
    int day;
    printf("Enter a day of the week: ");
    scanf("%d", &day);
    // Check condition
    switch (day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6: 
            printf("Satturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid day! Please re-enter.");
            break;
    }

    return 0;
}