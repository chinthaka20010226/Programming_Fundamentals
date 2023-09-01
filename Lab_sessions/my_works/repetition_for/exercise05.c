#include <stdio.h>

int main() {
    int n,count = 0; // count means calculation.
    printf("Enter the positive value:\n");
    scanf("%d", &n);

    if (n > 0) {
        printf("Valid no.\n");
        for(int i = 1;i <= n;i++) {
            if (n % i == 0) {
                count++;
            }
        }
        if (count == 2) {
            printf("This number is a prime number."); // prime number means,it has a two factors.
        } else {
            printf("This number is not a prime number.");
        }
    } else {
        printf("Not valid no.\n");
    }
}