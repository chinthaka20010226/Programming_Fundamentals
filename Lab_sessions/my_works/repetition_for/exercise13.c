#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows:\n");
    scanf("%d", &rows);
    for(int i = 0;i <= 6;i++) {
        for(int j = 1;j <= (rows - i);j++) {
            printf("*");
        }
        printf("\n");
    }
}
