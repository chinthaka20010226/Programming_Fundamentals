#include <stdio.h>
int main() {
    char input;
    int r,a,b,x,h;
    int A;

    printf("Input your choice:\n");
    scanf("%c", &input);

    switch (input) {
        case 'C':
            printf("Input your 'r' value.");
            scanf("%d", &r);
            A = 3.143 * r * r;
            printf("Circle area:%d\n", A);
            break;
        case 'R':
            printf("Input your 'a' and 'b' value.");
            scanf("%d,%d", &a,&b);
            A = a * b;
            printf("Rectangle are:%d\n", A);
            break;
        default:
            printf("Input your 'x' and 'h' value.");
            scanf("%d,%d", &x,&h);
            A = 0.5 * x * h;
            printf("Triangle area:%d\n", A);
            break;
    }

    return 0;
}