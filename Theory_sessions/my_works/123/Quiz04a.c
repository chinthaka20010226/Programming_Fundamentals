#include <stdio.h>

int main() {
    float f_tem; // this is temperature in Fahrenheit degrees.
    float c_tem; // this is temperature in Centigrade degrees.
    printf("Input the temperature of a city in Fahrenheit degrees is:\n");
    scanf("%f", &f_tem);

    c_tem = (f_tem - 32) * 9/5; // calculate and convert this temperature into Centigrade degrees.
    printf("Temperature of a city in Centigrade degrees is:%f\n", c_tem);

    return 0;
}
