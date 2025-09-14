#include <stdio.h>

int isInt(const char *message)
{
    int check;
    int value;
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
            printf("Invalid value. Please enter a number.\n");
            while (getchar() != '\n');
        }
    }
}

// Ham phan loai diem;
char gradeOf(double s)
{
    if (s > 10 || s < 0)
    {
        printf("Invalid score. Please enter from 0 - 10.\n");
    }
    else if (s >= 8.5)
    {
        return 'A';
    }
    else if (s >= 7.0)
    {
        return 'B';
    }
    else if (s >= 5.5)
    {
        return 'C';
    }
    else
    {
        return 'D';
    }
}

// Ham dem;
void summarizeGrade(const double a[], int n)
{
    int countA = 0, countB = 0, countC = 0, countD = 0;
    for (int i = 0; i < n; i++)
    {
        if (gradeOf(a[i]) == 'A')
        {
            countA++;
        }
        else if (gradeOf(a[i]) == 'B')
        {
            countB++;
        }
        else if (gradeOf(a[i]) == 'C')
        {
            countC++;
        }
        else
        {
            countD++;
        }
    }
    printf("A = %d\nB = %d\nC = %d\nD = %d\n", countA, countB, countC, countD);
}

int main()
{
    int n;
    double a[100];
    while (1)
    {
        n = isInt("Enter the value for n: ");
        if (n <= 0)
        {
            break;
        }
        for (int i = 0; i < n; i++)
        {
            printf("a[%d]: ", i);
            if (scanf("%lf", &a[i]) != 1)
            {
                printf("Invalid value. Please enter a number.\n");
                while (getchar() != '\n');
                i--;
            }
        }
        summarizeGrade(a, n);
    }

    return 0;
}