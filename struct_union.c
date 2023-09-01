//Structure in C,
//Initialization & Accessing of Structure.

/*#include <stdio.h>
struct student{
    int rollno;
    char name[20];
    float marks;
}; //s = {3};
//struct student s1 = {1,"Chinthaka",1.23}; //valid for global variable.
//struct student s2 = {2,"Parami", 2.34};

void main(){
    //struct student s1 = {1,"Chinthaka",1.23};
    //struct student s2 = {2,"Parami", 2.34};
    //struct student s2;
    //s2 = s1; //valid for same data type.

    //printf("info for s1");
    //printf("\n%d %s %f", s1.rollno,s1.name,s1.marks);
    //printf("\ninfo for s2");
    //printf("\n%d %s %f", s2.rollno,s2.name,s2.marks);
    //printf("\ninfo for s");
    //printf("\n%d %s %f", s.rollno,s.name,s.marks);

    struct student s;
    printf("Enter info for s:");
    scanf("%d %s %f", &s.rollno,s.name,&s.marks);
    printf("\ninfo for s:");
    printf("\n%d %s %f", s.rollno,s.name,s.marks);
}*/

//Array of Structure,
//Pointer of Structure,

/*#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    float marks;
};
void main(){
    struct student s1 = {1,"Jenny",10};
    struct student *ptr = &s1;

    printf("Info for s1:");
    printf("\n%d %s %f", ptr -> rollno,ptr -> name,ptr -> marks); // '->' this is operator.
    printf("\n%d %s %f", (*ptr).rollno,(*ptr).name,(*ptr).marks); // *,paranthesis and doit operators use this time.
    //printf("\n%d %s %f", *s1.rollno,*s1.name,*s1.marks);
}*/

//Union in C,
/*#include <stdio.h>
union abc{
    int a;char b;float c;
};
void main(){
    union abc u;
    union abc *ptr = &u;
    u.a = 1;
    //u.b = 65;
    //u.c = 78.11;
    printf("a value is :%d", ptr -> a);
    printf("\nb value is :%c", ptr -> b);
    printf("\nc value is :%f", ptr -> c); // print only c value...
    //printf("%d %c %f\n",(*ptr).a,(*ptr).b,(*ptr).c);
}*/



