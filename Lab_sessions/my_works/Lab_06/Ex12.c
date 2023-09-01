#include <stdio.h>

int main() {
    int num1,num2,R;
    printf("Enter two numbers : ");
    scanf("%d%d", &num1,&num2);

    if(num1 < num2) {
        while(num1 != 0) {
            R = num2 % num1;
            num2 = num1;
            num1 = R;
        }
        printf("%d", num2);
    }else {
        while(num2 != 0) {
            R = num1 % num2;
            num1 = num2;
            num2 = R;
        }
        printf("%d", num1);
    }
}