#include <stdio.h>

// Viết Chương Trình Giải Task 6 - 10

// Viết hàm để nhận số nguyên và loại bỏ các ký tự khác
int intInput(const char *notification)
{
    int value, check;
    while (1)
    {
        printf("%s", notification);
        check = scanf("%d", &value);
        if (check == 1)
        {
            while (getchar() != '\n')
                ;         // Clear đệm sau khi nhập đúng
            return value; // Trả về giá trị int
        }
        else
        {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n')
                ; // Clear đệm và không trả về giá trị nào
        }
    }
}

// Viết hàm để chỉ nhận số nguyên dương
int positiveNum(const char *notification)
{
    int n;
    do 
    {
        n = intInput(notification);
        if (n < 0)
        {
            printf("Invalid Input. Please enter a positive number.\n");
        }
    }
    while (n < 0);
    return n;
}

// 1. Viết hàm trả về lũy thừa của a & b
long long powInt(int a, int b)
{
    long long result = a;
    if (b == 0)
    {
        result = 1;
    }
    else if (b == 1)
    {
        result = a;
    }
    else
    {
        for (int i = 2; i <= b; i++)
        {
            result *= a;
        }
    }
    return result;
}

// .2 Viết hàm đếm số chữ số của một số nguyên
int countNums(int n)
{
    int count = 0;

    if (n == 0)
    {
        count = 1;
    }
    else
    {
        while (n > 0)
        {
            n /= 10;
            count++;
        }
    }
    return count;
}

// 3. Tính tổng các số của 1 số nguyên
int sumOfDigits(int n)
{
    int summary = 0;
    int modul;
    while (n > 0)
    {
        modul = n % 10;
        summary += modul;
        n /= 10;
    }
    return summary;
}

// 4. Kiểm tra 1 số có phải số chính phương không
void squareNumber(int n)
{
    int isSquare = 0;
    
    if (n == 0 || n == 1) {
        isSquare = 1;
    }
    else {
        for (int i = 2; i * i <= n; i++)
        {
            if (i * i == n)
            {
                isSquare = 1;
                break;
            }
        }
    }
    if (isSquare == 1)
    {
        printf("%d is a square number.\n", n);
    }
    else
    {
        printf("%d is not a square number.\n", n);
    }
}

// 5. Kiểm tra xem 1 năm có phải năm nhuận hay không
void isLeapYear(int n) 
{
    if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
    {
        printf("%d is a leap year.\n", n);
    }
    else
    {
        printf("%d is not a leap year.\n", n);
    }
}

int main()
{

    int choice, n;
    printf("-----------------------MENU-----------------------\n");
    printf("1. Calculate exponentiation.\n");                      // Task 6
    printf("2. Count the number of digits of a number.\n");        // Task 7
    printf("3. Calculate the sum of the digits of an integer.\n"); // Task 8
    printf("4. Check if n is a square number.\n");                 // Task 9
    printf("5. Check if a year is a leap year or not.\n");         // Task 10
    printf("--------------------------------------------------\n");

    while (1)
    {
        choice = intInput("Enter your choice (0 - 5): ");

        switch (choice)
        {
        case 0:
            printf("Closing the program......\n");
            printf("Program's closed.\n");
            return 0;
        case 1:
            int a, b;
            printf("You choose option 1. Calculate exponentiation.\n");
            a = intInput("Enter the first number: ");
            b = positiveNum("Enter the second number: ");
            printf("Result: %lld\n", powInt(a, b));
            break;
        case 2:
            printf("You choose option 2. Count the number of digits of a number.\n");
            n = positiveNum("Enter a number: ");
            printf("Result: %d\n", countNums(n));
            break;
        case 3:
            printf("You choose option 3. Calculate the sum of the digits of an integer.\n");
            n = positiveNum("Enter a number: ");
            printf("Result: %d\n", sumOfDigits(n));
            break;
        case 4:
            printf("You choose option 4. Check if n is a square number.\n");
            n = positiveNum("Enter a number: ");
            squareNumber(n);
            break;
        case 5:
            printf("You choose option 5. Check if a year is a leap year or not.\n");
            n = positiveNum("Enter a year: ");
            isLeapYear(n);
            break;
        }
    }
    return 0;
}