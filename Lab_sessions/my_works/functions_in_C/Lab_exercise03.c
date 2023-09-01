#include <stdio.h>

double triangleArea(double x,double y);
int main() {
    double b,h,T_Area;
    printf("Input the base and height:");
    scanf("%lf%lf", &b,&h);

    if((b == 0) || (h == 0)) {
        printf("you have taken an invalid value.");
        return 0;
    }
    T_Area = triangleArea(b,h);
    printf("Area of triangle:%.4lf", T_Area);
}
double triangleArea(double x,double y) {
    double triangleArea = 0.5 * x * y;
    return triangleArea;
}
