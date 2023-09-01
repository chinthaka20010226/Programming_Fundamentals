#include <stdio.h>
#define PI 3.142
#define AreaOfCircle(r) (PI * r * r)
void main(){
    float r;
    printf("Input the radius of circle(cm):\n");
    scanf("%f", &r);
    printf("area of a circle = %.4f cm^2\n", AreaOfCircle(r)); // calling Macro & print calculated value.

}