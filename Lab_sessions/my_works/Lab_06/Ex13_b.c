#include <stdio.h>

int main() {
    int num1,num2,p = 0,q = 0,x = 0,y = 0;
    printf("Input two numbers : \n");
    scanf("%d%d", &num1,&num2);

    p = num1;
    q = num2;
    if(p > q) {
        if(p % q == 0) {
            printf("Lowest Common Multiple : %d", p);
        }else {
            do {
                p++;
                x = p%num1;
                y = p%num2;
            }while(x != y);
            printf("Lowest Common Multiple : %d", p);
        }
    }else if(p < q) {
        do {
            q++;
            x = q%num1;
            y = q%num2;
        }while(x != y);
        printf("Lowest Common Multiple : %d", q);
    }else {
        printf("Lowest Common Multiple : %d", p);
    }
}