//Call by value.
#include <stdio.h>

int multi(int x,int y); // function prototype, also called function declaration.

int main() { // // main function, program starts from here.
    int m,n;
    printf("Enter two numbers:\n");
    scanf("%d%d", &m,&n);

    printf("Multiplication of two integer numbers:%d", multi(m,n));
}

int multi(int x,int y) {  // function definition.
    int multi = x * y;
    return multi;
}

//Call by reference.

/*#include <stdio.h>

int multi(int *x,int *y);

int main() {
    int m,n;
    printf("Enter two numbers:\n");
    scanf("%d%d", &m,&n);

    printf("Multiplication of two integer numbers:%d", multi(&m,&n));
}

int multi(int *x,int *y) {
    int multi = *x * *y;
    return multi;
}*/