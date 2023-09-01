#include <stdio.h>

int main() {
    int i = 1,count; // initialization.
    while(i < 100) { // condition.
        i += 2; // modify i value.
        count++;
    }
    printf("%d", count);
}