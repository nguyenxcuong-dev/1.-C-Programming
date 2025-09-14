#include <stdio.h>

// Ham nhap so nguyen
int isInt (const char *message)
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
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
        }
    }
}

// Tinh tien dien
int powerBill(int kwh)
{
    float k1 = 1200, k2 = 1500, k3 = 2000;
    if (kwh <= 50)
    {
        return kwh * k1;
    }
    else if (kwh > 50 && kwh <= 100)
    {
        return 50 * k1 + 50 * k2;
    }
    else
    {
        return 50 * k1 + 50 * k2 + (kwh - 100) * k3;
    }
}

int main()
{
    int n, choice;
    printf("CHOICE: \n");
    printf("0. Exit the program.\n");
    printf("1. Calculate electricity costs.\n");
    while (1)
    {
        choice = isInt("Enter your choice (0 - 1): ");
        switch (choice)
        {
            case 0:
                printf("Exit the program.\n");
                return 0;
            case 1: 
                printf("You choose option 1.\n");
                n = isInt("Enter the kwh: ");
                printf("You have used %d kwh. Total cost is: %d VND.\n", n, powerBill(n));
                break;
        }
    }
    return 0;
}