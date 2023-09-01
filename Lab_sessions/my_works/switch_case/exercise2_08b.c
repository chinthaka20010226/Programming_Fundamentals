#include <stdio.h>

int main() {
    int Jan,Feb,Mar,Apr,May,Jun,Jul,Agu,Sep,Oct,Nov,Dec; // these are months in the year.
    printf("Input the days in the months in the year:\n");
    scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &Jan,&Feb,&Mar,&Apr,&May,&Jun,&Jul,&Agu,&Sep,&Oct,&Nov,&Dec);

    switch (Feb) { // We know, Februvary month has differant numbers of days.Afetr that, we are gonna check our year leap year or not leap year.
        case 28:
            printf("This is a not leap year.\n");
            int year1;
            printf("Enter the year:\n");
            scanf("%d", &year1);
            if (year1 % 4 == 0) {
                if (year1 % 100 == 0) {
                    if (year1 % 400 == 0) {
                        printf("Not valid year, because this year is a lep year.");
                    } else {
                        printf("365 days in this year, because this year is not a leap year.");
                    }
                } else {
                    printf("Not valid year, because this year is a leap year.");
                }
            } else {
                printf("365 days in this year, because this year is not a leap year.");
            }
            break;
        default:
            printf("This is a leap year.");
            int year2;
            printf("Enter the year:\n");
            scanf("%d", &year2);
            if (year2 % 4 == 0) {
                if (year2 % 100 == 0) {
                    if (year2 % 400 == 0) {
                        printf("366 days in this year, because this year is a lep year.");
                    } else {
                        printf("Not valid year, because this year is not a leap year.");
                    }
                } else {
                    printf("366 days in this year, because this year is a leap year.");
                }
            } else {
                printf("Not valid year, because this year is not a leap year.");
            }
            break;
    }

    return 0;
}
