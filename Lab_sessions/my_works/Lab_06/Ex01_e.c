#include <stdio.h>

int main() {
    int i = 2; // initialization.
    while(i <= 33) { // condition.
        printf("%d\n", i);
        i = i*2 - 1; // modify value.
    }
}