#include <stdio.h>
#include <string.h>

// Tao ham nhap so nguyen
int isInt(const char *message)
{
    int value, check;
    while (1)
    {
        printf("%s", message);
        check = scanf("%d", &value);
        if (check == 1)
        {
            while (getchar() != '\n')
                ;
            return value;
        }
        else
        {
            printf("Dau vao khong hop le. Vui long nhap 1 so nguyen.\n");
            while (getchar() != '\n')
                ;
        }
    }
}

// Tao ham loai cac so <0 & > 5;
int positiveNum(const char *message)
{
    int n;
    do
    {
        n = isInt(message);
        if (n < 0 || n > 5)
        {
            printf("So khong hop le. Vui long nhap so nguyen duong tu 0 - 5.\n");
        }
    } while (n < 0);
    return n;
}

// Khoi tao thong tinh sinh vien
struct date
{
    int day, month, year;
};

struct Student
{
    char name[30];
    struct date birthday;
    char stdCode[10];
    char class[10];
    float avgScore;
};

typedef struct Student SV;

// Viet ham nhap thong tin sinh vien
SV stdInput()
{
    SV x;
    printf("Nhap thong tin sinh vien: \n");

    printf("Ho va Ten: ");
    fgets(x.name, sizeof(x.name), stdin);
    x.name[strcspn(x.name, "\n")] = '\0';

    printf("Nhap ngay sinh: ");
    scanf("%d", &x.birthday.day);
    printf("Nhap thang sinh: ");
    scanf("%d", &x.birthday.month);
    printf("Nhap nam sinh: ");
    scanf("%d", &x.birthday.year);

    printf("Nhap ma sinh vien: ");
    scanf("%s", x.stdCode);

    printf("Nhap ten lop hoc: ");
    scanf("%s", x.class);

    printf("Nhap diem so: ");
    scanf("%f", &x.avgScore);

    while (getchar() != '\n')
        ;
    return x;
}

// Khoi tao lop hoc
struct MyClass
{
    SV std[50];
    int count;
};

typedef struct MyClass Class;
// 1. Them sinh vien vao lop
Class addStd(Class cls)
{
    if (cls.count < 100)
    {
        SV sv = stdInput();
        cls.std[cls.count] = sv;
        cls.count++;
        printf("Da them sinh vien co ma so %s\n", sv.stdCode);
    }
    else
    {
        printf("Lop da day khong the them sinh vien moi.\n");
    }
    return cls;
}

// 2. In ra danh sách sinh viên;
void printStdList(Class cls)
{
    if (cls.count == 0)
    {
        printf("Lop chua co sinh vien nao.\n");
        return;
    }

    printf("==========Danh Sach Sinh Vien==========\n");
    for (int i = 0; i < cls.count; i++)
    {
        printf("Sinh vien %d\n", i + 1);
        printf("Ho va Ten: %s\n", cls.std[i].name);
        printf("Ngay sinh: %d/%d/%d\n", cls.std[i].birthday.day, cls.std[i].birthday.month, cls.std[i].birthday.year);
        printf("Ma so sinh vien: %s\n", cls.std[i].stdCode);
        printf("Lop hoc: %s\n", cls.std[i].class);
        printf("Diem trung binh: %.2f\n", cls.std[i].avgScore);
        printf("\n");
    }
    printf("Tong so sinh vien cua lop la: %d\n", cls.count);
}

int main()
{
    int choice;
    Class cls;
    cls.count = 0;
    printf("\n");
    printf("===============MENU===============\n");
    printf("1. Them hoc sinh moi vao lop.\n");
    printf("2. Danh sach sinh vien.\n");
    printf("3. Xoa sinh vien khoi lop.\n");
    printf("4.   \n");
    printf("5.   \n");
    printf("0. Thoat khoi chuong trinh.\n");
    printf("==================================\n");

    while (1)
    {

        choice = positiveNum("Nhap lua chon cua ban (0 - 5): ");

        switch (choice)
        {
        case 0:
            printf("Da dong chuong trinh.\n");
            return 0;
        case 1:
            printf("Lua chon 1: Them sinh vien moi vao lop hoc.\n");
            cls = addStd(cls);
            break;
        case 2:
            printf("Lua chon 2: Xem danh sach sinh vien trong lop.\n");
            printStdList(cls);
            break;
        case 3:
            printf("Lua chon 3: Xoa sinh vien khoi lop hoc.\n");
        }
    }
}