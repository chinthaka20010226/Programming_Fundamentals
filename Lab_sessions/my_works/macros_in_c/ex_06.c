#include <stdio.h>
#define IS_TEN(num) (((num)%10)?"FALSE":"TRUE")
void main(){
    int num;
    printf("Input number:");
    scanf("%d", &num);
    printf("%d is divisible by 10:%s\n", num,IS_TEN(num));

}