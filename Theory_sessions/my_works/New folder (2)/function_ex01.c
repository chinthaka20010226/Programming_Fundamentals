#include <stdio.h>

float circleArea(float r);
int main() {
    float Area;
    Area = circleArea(7);
    printf("%f", Area);
}
float circleArea(float r) {
    float circleArea = 3.14159 * r * r;
    return circleArea;
}