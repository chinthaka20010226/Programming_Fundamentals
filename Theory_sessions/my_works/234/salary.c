#include <stdio.h>

int main() {
    int b_salary,HRA,DA,g_salary;
    printf("Enter the basic salary:\n");
    scanf("%d", &b_salary);

    if(b_salary >= 1500) {
        HRA = 500;
        printf("HRA Rs:%d\n", HRA);
        DA = b_salary * 0.98;
        printf("DA Rs:%d\n", DA);
        g_salary = 1500 + HRA + DA;
        printf("Gross salary Rs:%d", g_salary);
    } else {
        HRA = b_salary * 0.1;
        printf("HRA Rs:%d\n", HRA);
        DA = b_salary * 0.9;
        printf("DA Rs:%d\n", DA);
        g_salary = 1500 + HRA + DA;
        printf("Gross salary:%d", g_salary);
    }
    return 0;
}
