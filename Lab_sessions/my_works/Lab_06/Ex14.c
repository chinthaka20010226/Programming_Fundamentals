#include <stdio.h>

int main() {
    int num,count;
    printf("Input the number : ");
    scanf("%d", &num);

    while(num != 0) {
        num = num/10;
        count++;
    }
    printf("Number of Digits : %d", count);
}