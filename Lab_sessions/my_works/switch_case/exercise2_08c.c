#include <stdio.h>

int main() {
    int year; // First, we should input the year.
    printf("Enter the year:\n");
    scanf("%d", &year);

    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) { // This statement check the leap or not leap.
        printf("This is a leap year.\n");
        int fmonth1; // You know, A leap year has 29 days of february month.
        printf("Input days of February month:\n");
        scanf("%d", &fmonth1);
        printf("This year has 366 days.");
    } else {
        printf("This is a not leap year.\n");
        int fmonth2; // You know, A not leap year has 28 days of february month.
        printf("Input days of February month:\n");
        scanf("%d", &fmonth2);
        printf("This year has 365 days.");
    }
    return 0;
}
