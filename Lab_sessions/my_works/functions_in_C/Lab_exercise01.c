#include <stdio.h>

int multi(int x,int y);
int main() {
    int n,m,multiplication;
    printf("Input two numbers : ");
    scanf("%d%d", &n,&m);

    multiplication = multi(n,m);
    printf("multiplication of two integers:%d", multiplication);
}
int multi(int x,int y) {
    int multi = x * y;
    return multi;
}