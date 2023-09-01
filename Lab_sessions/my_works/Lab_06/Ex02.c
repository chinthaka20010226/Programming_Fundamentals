#include <stdio.h>

int main() {
    int count,i = 1; // initialization.
    while(i <= 20) { // condition.
        printf("%d\t", i);
        i++; // modify i value.
        count++;
        if(count % 5 == 0) {
            printf("\n");
        }
    }
    return 0;
}