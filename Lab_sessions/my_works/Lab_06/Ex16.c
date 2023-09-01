#include <stdio.h>

int main() {
    int num,rev,sum;
    printf("Input a number : ");
    scanf("%d", &num);

    int n = num;
    while(num > 0) {
        rev = num % 10;
        sum = (sum * 10) + rev;
        num = num / 10;
    }
    if(n == sum)
        printf("Palindrome Number");
    else
        printf("Not Palindrome Number");
}