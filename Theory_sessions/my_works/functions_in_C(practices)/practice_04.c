#include <stdio.h>

int change(int *x,int *y);
int main() {
    int num1,num2;
    printf("Input two numbers:");
    scanf("%d%d", &num1,&num2);

    change(&num1,&num2);
    printf("num1 = %d and num2 = %d", num1,num2);
}
int change(int *x,int *y) {
    int change = *x;
    *x = *y;
    *y = change;
    return change;
}