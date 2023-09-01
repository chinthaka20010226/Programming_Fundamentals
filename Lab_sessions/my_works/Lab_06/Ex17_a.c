#include <stdio.h>
int main() {
    int num,count1,count2,sum1 = 0,sum2 = 0,cnt1,cnt2,count3 = 0,i = 0,j = 0,div;
    do {
        printf("Input a number : \n");
        scanf("%d", &num);

        if(num > 0) {
            count1++;
            printf("Number of positive integers:%d\n", count1);
            cnt1 = count1 - i;
            while(cnt1 != 0) {
                sum1 = sum1 + num;
                cnt1--;
            }
            printf("Sum of positive integers:%d\n", sum1);
            i++;
            if(num % 3 == 0) {
                count3++;
            }
            printf("Number of multipliers of 3 :%d\n", count3);
            div = sum1 / count1;
            if(count1 > 1) {
                if(num >= div) {
                    printf("Maximum value:%d\n", num);
                }else{
                    printf("Maximum value:%d\n", sum1 - num);
                }
            }
        }else if(num < 0) {
            count2++;
            printf("Number of negative integers:%d\n", count2);
            cnt2 = count2 - j;
            while(cnt2 != 0) {
                sum2 = sum2 + num;
                cnt2--;
            }
            printf("Sum of negative integers:%d\n", sum2);
            j++;
            if(num % 3 == 0) {
                count3++;
            }
            printf("Number of multipliers of 3 :%d\n", count3);
            div = sum2 / count2;
            if(count2 > 1) {
                if(num < div) {
                    printf("Minimum value:%d\n", num);
                }else{
                    printf("Minimum value:%d\n", sum2 - num);
                }
            }
        } else{
            break;
        }
    }while(1);
}