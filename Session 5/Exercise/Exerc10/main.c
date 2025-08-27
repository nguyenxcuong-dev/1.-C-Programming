#include <stdio.h>

int main() {

    // Nhập vào n, tính tổng các số lẻtừ 1 đến n
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Nếu n là số âm
    if (n <= 0) {
        int summary = 0;
        for(int i = 0; i >= n; i--) {
            if (i % 2 != 0) {
                summary += i;
            }
        }
        printf("Summary: %d", summary);
    }
    // Nếu n là số dương
    else {
        int summary = 0;
        for (int i = 0; i <= n; i++) {
            if (i % 2 != 0) {
                summary += i;
            }
        }
        printf("Summary: %d\n", summary);
    }

    return 0;
}