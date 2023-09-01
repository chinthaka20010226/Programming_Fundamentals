#include <stdio.h>

int max(int x,int y);
int min(int x,int y);
int main() {
    int val1,val2,maximum,minimum;
    printf("Input two values:");
    scanf("%d%d", &val1,&val2);

    maximum = max(val1,val2);
    printf("%d is maximum value.\n", maximum);

    minimum = min(val1,val2);
    printf("%d is minimum value.", minimum);
}
int max(int x,int y) {
    if(x > y)
        return x;
}
int min(int x,int y) {
    if(x > y)
        return y;
}