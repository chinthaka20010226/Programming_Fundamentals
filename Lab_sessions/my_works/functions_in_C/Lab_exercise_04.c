#include <stdio.h>

int fact(int x); //function prototype, also called function declaration.

int main() { //main function, program start from here.
    int num;
    printf("Input the number:\n");
    scanf("%d", &num);

    printf("factorial value is %d", fact(num)); // function call.
}

int fact(int x) { //function definition.
    int mul = 1;
    for(int i = 1;i <= x;i++) {
        mul = mul * i;
    }
    return mul;
}