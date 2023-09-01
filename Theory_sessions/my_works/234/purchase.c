#include <stdio.h>

int main() {
    int n,sum = 0,dis,tot;
    printf("Enter the number of food:\n");
    scanf("%d", &n);
    for(int i = 1;i <= n;i++) {
        int input;
        printf("Enter the amounts of foods:\n");
        scanf("%d", &input);
        sum = sum + input;
    }
    printf("summation = %d\n", sum);
    if (sum > 1000) {
        dis = sum * 0.1;
        tot = sum - dis;
        printf("You have to pay total amount Rs :%d", tot);
    }
}