#include <stdio.h>
int main() {
    int num1,num2,min,count = 1,hcf;
    printf("Enter two numbers : ");
    scanf("%d%d", &num1,&num2);

    if(num1 > num2) {
        min = num2;
    }else {
        min = num1;
    }
    while(count <= min) {
        if((num1 % count == 0) && (num2 % count == 0)) {
            hcf = count;
        }
        count++;
    }
    printf("HCF is = %d", hcf);
}