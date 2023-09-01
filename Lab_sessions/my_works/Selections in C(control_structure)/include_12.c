#include <stdio.h>
int main() {
    int amount; // before discount.
    printf("Input the customer amount:\n");
    scanf("%d", &amount);
    int discount;
    if (amount > 5000) {
        discount = (amount/100)*15;
        printf("discount = %d\n", discount);
    } else {
        discount = (amount / 100) * 10;
        printf("discount = %d\n", discount);
    }
    int pay; // after the discount.
    pay = amount - discount;
    printf("pay = %d", pay);
}
