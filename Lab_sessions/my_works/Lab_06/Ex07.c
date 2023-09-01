#include <stdio.h>

int main() {
    char name[30]; // declare name variable by string.
    char id[30]; // declare id variable by string.
    int duration; // declare duration variable by integer.

    printf("Input your name : \n"); // output function.
    scanf("%s", &name); // input function.
    printf("Input your id number : \n");
    scanf("%s", &id);
    printf("Input duration time : \n");
    scanf("%d", &duration);

    int n = duration; // now, I want to declare n variable by integer.
    float x = 200,fees,tot_fees,ann_fees; // x means first year fees,fees means amount accumulated in future years,tot_fees means total fees ans ann_fees means annual fees.
    while(duration > 1) { // condition statement.
        x = x * 1.05;
        fees = fees + x;
        duration--; // modify statement.
    }
    tot_fees = fees + 200;
    ann_fees = tot_fees / n; // n means duration time.
    printf("Annual course fees is : $ %f and Total course fees is : $ %f", ann_fees,tot_fees);
}