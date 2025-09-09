#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct date
{
    int day, month, year;
};

struct Student
{
    struct date birthday;
    char StdCode[30];
    char name[30];
    int age;
    float score;
    float height;
};

typedef struct Student SV;

SV input()
{
    SV x;
    scanf("%d", &x.birthday.day);
    scanf("%d", &x.birthday.month);
    scanf("%d", &x.birthday.year);
    scanf("%s", &x.StdCode);
    getchar();
    fgets(x.name, sizeof(x.name), stdin);
    x.name[strcspn(x.name, "\n")] = '\0';
    scanf("%d", &x.age);
    scanf("%f", &x.score);
    scanf("%f", &x.height);
    return x;
}


int main()
{
    SV a = input();
    printf("Ngay Sinh: %d/%d/%d\n", a.birthday.day, a.birthday.month, a.birthday.year);
    printf("Ma So Sinh Vien: %s\n", a.StdCode);
    printf("Ho va Ten: %s\n", a.name);
    printf("Tuoi: %d\n", a.age);
    printf("Diem So: %.2f\n", a.score);
    printf("Chieu Cao: %.2fcm\n", a.height);
    return 0;
}