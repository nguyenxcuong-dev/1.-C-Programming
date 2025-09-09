#include <stdio.h>

double isNumber (const char *message)
{
    int check;
    double value;
    do 
    {
        printf("%s", message);
        check = scanf("%lf", &value);
        if (check != 1) 
        {
            printf("Invalid value! Please enter a number.\n");
            while (getchar() != '\n');
        }
    } while (check != 1);
    while (getchar() != '\n');
    return value;
}

double isPositive (const char *message)
{
    double n;
    do 
    {
        n = isNumber(message);
        if (n < 0)
        {
            printf("Invalid number! Please enter a positive number.\n");
        }
    }
    while (n < 0);
    return n;
}

double simpleInterest(double P, double r_percent, int year)
{
    return P + P*(r_percent /100)*year;
}

int main()
{
    double p = isPositive("Nhap vao so tien ban muon gui: ");
    double r = isPositive("Nhap vao lai suat cho 1 nam (%): ");
    int year = (int) isPositive("Ban muon gui tien trong bao lau (nam): ");
    
    printf("So tien ban muon gui la: %.2f VND\n", p);
    printf("Lai suat 1 nam: %.2f%%\n", r);
    printf("So tien ban nhan duoc sau %d nam la: %.2f VND\n", year, simpleInterest(p, r, year));
    return 0;
}