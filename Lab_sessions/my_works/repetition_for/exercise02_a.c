#include <stdio.h>

int main() {
    int i;
    int sum = 0; // sum mean summation.
    for(i = 1;i <= 10;i++) {
        sum = sum + i;
        printf("summation is %d\n", sum);
    }
}
