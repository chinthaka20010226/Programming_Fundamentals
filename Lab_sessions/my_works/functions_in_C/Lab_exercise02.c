#include <stdio.h>

int sumOfSquare(int x,int y);
int main(){
    int m1,m2,n;
    printf("Input two integer numbers:");
    scanf("%d%d", &m1,&m2);

    n = sumOfSquare(m1,m2);
    printf("sum of squares of two integers numbers:%d", n);
}
int sumOfSquare(int x,int y) {
    int sumOfSquare = x * x + y * y;
    return sumOfSquare;
}