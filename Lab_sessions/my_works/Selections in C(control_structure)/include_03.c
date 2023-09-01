#include <stdio.h>
int main() {
    int year;
    printf("Input the year:");
    scanf("%d", &year);
    if (year % 400 == 0)
        printf("leap year"); // 2000, 2400, 2800, .....
    else if (year % 4 == 0) {
        if (year % 100 == 0) {
            printf("Not a leap year\n"); // 2100, 2200, 2300, .....
        } else {
            printf("Leap year\n"); // 2004, 2008, 2012, .....
        }
    } else
        printf("Not a leap year\n"); // 2001, 2002, 2003, .....
}
