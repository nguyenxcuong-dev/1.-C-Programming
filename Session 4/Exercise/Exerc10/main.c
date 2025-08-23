#include <stdio.h>

int main() {

    // Nhập vào hai sốnguyên, in ra sốlớn hơn
    int a, b;
    // Get Input
    printf("Enter the value for a: ");
    scanf("%d", &a);
    printf("Enter the value for b: ");
    scanf("%d", &b);
    // Check condition
    if (a > b) {
        printf("%d greater than %d\n", a, b);
    }
    else {
        printf("%d greater than %d\n", b, a);
    }

    return 0;
}