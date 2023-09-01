#include <stdio.h>
int main() {
    int num, countP = 0, countN = 0, sumP = 0, sumN = 0, mul3 = 0, max = 0, min = 0;
    printf("Enter the numbers: \n");
    do{
        scanf(" %d", &num);
        if(num > 0){
            countP++;
            sumP += num;

        }
        if(num < 0){
            countN++;
            sumN += num;
        }
        if((num % 3 == 0) && (num != 0))
            mul3++;
        if(num > max)
            max = num;
        else if(num < min)
            min = num;

    }while(num != 0);
    printf("No. of positive integers: %d\n", countP);
    printf("No. of negative integers: %d\n", countN);
    printf("Sum of positve intrgers: %d\n", sumP);
    printf("Sum of negative integers: %d\n", sumN);
    printf("No. of integers divisible by 3: %d\n", mul3);
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);
    return 0;
}