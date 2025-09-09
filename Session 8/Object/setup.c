#include <stdio.h>
#include <string.h>

struct date
{
    int day, month, year;
};

struct Student
{
    char name[50];
    char StdCode[10];
    struct date birthday;
    int age;
    float score;
};

typedef struct Student SV;

SV stdInput()
{
    SV x;
    printf("Vui long nhap thong tin sinh vien: \n");

    printf("Ho va ten: ");
    fgets(x.name, sizeof(x.name), stdin);
    x.name[strcspn(x.name, "\n")] = '\0';

    printf("Ma Sinh Vien: ");
    scanf("%s", x.StdCode);

    printf("Ngay Sinh: ");
    scanf("%d", &x.birthday.day);
    printf("Thang Sinh: ");
    scanf("%d", &x.birthday.month);
    printf("Nam Sinh: ");
    scanf("%d", &x.birthday.year);

    printf("Nhap vao tuoi: ");
    scanf("%d", &x.age);

    printf("Diem so: ");
    scanf("%f", &x.score);

    while(getchar()!='\n');
    return x;
}

struct MyClass
{
    SV std[100];
    int count;
};

typedef struct MyClass class;

int main()
{
    class cls;
    cls.count = 0;

    // Them 1 sinh vien
    SV sv1 = stdInput();
    cls.std[cls.count] = sv1;
    cls.count++;

    // Them sinh vien thu 2
    SV sv2 = stdInput();
    cls.std[cls.count] = sv2;
    cls.count++;

    printf("\n");
    for (int i = 0; i < cls.count; i++)
    {
        printf("Sinh vien %d:\n", i + 1);
        printf("Ho va Ten: %s\n", cls.std[i].name);
        printf("Ma So Sinh Vien: %s\n", cls.std[i].StdCode);
        printf("Ngay Sinh: %d/%d/%d\n", cls.std[i].birthday.day, cls.std[i].birthday.month, cls.std[i].birthday.year);
        printf("Tuoi: %d\n", cls.std[i].age);
        printf("Diem so: %.2f\n", cls.std[i].score);
        printf("\n");
    }
    printf("So sinh vien trong lop T2508M: %d", cls.count);
    return 0;
}