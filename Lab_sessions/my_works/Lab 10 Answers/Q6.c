#include <stdio.h>
#define divisibility(x) x%10==0? "TRUE": "FALSE"

int main() {
    int no;
    printf("Enter no: \n");
    scanf("%d", &no);

    printf("%d is divisible by 10: %s", no, divisibility(no));
    return 0;
}
