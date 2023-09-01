#include <stdio.h>

int main() {
    int day;
    printf("Enter the day:");
    scanf("%d", &day);

    /*if ((day >= 1) && (day <= 7)) {
        printf("Yes, this day in the week.\n");
        if (day == 1)
            printf("Monday.");
        else if (day == 2)
            printf("Tuesday.");
        else if (day == 3)
            printf("Wednesday.");
        else if (day == 4)
            printf("Thursday.");
        else if (day == 5)
            printf("Friday.");
        else if (day == 6)
            printf("Saturday.");
        else
            printf("Sunday.");
    } else
        printf("Sorry, this day not in the week.");*/

    if ((day >= 1) && (day <= 7)) {
        printf("Yes, this day in the week.\n");
        switch (day) {
            case 1:
                printf("Monday.");
                break;
            case 2:
                printf("Tuesday.");
                break;
            case 3:
                printf("Wednesday.");
                break;
            case 4:
                printf("Thursday.");
                break;
            case 5:
                printf("Friday.");
                break;
            case 6:
                printf("Saturday.");
                break;
            case 7:
                printf("Sunday.");
        }
    } else
        printf("Sorry, this day in not the week.");
    return 0;
}
