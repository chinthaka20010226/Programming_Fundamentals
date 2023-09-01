#include <stdio.h>
int main() {
    int num,count1 = 0,count2 = 0,count3 = 0,sum1 = 0,sum2 = 0,max = 0,min = 0;

    printf("Input a number : \n");
    do {
        scanf("%d", &num);

        if(num == 0){
            break;
        }
        if(num > 0) {
            count1++;
            sum1 = sum1 + num;
        }else if(num < 0) {
            count2++;
            sum2 = sum2 + num;
        }
        if((num % 3 == 0) && (num != 0)) {
            count3++;
        }
        if(num > max)
            max = num;
        else if(num < min)
            min = num;
    }while(1);
    printf("Number of positive integers:%d\n", count1);
    printf("Number of negative integers:%d\n", count2);
    printf("Sum of positive integers:%d\n", sum1);
    printf("Sum of negative integers:%d\n", sum2);
    printf("Number of multipliers of 3 :%d\n", count3);
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);
    return 0;
}