#include <stdio.h>

int main() {

    // Viết chương trình nhập vào giờ, phút, giây. Kiểm tra tính hợp lệ, sau đó in ra giờ kếtiếp (giờ:phút:giây + 1 giây)
    int hour, minute, sec;
    printf("Nhap gio: ");
    scanf("%d", &hour);
    printf("Nhap phut: ");
    scanf("%d", &minute);
    printf("Nhap giay: ");
    scanf("%d", &sec);

    if (hour < 0 || hour >= 24 || minute < 0 || minute >= 60 || sec < 0 || sec >= 60) {
        printf("Thoi gian khong hop le! Vui long nhap lai.\n");
    }
    else {
        // Them 1 giay va in ra gio ke tiep
        sec++;
        if (sec == 60) {
            sec = 0;
            minute++;
            if (minute == 60) {
                minute = 0;
                hour++;
                if (hour == 24) {
                    hour = 0;
                }
            }
        }
        printf("Thoi gian sau cap nhat la: %02d:%02d:%02d\n", hour, minute, sec);
    }

    return 0;
}