#include <stdio.h>

int main() {
    int i = 3,sum; // initialization
    while(i < 99) { // condition.
        sum = sum + i;
        i += 2; // modify i value.
    }
    printf("%d", sum);
}