#include <stdio.h>

int main() {

    int min, max, div;
    printf("Enter min: ");
    scanf("%d", &min);
    printf("Enter max: ");
    scanf("%d", &max);
    printf("Enter div: ");
    scanf("%d", &div);

    int i = min;
    if (min <= max) {
        if (div != 0) {
            while (i <= max) {
                if (i % div == 0) {
                    printf("i = %d\n", i);
                }
                i++;
            }
        }
        else {
            printf("Divisor is zero, cannot divide.\n");
        }
    }
    else {
        printf("Invalid range!\n");
    }
    

    return 0;
}