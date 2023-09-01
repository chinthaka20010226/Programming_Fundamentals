#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int k = 0;
    char name[50],x[4];
    gets(name);

    int l = strlen(name);
    //printf("%d\n", l);

    for(int i = 0;i <= l;i++) {
        if(name[i] == '-') {
            for(int j = i + 1;j < i + 4;j++) {
                if(name[j] == '\0') {
                    break;
                }
                x[k] = name[j];
                k++;
            }
            //printf("%s", x);
        }
    }
    int y = atoi(x);
    printf("I have an assignment %c", y);

}
