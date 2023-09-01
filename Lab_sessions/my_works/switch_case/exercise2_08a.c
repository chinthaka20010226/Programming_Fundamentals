#include <stdio.h>
int main() {
    int year;
    printf("Enter the year:\n");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("366 days in this year, because this year is a lep year.");
            } else {
                printf("365 days in this year, because this year is not a leap year.");
            }
        } else {
            printf("366 days in this year, because this year is a leap year.");
        }
    } else {
        printf("365 days in this year, because this year is not a leap year.");
    }

    return 0;
}
