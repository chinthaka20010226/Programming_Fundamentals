#include <stdio.h>

int fact(int x);
int main() {
    int num,factOfNum;
    printf("Input the number:");
    scanf("%d", &num);

    factOfNum = fact(num);
    printf("factorial of number:%d", factOfNum);
}
int fact(int x) {
    int fact = 1;
    for(int i = 1;i <= x;i++) {
        fact = fact * i;
    }
    return fact;
}