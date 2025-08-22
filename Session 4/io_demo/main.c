#include <stdio.h>

int main() {

    int x = 0;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x % 2 == 0) {
        printf("X is an even number.\n");
    }
    else {
        printf("X is an odd number.\n");
    }

    int day, month;
    printf("Enter day and month: ");
    scanf("%d %d", &day, &month);

    if (day == 2 && month == 9) {
        printf("Go to Ba Dinh Square\n");
    }
    else {
        printf("Go to study.\n");
    }

    return 0;
}