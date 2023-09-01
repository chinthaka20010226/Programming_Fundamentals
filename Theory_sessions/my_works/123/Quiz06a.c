#include <stdio.h>
int main() {
    int width = 1189,height = 841, temp;

    for(int i = 0;i <= 8;i++) {
        printf("A%d : %d mm x %d mm\n", i,width,height);
        temp = width;
        width = height;
        height = temp/2;
    }
    return 0;
}
