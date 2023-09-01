#include <stdio.h>
#define checkNo(x) x%2==0? printf("Even number"): printf("Odd number")

int main() {
    int no;
    printf("Enter no: \n");
    scanf("%d", &no);

    checkNo(no);
    return 0;
}
