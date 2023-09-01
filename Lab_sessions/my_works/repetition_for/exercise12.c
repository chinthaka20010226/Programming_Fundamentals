#include <stdio.h>

int main() {
    int i,sum; // sum means summation.
    for(i = 1;i < 100;i = i + 2) {
        sum = sum + i;
    }
    printf("%d", sum);
}
