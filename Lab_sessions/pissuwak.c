#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m,p = 0,count;
    scanf("%d", &n);

    for(int i = 1;i <= n;i++) {
        scanf("%d", &m);
        for(int j = 1;j <= m;j++) {
            char s1[30];
            scanf("%s", s1);
            for(int l = 0;s1[l] != '\0';l++) {
                count = p;
                for(int k = 0;k < 25;k++) {
                    if(s1[k] == 97 + l) {
                        count++;
                        printf("%c", s1[k]);
                        break;
                    }
                }
                if(count > 0)
                    break;
            }
        }
        printf("\n");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}