#include <stdio.h>
#include <string.h>

// Tạo hàm nhận số nguyên
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
            printf("Dau vao khong hop le. Vui long nhap vao 1 so nguyen tu 0 - 3\n");
            while (getchar() != '\n');
        }
    }
}

// Tạo hàm để loại các số < 0 && > 3;
int positiveNum (const char *message)
{
    int n;
    do 
    {
        n = isInt(message);
        if (n < 0 || n > 3)
        {
            printf("So khong hop le vui long nhap so nguyen duong tu 0 - 3.\n");
        }
    }
    while (n < 0);
    return n;
}

// Tạo struct lưu ngày tháng năm;
struct date
{
    int day, month, year;
};

// Tạo đối tượng student;
struct Student
{
    char name[50];
    struct date birthday;
    char StdCode[10];
    char class[10];
    float avgScore;
};

// Tối giản tên của struct Student;
typedef struct Student SV;

// Tạo hàm nhập thông tin sinh viên;
SV stdInput()
{
    SV x;

    printf("Vui long nhap thong tin sinh vien moi: ");
    fgets(x.name, sizeof(x.name), stdin);
    x.name[strcspn(x.name, "\n")] = '\0';

    printf("Nhap ngay sinh: ");
    scanf("%d", &x.birthday.day);
    printf("Nhap thang sinh: ");
    scanf("%d", &x.birthday.month);
    printf("Nhap nam sinh: ");
    scanf("%d", &x.birthday.year);

    printf("Nhap ma sinh vien: ");
    scanf("%s", x.StdCode);

    printf("Nhap ten lop hoc: ");
    scanf("%s", x.class);

    printf("Nhap diem trung binh: ");
    scanf("%f", &x.avgScore);

    while(getchar() != '\n');
    return x;
}

// Tạo đối tượng MyClass và mảng std gồm 100 struct SV
struct MyClass
{
    SV std[100];
    int count;
};

typedef struct MyClass Class;

// 1. Tạo hàm thêm sinh viên vào lớp 
Class addStudent(Class cls)
{
    if (cls.count < 100)
    {
        SV sv = stdInput();
        cls.std[cls.count] = sv;
        cls.count++;
        printf("Da them sinh co ma so %s\n", sv.StdCode);
    }
    else 
    {
        printf("Lop da day khong the them sinh vien moi.\n");
    }
    return  cls;
}

// 2. Tạo hàm in danh sách sinh viên
void printStdList (Class cls)
{
    if (cls.count == 0)
    {
        printf("Lop chua co sinh vien nao.\n");
        return;
    }
    printf("===Danh Sach Sinh Vien===\n");
    for (int i = 0; i < cls.count; i++)
    {
        printf("Sinh vien %d\n", i + 1);
        printf("Ho va Ten: %s\n", cls.std[i].name);
        printf("Ngay sinh: %d/%d/%d\n", cls.std[i].birthday.day, cls.std[i].birthday.month, cls.std[i].birthday.year);
        printf("Ma so sinh vien: %s\n", cls.std[i].StdCode);
        printf("Lop hoc: %s\n", cls.std[i].class);
        printf("Diem trung binh: %.2f\n", cls.std[i].avgScore);
        printf("\n");
    }
    printf("Tong so sinh vien cua lop T2508M la: %d\n", cls.count);
}

// 3. Tạo hàm xóa sinh viên khỏi lớp
Class removeStd(Class cls)
{
    if (cls.count == 0)
    {
        printf("Lop chua co sinh vien nao.\n");
        return cls;
    }

    // In ra danh sach sinh vien hien co
    printStdList(cls);

    char code[10];
    printf("Nhap ma sinh vien muon xoa: ");
    scanf("%s", code);
    while (getchar() != '\n');

    for (int i = 0; i < cls.count; i++)
    {
        if (strcmp(cls.std[i].StdCode, code) == 0)
        {
            for (int j = i; j < cls.count; j++)
            {
                cls.std[j] = cls.std[j + 1];
            }
            cls.count--;
            printf("Da xoa sinh vien co ma so %s\n", code);
            return cls;
        }
    }
    printf("Khong tim thay sinh vien co ma so %s\n", code);
    return cls;
}

int main()
{
    struct MyClass cls;
    cls.count = 0;
    int choice;
    printf("\n");
    printf("* * * * * * * * * * * *MENU* * * * * * * * * * * *\n");
    printf("* 1. Them sinh vien moi.                         *\n"); // Task 1;
    printf("* 2. Truy xuat thong tin sinh vien trong lop.    *\n"); // Task 2;
    printf("* 3. Xoa sinh vien khoi lop                      *\n"); // Task 3;
    printf("* 4.                                             *\n"); // Task 4;
    printf("* 5.                                             *\n"); // Task 5;
    printf("* 0. Exit.                                       *\n");
    printf("* * * * * * * * * * * * * * * * * * * * * * * * **\n");
    while (1)
    {

        choice = positiveNum("Nhap lua chon cua ban (0 - 3): "); 

        switch (choice)
        {
            case 0:
                printf("Dang dong chuong trinh.....\n");
                printf("Chuong trinh da dong.");
                return 0;
            case 1:
                printf("Lua chon 1: Them sinh vien moi.\n");
                cls = addStudent(cls);
                break;
            case 2: 
                printf("Lua chon 2: Truy xuat thong tin sinh vien.\n");
                printStdList(cls);
                break;
            case 3: 
                printf("Lua chon 3: Xoa sinh vien khoi lop hoc.\n");
                cls = removeStd(cls);
                break;
        }
    }
    return 0;
}