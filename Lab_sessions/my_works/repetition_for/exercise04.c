#include <stdio.h>

int main() {
    int n,i,f = 1;
    printf("Enter the 'n' value:\n"); // 'n' means factorial terms.
    scanf("%d", &n);

    if (n < 0) {
        printf("This number is not valid.\n");
    } else if (n == 0) {
        printf("Factorial of 0 is 1.");
    } else if (n == 1) {
        printf("Factorial of 1 is 1.");
    } else {
        for(i = 2;i <= n;i++) {
            f = i * f;
        }
        printf("Factorial of %d is %d.\n", n,f);
    }
}
