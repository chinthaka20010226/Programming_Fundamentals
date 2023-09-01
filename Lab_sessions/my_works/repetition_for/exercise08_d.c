#include <stdio.h>

int main() {
    int rows;
    printf("Enter the rows:\n");
    scanf("%d", &rows);
    for(int i = 1;i <= rows;i++) {
        for(int spase = 1;spase <= (rows - i);spase++) {
            printf(" ");
        }
        for(int j = 1;j <= (2 * i) - 1;j++) {
            printf("*");
        }
        printf("\n");
    }
}
