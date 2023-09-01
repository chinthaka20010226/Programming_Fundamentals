#include <stdio.h>
int main() {
    int day;
    printf("Enter the number in week:\n");
    scanf("%d", &day);
    if (7 >= day >= 1) {
        printf("Yes, in a weekday\n");
        if (day == 1)
            printf("today is a Monday.");
        else if (day == 2)
            printf("today is a Tuesday.");
        else if (day == 3)
            printf("today is a Wednesday.");
        else if (day == 4)
            printf("today is a Thursday.");
        else if (day == 5)
            printf("today is a Friday.");
        else if (day == 6)
            printf("today is a Saturday.");
        else
            printf("today is a Sunday.");
    }
    else
        printf("Not a this weekday.");
}