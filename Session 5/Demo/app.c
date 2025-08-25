#include <stdio.h>

int main() {

    int min, max, randomNumber;
    printf("Nhap vao min: ");
    scanf("%d", &min);
    printf("Nhap vao max: ");
    scanf("%d", &max);
    printf("Nhap vao so ngau nhien: ");
    scanf("%d", &randomNumber);

    if (min <= max) {
        if (randomNumber != 0) {
            for (int i = min; i <= max; i++) {
                if (i % randomNumber == 0) {
                    printf("i = %d\n", i);
                }
            }
        }
        else {
            printf("Divisor is zero, cannot divide.\n");
        }
    }
    else {
        printf("Invalid range! Please enter new values.");
    }

    

    return 0;
}