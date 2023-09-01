#include <stdio.h>

int main() {
    int sub_m1,sub_m2,sub_m3,sub_m4,sub_m5,per;
    printf("Enter the marks of five subjects:\n");
    scanf("%d %d %d %d %d", &sub_m1,&sub_m2,&sub_m3,&sub_m4,&sub_m5);

    per = (sub_m1+sub_m2+sub_m3+sub_m4+sub_m5)/5;

    if(100 > per > 0) {
        printf("Ypu have a grade.\n");
        if(per > 75) {
            printf("Your garde is 'A'.");
        } else if(per > 65){
            printf("Your garde is 'B'.");
        } else if(per > 55) {
            printf("Your garde is 'C'.");
        } else if(per > 45) {
            printf("Your garde is 'D'.");
        } else {
            printf("Your garde is 'F'.You have to face exam again.");
        }
    } else
        printf("Your marks is a invalid.");
    return 0;
}
