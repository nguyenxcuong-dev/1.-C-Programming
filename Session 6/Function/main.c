#include <stdio.h>


// Dinh nghia ham cong 2 so a va b
int summary (int a, int b) {
    int total = a + b;
    return total;
}

// Dinh nghia ham tru 2 so a va b
int sub(int a, int b) {
    int result = a - b;
    return result;
}

// Dinh nghia ham nhan 2 so a va b
int multiple(int a, int b) {
    int result = a * b;
    return result;
}

// Dinh nghia ham chia 2 so a va b (b!=0)
float division(int a, int b) {
    float result = 0;
    if (b == 0) {
        printf("Cannot division by zero.\n");
    }
    else {
        result = (float)a / b;
    } 
    return result;
}

int main()
{
    int choice = 0;
    int a, b;
    int result = 0;
    printf("----------MENU----------\n");
    printf("CHOICES: \n");
    printf("1. SUMMARY\n");
    printf("2. SUB\n");
    printf("3. MULTIPLE\n");
    printf("4. DIVISION\n");
    printf("0. EXIT\n");
    printf("------------------------\n");
    while (1)
    {
        printf("Please enter your choice (0 - 4): ");
        scanf("%d", &choice);
        printf("Enter the first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);
        switch (choice)
        {
        case 1:
            printf("You chose option 1\nSummary 2 numbers \n");
            // Call Function
            result = summary(a, b);
            printf("Summary: %d\n", result);
            break;
        case 2:
            printf("You chose option 2\nSubtract 2 numbers \n");
            result = sub(a, b);
            printf("Sub: %d\n", result);
            break;
        case 3:
            printf("You chose option 3\nMultiply 2 numbers \n");
            result = multiple(a, b);
            printf("Multiple: %d\n", result);
            break;
        case 4:
            printf("You chose option 4\nDivide 2 numbers \n");
            double div = division(a, b);
            printf("Division: %.2lf\n", div);
            break;
        case 0:
            printf("You chose option 9\nExit");
            return 0;
        default:
            printf("Invalid choice. Please choose again.");
            break;
        }
    }
}