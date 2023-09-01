#include <stdio.h>
#include <math.h>

float calculate(float x,float y);
int main() {
    float n,m,calculation;

    printf("Input the two numbers : ");
    scanf("%f%f", &n,&m);

    calculation = calculate(n,m);
    printf("%.4f", calculation);
}
float calculate(float x,float y) {
    char op;
    printf("Input the operator : ");
    scanf(" %c", &op);

    float calculate;

    switch(op) {
        case '+':
            calculate = x + y;
            return calculate;
        case '-':
            calculate = x - y;
            return calculate;
        case '*':
            calculate = x * y;
            return calculate;
        case '/':
            calculate = x / y;
            return calculate;
        default:
            calculate = pow(x,y);
            return calculate;
    }
}