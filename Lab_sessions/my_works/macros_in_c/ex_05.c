#include <stdio.h>
#define tem_of_Fah(x) ((x * 9) / 5 + 32)
int main(){
    float tem;
    printf("Input temperature:");
    scanf("%f", &tem);
    printf("temperature of Fahrenheit is:%.4f\n", tem_of_Fah(tem));
}