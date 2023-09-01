#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    for(int i = 1;i < num;i++) {
        printf("  ");
        for(int j = 1;j < num;j++) {
            printf("* ");
        }
        printf("\n");
    }
    for(int p = 0;p <= num;p++) {
        for(int k = p;k > 0;k--) {
            printf(" ");
        }
        for(int l = num - p;l >= 0;l--) {
            printf("* ");
        }
        printf("\n");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}