#include <stdio.h>

int main() {

    // Nhập cân nặng (kg) và chiều cao (m). Tính BMI = cân nặng / (chiều cao^2). In kết quả và phân loại: <18.5 gầy, 18.5–24.9 bình thường, 25–29.9 thừa cân, >=30 béo phì
    float weight, height;

    // Get Input
    printf("Enter your weight: ");
    scanf("%f", &weight);
    printf("Enter your height: ");
    scanf("%f", &height);

    // Calculation
    float bmi = weight / (height * height);
    printf("BMI: %.2f\n", bmi);

    if (bmi < 18.5){
        printf("Skinny");
    }else if (bmi >= 18.5 && bmi <= 24.9){
        printf("Normal");
    }else if (bmi >= 25 && bmi <= 29.9){
        printf("Overweight");
    }else {
        printf("Obese");
    }

    return 0;
}