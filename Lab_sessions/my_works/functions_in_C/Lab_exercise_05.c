#include <stdio.h>

int Fibo(int x);
int main() {
    int num;
    printf("Input the number:");
    scanf("%d", &num);

    Fibo(num);
}
int Fibo(int x) {
    int Fibo;
    if(x == 0) {
        printf("0");
        return Fibo;
    }else if(x == 1) {
        printf("0 1");
        return Fibo;
    }else {
        printf("0 1");
        int a = 0,b = 1;
        for(int i = 1;i < x;i++) {
            Fibo = a + b;
            printf("% d",  Fibo);
            a = b;
            b = Fibo;
        }
        return Fibo;
    }
}