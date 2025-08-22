#include <stdio.h>
#include <string.h>

int main() {

    // Nhập thông tin sinh viên gồm: tên (chuỗi), tuổi (int), điểm trung bình (float). In ra theo định dạng: Tên:…, Tuổi:…, Điểm:…
    char name[30];
    int age;
    float avgScore;

    // Get Input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
    printf("Enter your age: ");
    scanf(" %d", &age);
    printf("Enter your average score: ");
    scanf(" %f", &avgScore);

    // Display
    printf("Name: %s, Age: %d, Average Score: %.2f", name, age, avgScore);

    return 0;
}