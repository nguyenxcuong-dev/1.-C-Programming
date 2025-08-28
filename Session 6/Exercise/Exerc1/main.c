#include <stdio.h>
// Tạo chương trình giải bài tập 11, 12, 13;

// 1. Kiểm tra 1 số nguyên có phải là số nguyên tố không;
int isPrime(int n, int isTrue)
{

    if (n <= 1) // Loại 0 và 1 vì số nguyên tố luôn lớn hơn 1;
    {
        isTrue = 0;
    }
    else if (n == 2) // Số 2 là số chẵn duy nhất thuộc số nguyên tố
    {
        isTrue = 1;
    }
    else if (n % 2 == 0) // Loại số chẵn != 2;
    {
        isTrue = 0;
    }
    else
    {
        for (int i = 3; i * i <= n; i += 2) // Lặp từ 3 và tăng 2 giá trị để chỉ lặp các số lẻ;
        {
            if (n % i == 0) // Dừng kiểm tra ngay khi có ước số != 1 và n;
            {
                isTrue = 0;
                break;
            }
        }
    }
    return isTrue;
}

// Tạo hàm in kết quả vì hàm int chỉ trả về số;
void printPrimeNums(int n)
{
    if (isPrime(n, 1))
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is not a prime number.\n", n);
    }
}

// 2. In ra dãy số nguyên tố từ 2 - n - 1;
void primeNumbers(int n)
{
    printf("Prime numbers up to %d: ", n);
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i, 1))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

// 3. Tạo hàm in ra dãy Fibonacci với n số hạng
void fibonacciSequence(int n)
{
    long long num1 = 1, num2 = 1, nextNumber;
    if (n <= 0) // Loại các số nhỏ hơn hoặc bằng 0
    {
        printf("Invalid Number.\n");
    }
    else
    {
        printf("Fibonacci Sequence: ");
        for (int i = 1; i <= n; i++)
        {
            printf("%lld ", num1); // In ra số đầu tiên
            nextNumber = num1 + num2; 
            num1 = num2;
            num2 = nextNumber;
        }
        printf("\n");
    }
}

int main()
{
    int choice;
    int n;
    printf("--------------------MENU--------------------\n");
    printf("CHOICE:\n");
    printf("1. Check if a number is prime (n).\n");           // Bai 11;
    printf("2. Find a sequence of prime numbers (1 - n).\n"); // Bai 12;
    printf("3. Find the Fibonacci sequence with n terms.\n"); // Bai 13;
    printf("0. Exit the program.\n");
    printf("--------------------------------------------\n");

    while (1) // Lặp lại chương trình đến khi nào người dùng ấn phím 0 để thoát
    {
        printf("Enter your choice (0 - 3): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: // Kiểm tra xem n có phải số nguyên tố không;
            printf("Enter number you want to check: ");
            scanf("%d", &n);
            printPrimeNums(n); // Gọi hàm printPrimeNums;
            break;
        case 2: // In ra dãy số nguyên tố từ 2 -> n - 1
            printf("Enter a number: ");
            scanf("%d", &n);
            primeNumbers(n);
            break;
        case 3: // In ra dãy Fibonacci với n số hạng;
            printf("Enter a number: ");
            scanf("%d", &n);
            fibonacciSequence(n);
            break;
        case 0: // Thoát chương trình
            printf("Closing the program.\n");
            printf("Program closed.");
            return 0;
        }
    }

    return 0;
}