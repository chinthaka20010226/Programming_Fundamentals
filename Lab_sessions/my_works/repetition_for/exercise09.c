#include <stdio.h>

int main() {
    float f = 1,sum; // sum means summation.
    for(int n = 1;n <= 5;n++) {
        f = f * n;
        sum = sum + 1/f;
    }
    sum = 1 + sum;
    printf("%f", sum);
}
