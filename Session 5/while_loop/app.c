#include <stdio.h>

int main() {

    int min, max;
    printf("Enter min: ");
    scanf("%d", &min);
    printf("Enter max: ");
    scanf("%d", &max);

    int i = min;
    if (min <= max) {
        while (i <= max) {
            if (i % 3 == 0) {
                printf("i = %d\n", i);
            }
            i++;
        }
    }
    else {
        printf("Invalid range\n");
    }

    return 0;
}