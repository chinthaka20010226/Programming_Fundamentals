#include <stdio.h>
#define swap(var1, var2) int x=var1; var1=var2; var2=x;
int main() {
    int no1, no2;
    printf("Enter no1:");
    scanf("%d", &no1);

    printf("Enter no2:");
    scanf("%d", &no2);

    swap(no1,no2);
    printf("no1: %d\nno2: %d", no1,no2);
    return 0;
}
