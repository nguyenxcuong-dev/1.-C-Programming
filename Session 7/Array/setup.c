#include<stdio.h>
#include<math.h>
int thuanghich(int x) {
        int temp = x;
        int y = 0;
        int du;
        while(x != 0) {
            du = x % 10;
            y = y * 10 + du;
            x = x / 10;
        }
        if(y == temp) 
        return 1;
        else {
            return 0;
        }
}
int main() {
    int n;
    printf("nhap so vao day:\n");
    scanf("%d", &n);
    int kq = thuanghich(n);
    if(kq == 1) {
        printf("%d la so thuan nghich", n);
    }
    else {
        printf("%d khong phai la so thuan nghich", n);
    }

return 0;
}
