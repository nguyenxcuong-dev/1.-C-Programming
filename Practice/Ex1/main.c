#include <stdio.h>


// Ham nhap so nguyen;
int isInt(const char *message)
{
    int value, check;
    while (1)
    {
        printf("%s", message);
        check = scanf("%d", &value);
        if (check == 1)
        {
            while (getchar() != '\n');
            return value;
        }
        else
        {
            printf("Invalid value! Please enter a number.\n");
            while (getchar() != '\n');
        }
    }
}

// Ham nhap so thuc;
double isDouble(const char *message)
{
    double value;
    int check;
    while (1)
    {
        printf("%s", message);
        check = scanf("%lf", &value);
        if (check == 1)
        {
            while (getchar() != '\n');
            return value;
        }
        else
        {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n');
        }
    }
}

// C to F;
double c_to_f(double c)
{
    return c * 9 / 5 + 32;
}

// F to C;
double f_to_c(double f)
{
    return (f - 32) * 5 / 9;
}

// Kiem tra nhiet do co the
int is_fever(double c)
{
    int isFever = 0;
    if (c >= 37.5 && c <= 40)
    {
        isFever = 1;
    }
    else if (c < 35)
    {
        isFever = 2;
    }
    else if (c > 40)
    {
        isFever = 3;
    }
    return isFever;
}

// In ra canh bao;
void printFever(double c)
{
    if (is_fever(c) == 1)
    {
        printf("Nhiet do co the cua ban la %.2lfC. Ban dang bi sot.\n", c);
    }
    else if (is_fever(c) == 2)
    {
        printf("Nhiet do co the cua ban la %.2lfC. Qua thap.\n", c);
    }
    else if (is_fever(c) == 3)
    {
        printf("Nhiet do co the cua ban la %.2lfC. Qua cao.\n", c);
    }
    else
    {
        printf("Nhiet do co the cua ban la %.2lfC. Binh Thuong.\n", c);
    }
}

int main()
{
    double c, f;
    int choice;
    printf("CHOICE: \n");
    printf("0. Exit.\n");
    printf("1. C to F & Check Fever.\n");
    printf("2. F to C & Check Fever.\n");
    while (1)
    {
        choice = isInt("Enter your choice (0 - 2): ");

        switch (choice)
        {
        case 0:
            printf("Exit the program.\n");
            return 0;
        case 1:
            printf("You choose option 1. C to F & check fever.\n");
            c = isDouble("Enter the temperature in Celsius: ");
            printf("F = %.2lfF\n", c_to_f(c));
            printFever(c);
            break;
        case 2:
            printf("You choose option 2. F to C & check fever.\n");
            f = isDouble("Enter the temperature in Fahrenheit: ");
            c = f_to_c(f);
            printf("C = %.2lfC\n", c);
            printFever(c);
            break;
        }
    }
    return 0;
}