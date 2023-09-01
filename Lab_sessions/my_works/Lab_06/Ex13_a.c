#include <stdio.h>

int main() {
    int num1,num2,x;
    printf("Enter two numbers : ");
    scanf("%d%d", &num1,&num2);

    if(num1 < num2) {
        if(num2 % num1 == 0) {
            printf("%d", num2);
        }else {
            x = num1 * num2;
            printf("%d", x);
        }
    }else {
        if(num1 % num2 == 0) {
            printf("%d", num1);
        }else {
            x = num1 * num2;
            printf("%d", x);
        }
    }
}