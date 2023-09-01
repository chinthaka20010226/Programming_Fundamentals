//Call by value.
#include <stdio.h>

int sumOfSquare(int x,int y); //function prototype, also called function declaration.

int main() { //main function, program starts from here.
    int a,b;
    printf("Input two numbers:\n");
    scanf("%d%d", &a,&b);

    printf("sum of squares of two numbers:%d", sumOfSquare(a,b));
}

int  sumOfSquare(int x,int y) { //function definition.
    int sumOfSquare = x*x + y*y;
    return sumOfSquare;
}

//Call by reference.
/*#include <stdio.h>

int sumOfSquare(int *x,int *y);

int main() {
    int a,b;
    printf("Input two numbers:\n");
    scanf("%d%d", &a,&b);

    printf("sum of squares of two integer numbers:%d", sumOfSquare(&a,&b));
}

int sumOfSquare(int *x,int *y) {
    int sumOfSquare = (*x)*(*x) + (*y)*(*y);
    return sumOfSquare;
}*/