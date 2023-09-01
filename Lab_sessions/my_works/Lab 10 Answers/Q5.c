#include <stdio.h>
#define convertTemp(temp) (9/5.0)*temp + 32

int main() {
    float temp;
    printf("Enter temperature: \n");
    scanf("%f", &temp);

    printf("%.2fF", convertTemp(temp));
    return 0;
}
