#include <stdio.h>

int main() {

    // Nhập ngày, tháng, năm từ bàn phím. In ra theo định dạng dd/mm/yyyy
    int day, month, year;

    // Get Input from users
    printf("Enter the date of birth: ");
    scanf("%d", &day);
    printf("Enter the month of birth: ");
    scanf("%d", &month);
    printf("Enter the year of birth: ");
    scanf("%d", &year);

    // Display
    printf("Your date of birth: %d/%d/%d.\n", day, month, year);

    return 0;
}