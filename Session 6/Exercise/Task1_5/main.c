#include <stdio.h>

// Viết chương trình giải task 1 - 5

// Tạo hàm để nhập số nguyên
int isInt(const char *notification)
{
    int value, check;
    while (1)
    {
        printf("%s", notification);
        check = scanf("%d", &value);

        if (check == 1)
        {
            while (getchar() != '\n'); // Clear bộ đệm sau khi nhập
            return value; // Trả về giá trị
        }
        else
        {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); // Clear bộ đệm khi người dùng không nhập đúng int
        }
    }
}

// 1. Tìm giá trị tuyệt đối của 1 số nguyên
int absNum(int n)
{
    if (n < 0)
    {
        return -n;
    }
    else
    {
        return n;
    }
}

// 2. Trả về dấu của số
int signOfNumber(int n)
{
    if (n < 0)
    {
        return -1;
    }
    else if (n == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

// 3. Số lớn nhất giữa 2 số
int maxOfTwo(int a, int b)
{
    int max = a;
    if (b > max)
    {
        max = b;
    }
    return max;
}

// 4. Tổng các số từ 1 -> n
int sumOneToN(int n)
{
    int summary = 0;
    for (int i = 0; i <= n; i++)
    {
        summary += i;
    }
    return summary;
}

// 5. Tính giai thừa của n.
long long factorial(int n)
{
    long long result = 1;

    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{

    int choice, n;
    printf("\n");
    printf("* * * * * * * * * * * *MENU* * * * * * * * * * * *\n");
    printf("* 1. Calculate the absolute value of an integer. *\n"); // Task 1
    printf("* 2. Sign of the number.                         *\n"); // Task 2
    printf("* 3. The greatest of two numbers.                *\n"); // Task 3
    printf("* 4. Calculate the sum of numbers from 1 to n.   *\n"); // Task 4
    printf("* 5. Factorial.                                  *\n"); // Task 5
    printf("** * * * * * * * * * * * * * * * * * * * * * * * *\n");

    while (1)
    {
        choice = isInt("Enter your choice (0 - 5): ");

        switch (choice)
        {
        case 0:
            printf("Closing program......\n");
            printf("Program's Closed!\n");
            return 0;
        case 1:
            printf("You choose option 1.\n");
            n = isInt("Enter a number: ");
            printf("Absolute value: %d\n", absNum(n));
            break;
        case 2:
            printf("You choose option 2.\n");
            n = isInt("Enter a number: ");
            printf("Result: %d\n", signOfNumber(n));
            break;
        case 3:
            printf("You choose option 3.\n");
            int num1 = isInt("Enter the first number: ");
            int num2 = isInt("Enter the second number: ");
            printf("The greatest number is: %d\n", maxOfTwo(num1, num2));
            break;
        case 4:
            printf("You choose option 4.\n");
            do
            {
                n = isInt("Enter a number: ");
                if (n < 0)
                {
                    printf("Invalid number! Please enter a positive number.\n");
                }
            } while (n < 0);
            printf("The sum of numbers from 1 to %d is: %d\n", n, sumOneToN(n));
            break;
        case 5:
            printf("You choose option 5.\n");
            do
            {
                n = isInt("Enter a positive number: ");
                if (n < 0)
                {
                    printf("Invalid number! Please enter a positive number.\n");
                }
            } while (n < 0);
            printf("%d! = %lld\n", n, factorial(n));
            break;
        }
    }

    return 0;
}
