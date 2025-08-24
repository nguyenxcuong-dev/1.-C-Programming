#include <stdio.h>

int main() {

    // Nhập số nguyên có 2 chữ số, in ra cách đọc (vídụ 23 → “hai mươi ba”)
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    // Check conditions
    if (number < 10 && number > 99) {
        printf("Invalid number! Please re-enter.\n");
    }
    
    int num1 = number / 10;
    int num2 = number % 10;

    // Num[0]
    switch (num1) {
        case 0:
            break;
        case 1:
            printf("Muoi ");
            break;
        case 2:
            printf("Hai muoi ");
            break;
        case 3:
            printf("Ba muoi ");
            break;
        case 4: 
            printf("Bon muoi ");
            break;
        case 5:
            printf("Nam muoi ");
            break;
        case 6:
            printf("Sau muoi ");
            break;
        case 7: 
            printf("Bay muoi ");
            break;
        case 8:
            printf("Tam muoi ");
            break;
        case 9: 
            printf("Chin muoi ");
    }

    // Num[1]
    switch (num2) {
        case 0:
            break;
        case 1:
            printf("mot\n");
            break;
        case 2:
            printf("hai\n");
            break;
        case 3:
            printf("ba\n");
            break;
        case 4: 
            printf("bon\n");
            break;
        case 5:
            printf("nam\n");
            break;
        case 6:
            printf("sau\n");
            break;
        case 7:
            printf("bay\n");
            break;
        case 8:
            printf("tam\n");
            break;
        case 9:
            printf("chin\n");
    }

    return 0;
}