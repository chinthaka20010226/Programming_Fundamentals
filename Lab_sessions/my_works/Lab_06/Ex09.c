#include <stdio.h>

int main() {
    float g_salary,e_salary;
    do {
        printf("Input the salesperson's gross sales for the last week : \n");
        scanf("%f", &g_salary);

        if(g_salary == -1) {
            break;
        }else {
            e_salary = 200.00 + g_salary * 0.09;
            printf("salesperson's earnings : %f\n", e_salary);
        }
    }while(1);
}

