#include <stdio.h>

int main() {
    int num,pow,x = 1;
    printf("Enter the number and power's number : ");
    scanf("%d%d", &num,&pow);

    while(pow > 0) {
        x = x * num;
        pow--;
    }
    printf("%d", x);
}