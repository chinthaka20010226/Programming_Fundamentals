#include <stdio.h>
int main() {
    float b_salary; // this is Ramesh's basic salary.
    float dear_allow; // this is Ramesh's dearness allowance.
    float rent_allow; // this is Ramesh's house rent allowance.
    float g_salary; // this is Ramesh's gross salary.
    printf("Input the Ramesh’s basic salary, Rs :\t\n");
    scanf("%f", &b_salary);

    dear_allow = b_salary * 0.40; // calculate the dearness allowance.
    printf("Ramesh's dearness allowance is, Rs :\t%f\n", dear_allow);

    rent_allow = b_salary * 0.20; // calculate the house rent allowance.
    printf("Ramesh's house rent allowance is, Rs :\t%f\n", rent_allow);

    g_salary = b_salary + dear_allow + rent_allow; // calculate the gross salary.
    printf("Ramesh's gross salary is, Rs :\t%f", g_salary);

    return 0;
}
