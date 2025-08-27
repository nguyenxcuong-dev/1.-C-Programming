#include <stdio.h>

int main() {

    // Nhập vào một số, đảo ngượ c sốđó(vídụ 1234 → 4321)
    int n, result;
    

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &n);
        int reverseNum = 0;
        while (n != 0) {
            int lastNumber = n % 10;
            reverseNum = reverseNum * 10 + lastNumber;
            n /= 10;
        }
        printf("Reversed Number: %d\n", reverseNum);
    }

    return 0;
}