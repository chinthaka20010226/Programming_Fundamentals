#include <stdio.h>

int main() {
    int i = 1,sum; // initialization.
    while(i <= 10) { // condition.
        sum = sum + i;
        i++; // increment.
    }
    printf("%d", sum);
}