//Call by value.
#include <stdio.h>

double triangleArea(double x,double y); //function prototype, also call function declaration.

int main() { //main function,program start from here.
    double a,b;
    printf("Input the base and height of a triangle:\n");
    scanf("%lf%lf", &a,&b);

    printf("Area of triangle:%lf", triangleArea(a,b)); //function call.
}

double triangleArea(double x,double y) { //function definition.
    double triangleArea = 0.5 * x * y;
    return triangleArea;
}