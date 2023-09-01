#include <stdio.h>

float tem_C(float x);

int main() {
    float tem_F,tem_Cen;
    printf("Input the temperature in Fahrenheit:");
    scanf("%f", &tem_F);

    tem_Cen = tem_C(tem_F);
    printf("Temperature in Centigrade:%.4f", tem_Cen);
}
float tem_C(float x) {
    float tem_C = (x - 32) * 5/9;
    return tem_C;
}