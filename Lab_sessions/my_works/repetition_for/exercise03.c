#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;
    printf("Input the 'n' number:\n"); // 'n' means fibonacci term.
    scanf("%d", &n);

    if (n<0) {
        printf("Invalid number.");
    } else if (n == 0) {
        printf("0");
    } else if (n == 1) {
        printf("0 1");
    } else {
        printf("0 1 ");
        for(int i = 2; i <= n; i++) {
            c = a + b;
            printf("%d ", c);
            a=b;
            b=c;
        }
    }
}
