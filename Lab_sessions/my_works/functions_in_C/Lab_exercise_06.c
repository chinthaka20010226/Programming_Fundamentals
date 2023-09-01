#include <stdio.h>

float CelciTOFahren(int x);

int main() {
    float temp_C;
    printf("Enter the temperature in Celsius value:\n");
    scanf("%f", &temp_C);

    printf("The temperature in Fahrenheit value:%.2f", CelciTOFahren(temp_C));
}

float CelciTOFahren(int x) {
    float CelciTOFahren = x * 9/5 + 32;
    return CelciTOFahren;
}