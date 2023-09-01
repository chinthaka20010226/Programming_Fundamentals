#include <stdio.h>
#define sum(x,y) (x + y)
#define mul(x,y) (x * y)
void main(){
    int num1,num2;
    printf("Input num1 & num2:\n");
    scanf("%d%d", &num1,&num2);
    printf("summation of two numbers:%d\n", sum(num1,num2));
    printf("multiplication of two numbers:%d\n", mul(num1,num2));
}