#include <stdio.h>
#include <math.h>

int square(int x);
int main() {
    int num,calculate;
    printf("Input the number:");
    scanf("%d", &num);

    calculate = square(num);
    printf("square of any number:%d", calculate);
}
int square(int x) {
    int square = pow(x,2);
    return square;
}