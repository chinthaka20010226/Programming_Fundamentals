#include <stdio.h>

int main() {
    float n,sum = 0; // sum means summation.
    printf("Enter the value of 'n'\n");
    scanf("%f", &n);

    for(float i = 1; i <= n;i++) {
        sum = sum + 1/(i*i);
    }
    printf("%f", sum);
}
