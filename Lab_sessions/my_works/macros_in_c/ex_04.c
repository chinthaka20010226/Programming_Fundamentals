#include <stdio.h>
#define even_odd(num) \
((num % 2 == 0) ? printf("number is an Even\n") : printf("number is an Odd\n"))
void main(){
    int num;
    printf("Input number:");
    scanf("%d", &num);
    even_odd(num);
}