#include <stdio.h>

int check(int x);
int main() {
    int num;
    printf("Input the number:");
    scanf("%d", &num);

    num = check(num);
}
int check(int x) {
    int count;
    for(int i = 1;i <= x;i++) {
        if(x % i == 0) {
            count++;
        }
    }
    if(count == 2) {
        printf("%d is a prime number.", x);
        return x;
    }else {
        printf("%d is not a prime number.", x);
        return x;
    }
}