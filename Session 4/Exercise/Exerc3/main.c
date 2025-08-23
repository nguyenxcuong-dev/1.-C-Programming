#include <stdio.h>

int main() {

    // Nhập vào một sốnguyên và in ra bình phương của nó
    int num;
    // Get Number
    printf("Enter a number: ");
    scanf("%d", &num);
    // Calculation & Display
    int square = num * num;
    printf("Square: %d\n", square);

    return 0;
}