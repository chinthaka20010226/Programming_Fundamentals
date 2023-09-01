#include <stdio.h>
int main() {
    float mark1,mark2,mark3,mark4,mark5; // these are marks of different five subjects.
    float full_mark; // this is full marks in five subjects.
    float per; // this is percentage of full marks.

    printf("Input the marks of sub1:%f\n");
    scanf("%f", &mark1);
    printf("Input the marks of sub2:%f\n");
    scanf("%f", &mark2);
    printf("Input the marks of sub3:%f\n");
    scanf("%f", &mark3);
    printf("Input the marks of sub4:%f\n");
    scanf("%f", &mark4);
    printf("Input the marks of sub5:%f\n");
    scanf("%f", &mark5);

    if ((mark1 <= 100) && (mark2 <= 100) && (mark3 <= 100) && (mark4 <= 100) && (mark5 <= 100)) {
        printf("Your marks is valid.\n");

        full_mark = mark1 + mark2 + mark3 + mark4 + mark5; // calculate the full marks.
        printf("Your full mark:%f\n", full_mark);

        per = full_mark / 5 ; // calculate the percentage.
        printf("Your percentage is:%f", per);
    } else {
        printf("Sorry, your marks is not valid.");
    }
    return 0;
}
