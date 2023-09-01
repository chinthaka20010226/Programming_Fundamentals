#include <stdio.h>
int main() {
    int i,j,mul; // mul means multiplication.
    for(i = 1;i <= 10;i++) {

        for (j = 1; j <= 10;j++) {
            mul = i * j;
            printf("multiplication is:%d\t\n", mul);
        }
        printf("\n");
    }
}
