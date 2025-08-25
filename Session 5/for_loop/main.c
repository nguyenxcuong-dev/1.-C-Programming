#include <stdio.h>

int main() {
    int min, max;
    printf("Nhap vao min: ");
    scanf("%d", &min);
    printf("Nhap vao max: ");
    scanf("%d", &max);

    for (int i = min; i <= max; i++ ) {
        if (i % 3 == 0) {
            printf("i = %d\n", i);
        }
    }

    return 0;
}