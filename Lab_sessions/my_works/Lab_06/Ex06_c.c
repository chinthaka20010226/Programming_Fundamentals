#include <stdio.h>

int main() {
    int i = 2,count; // initialization.
    while(i <= 100) { // condition.
        i += 2; // update i value.
        count++;
    }
    printf("%d", count);
}