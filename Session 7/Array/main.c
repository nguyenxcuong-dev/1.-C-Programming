#include <stdio.h>

void showArray()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    for (int i = 0; i < 10; i++)
    {
        printf("Vi tri %d: %d\n", i, array[i]);
    }
}

void inputArray()
{
    int array[10];
    printf("Nhap gia tri cho mang\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Nhap array[%d]: ", i);
        scanf("%d", &array[i]);
        printf("Array[%d] = %d\n", i, array[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Gia tri cua array[%d] la %d \n", i, array[i]);
    }
}

void inputAdv()
{
    int n;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nhap array[%d]:", i);
        scanf("%d", &array[i]);
        printf("Array[%d] = %d\n", i, array[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Array[%d] = %d\n", i, array[i]);
    }
}

void charArray()
{
    int character, i = 0;
    char name[20];
    printf("Enter your name: ");
    while (getchar() != '\n');
    while (i <= 20)
    {
        character = getchar();
        if (character == '\n')
        {
            break;
        }
        else 
        {
            name[i] = character;
            i++;
        }
    }
    name[i] = '\0';
    printf("Your name: %s", name);
    printf("\n");
}

int main()
{
    printf("1. Goi ham showArray.\n");
    printf("2. Goi ham inputArray.\n");
    printf("3. Goi ham inputAdv.\n");
    printf("4. Goi ham charArray.\n");
    printf("0. Thoat chuong trinh.\n");
    while (1)
    {
        int choice;
        printf("Enter your choice (0 - 4): ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            showArray();
            break;
        case 2:
            inputArray();
            break;
        case 3:
            inputAdv();
            break;
        case 4:
            charArray();
            break;
        case 0:
            printf("Thoat Chuong Trinh.\n");
            return 0;
        }
    }
    return 0;
}