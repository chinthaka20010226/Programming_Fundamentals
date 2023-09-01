#include <stdio.h>
int main() {
    float b_salary; // this is a basic salary.
    float g_salary; // this is a gross salary.

    printf("Input the Ramesh’s basic salary,Rs:\n");
    scanf("%f", &b_salary);

    g_salary = b_salary + (b_salary * 0.40) + (b_salary * 0.20);
    // calculate dearness allowance and house rent allowance, after that, calculate the gross salary.
    printf("Ramesh's gross salary is,Rs:%f", g_salary);

    return 0;
}