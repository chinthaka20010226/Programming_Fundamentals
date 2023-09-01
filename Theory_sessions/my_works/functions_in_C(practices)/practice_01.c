#include <stdio.h>

int check(int x);
int main() {
    int num;
    printf("Input the number : ");
    scanf("%d", &num);

    check(num);
}
int check(int x) {
    if(x % 2 == 0) {
        printf("%d is a even number.", x);
        return x;
    }
    else
        printf("%d is a odd number.", x);
        return x;
}