#include <stdio.h>

float CelciTOFahren(float x);
int main() {
    float TemInCel,TemInFahr;
    printf("Input the temperature in Celsius:");
    scanf("%f", &TemInCel);

    TemInFahr = CelciTOFahren(TemInCel);
    printf("temperature in Fahrenheit:%.4f", TemInFahr);
}
float CelciTOFahren(float x) {
    float CelciTOFahren = x * 9/5 + 32;
    return CelciTOFahren;
}