#include <stdio.h>
#include <string.h>

int validatePassword(const char code[], int n)
{
    int letter = 0, digit = 0;
    if (n < 6)
    {
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if ((code[i] >= 'A' && code[i] <= 'Z') || (code[i] >= 'a' && code[i] <= 'z'))
        {
            letter = 1;
        }
        else if (code[i] >= '0' && code[i] <= '9')
        {
            digit = 1;
        }
    }
    return letter && digit;
}

void printfPw(const char code[], int n)
{
    printf("Password: ");
    for (int i = 0; i < n; i++)
    {
        printf("%c", code[i]);
    }
    printf("\n");
}

int main()
{
    char code[30];
    printf("Nhap mat khau: ");
    scanf("%s", &code);
    int n = strlen(code);

    printfPw(code, n);
    if (validatePassword(code, n))
    {
        printf("Mat khau hop le.\n");
    }
    else
    {
        printf("Mat khau khong hop le.\n");
    }
    return 0;
}