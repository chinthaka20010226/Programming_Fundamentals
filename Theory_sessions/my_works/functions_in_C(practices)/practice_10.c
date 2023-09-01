#include <stdio.h>

float rect_Area(float x,float y);
float rect_peri(float x,float y);
float cir_Area(float z);
float cir_peri(float z);

int main() {
    float a,b,r,A1,P1,A2,P2;
    printf("Input the length and breadth of a rectangle and radius of a circle:");
    scanf("%f%f%f", &a,&b,&r);

    A1 = rect_Area(a,b);
    P1 = rect_peri(a,b);
    A2 = cir_Area(r);
    P2 = cir_peri(r);

    printf("%.2f area and %.2f perimeter of the rectangle\n", A1,P1);
    printf("%.4f area and %.4f circumference of the circle", A2,P2);
}
float rect_Area(float x,float y) {
    float rect_Area = x * y;
    return rect_Area;
}
float rect_peri(float x,float y) {
    float rect_peri = 2 * (x + y);
    return rect_peri;
}
float cir_Area(float z) {
    float cir_peri = 3.14159 * z * z;
    return cir_peri;
}
float cir_peri(float z) {
    float cir_peri = 2 * 3.14159 * z;
    return cir_peri;
}