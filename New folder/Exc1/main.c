#include <stdio.h>

double c_to_f(double c)
{
    return c * 9/5 + 32;
}

double f_to_c(double f)
{
    return (f - 32) * 5/9;
}

int isFever(double c)
{
    int is_fever = 0;
    if (c >= 37.5)
    {
        is_fever = 1;
    }
    return is_fever;
}

int main() 
{
    int choice;
    double c, f;
    printf("Enter your choice (0 - 2 = > C - F): ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Nhap vao nhiet do Celsius: ");
            scanf("%lf", &c);
            printf("%.2lf C = %.2lf F\n", c, c_to_f(c));
            printf("Nhiet do co the cua ban la %.2lf C\n", c);
            if (isFever)
            {
                printf("Canh bao sot cao.\n");
            }
            else 
            {
                printf("Nhiet do co the binh thuong.\n");
            }
            break;
        case 2:
            printf("Nhap vao nhiet do Fahrenheit: ");
            scanf("%lf", &f);
            printf("%.2lf F = %.2lf C\n", f, f_to_c(f));
            break;
        case 0:
            return 0;
    }
    return 0;
}