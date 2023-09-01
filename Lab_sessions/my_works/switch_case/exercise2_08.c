#include <stdio.h>
int main() {
    int year;
    printf("Enter the year:\n");
    scanf("%d", &year);

    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) { // We should, first division by 4, second division by 100, third division by 400.
        printf("This is a leap year.\n");
        int month;
        printf("Enter the number of month.\n");
        scanf("%d", &month);

        switch (month) {
            case 1:printf("This is a January month, it has 31 days.\n");break;
            case 2:printf("This is a February month, it has 29 days.\n");break;
            case 3:printf("This is a March month, it has 31 days.\n");break;
            case 4:printf("This is a April month, it has 30 days.\n");break;
            case 5:printf("This is a May month, it has 31 days.\n");break;
            case 6:printf("This is a June month, it has 30 days.\n");break;
            case 7:printf("This is a July month, it has 31 days.\n");break;
            case 8:printf("This is a August month, it has 31 days.\n");break;
            case 9:printf("This is a September month, it has 30 days.\n");break;
            case 10:printf("This is a October month, it has 31 days.\n");break;
            case 11:printf("This is a November month, it has 30 days.\n");break;
            default:printf("This is a December month, it has 31 days.\n");break;
        }
        printf("This year has 366 days.");
    } else {
        printf("This is a not leap year.\n");
        int month;
        printf("Enter the number of month.\n");
        scanf("%d", &month);

        switch (month) {
            case 1:printf("This is a January month, it has 31 days.\n");break;
            case 2:printf("This is a February month, it has 28 days.\n");break;
            case 3:printf("This is a March month, it has 31 days.\n");break;
            case 4:printf("This is a April month, it has 30 days.\n");break;
            case 5:printf("This is a May month, it has 31 days.\n");break;
            case 6:printf("This is a June month, it has 30 days.\n");break;
            case 7:printf("This is a July month, it has 31 days.\n");break;
            case 8:printf("This is a August month, it has 31 days.\n");break;
            case 9:printf("This is a September month, it has 30 days.\n");break;
            case 10:printf("This is a October month, it has 31 days.\n");break;
            case 11:printf("This is a November month, it has 30 days.\n");break;
            default:printf("This is a December month, it has 31 days.\n");break;
        }
        printf("This year has 365 days.");
    }


}