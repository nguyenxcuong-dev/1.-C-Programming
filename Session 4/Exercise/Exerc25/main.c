#include <stdio.h>

int main() {

    // Nhập vào ngày, tháng, năm. Kiểm tra ngày tháng năm có hợp lệ không
    int day, month, year;
    int dayInMonth;
    printf("Nhap vao ngay: ");
    scanf("%d", &day);
    printf("Nhap vao thang: ");
    scanf("%d", &month);
    printf("Nhap vao nam: ");
    scanf("%d", &year);

    // Kiem tra dieu kien thang va nam
    if (month < 1 || month > 12 || year <= 0) {
        printf("Ngay %d/%d/%d khong hop le.\n", day, month, year);
    }
    else {
        switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dayInMonth = 31;
            break;
        case 4: case 6: case 9: case 11:
            dayInMonth = 30;
            break;
        case 2:
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
                dayInMonth = 29;
            }
            else {
                dayInMonth = 28;
            }
            break;
        default:
            printf("Khong hop le!");
            break;
        }       

        // Kiem tra ngay hop le
        if (day >= 1 && day <= dayInMonth) {
            printf("Ngay %d/%d/%d hop le.\n", day, month, year);
        }
        else {
            printf("Ngay %d/%d/%d khong hop le.\n", day, month, year);
        }
    }
    

    return 0;
}