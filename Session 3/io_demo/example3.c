#include <stdio.h>

int main() {

    float basic_salary = 12000;
    int HRA = 150, TA = 120, other = 450;
    float DA, PF, IT, net_salary;

    DA = 0.12 * basic_salary;
    PF = 0.14 * basic_salary;
    IT = 0.15 * basic_salary;

    net_salary = basic_salary + DA + HRA + TA + other - (PF + IT);

    printf("Net Salary: $%.2f\n", net_salary);

    return 0;
}