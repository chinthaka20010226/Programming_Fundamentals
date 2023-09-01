#include <stdio.h>
#define sumMul(x,y) int sum=x+y; int mul=x*y;

int main() {
    int no1, no2;
    printf("Enter no1:");
    scanf("%d", &no1);

    printf("Enter no2:");
    scanf("%d", &no2);

    sumMul(no1,no2);
    printf("Summation: %d\n", sum);
    printf("Multiplication: %d\n", mul);
    return 0;
}
