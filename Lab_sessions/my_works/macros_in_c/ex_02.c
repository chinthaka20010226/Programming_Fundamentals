#include <stdio.h>
#define swap(x,y)\
int t; t = x; x = y; y = t;
void main(){
    int num1,num2;
    printf("Input num1:");
    scanf("%d", &num1);
    printf("Input num2:");
    scanf("%d", &num2);
    swap(num1,num2);
    printf("After swapping,\nnum1:%d\nnum2:%d\n", num1,num2);
}