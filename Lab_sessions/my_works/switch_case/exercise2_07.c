#include <stdio.h>

int main() {
    char input;
    printf("Input your operation.\n");
    scanf("%c", &input);

    signed int num1,num2,add,sub,mul,div;

    switch (input) {
        case 'a':
            printf("Enter your num1,num2.");
            scanf("%d,%d", &num1,&num2);
            add = num1 + num2;
            printf("add = %d", add);
            break;
        case 's':
            printf("Enter your num1,num2.");
            scanf("%d,%d", &num1,&num2);
            sub = num1 - num2;
            printf("sub = %d", sub);
            break;
        case 'm':
            printf("Enter your num1,num2.");
            scanf("%d,%d", &num1,&num2);
            mul = num1 * num2;
            printf("mul = %d", mul);
            break;
        default:
            printf("Enter your num1,num2.");
            scanf("%d,%d", &num1,&num2);
            div = num1/num2;
            printf("div = %d", div);
            break;
    }

    return 0;
}
