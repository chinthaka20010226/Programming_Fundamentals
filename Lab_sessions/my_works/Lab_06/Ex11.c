#include <stdio.h>

int main() {
    int num,count,rev,mul = 1,sum,cnt;
    printf("Enter the number : ");
    scanf("%d", &num);

    int n = num;
    while(n != 0) {
        n = n / 10;
        count++;
    }
    cnt = count;
    n = num;
    while(n != 0) {
        rev = n % 10;
        while(cnt != 0) {
            mul = mul * rev;
            cnt--;
        }
        sum = sum + mul;
        cnt = count;
        n = n / 10;
        mul = 1;
    }
    if(sum == num) {
        printf("%d is an Armstrong Number.", num);
    }else {
        printf("%d is not an Armstrong Number.", num);
    }
    return 0;
}