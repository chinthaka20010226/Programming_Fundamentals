#include<stdio.h>
#include<string.h>
int main(){
    char arr[] = "Programming Fundamentals";
    int len1,len2;
    len1 = strlen(arr);
    len2 = strlen("University of Moratuwa");
    printf("string = %s length = %d\n", arr,len1);
    printf("string = %s length = %d\n", "University of Moratuwa", len2);
    return 0;
}