/*#include "stdio.h"
void main() {
    int a = 10,b = 9,c;
    int *p,*q;
    p = &a;
    q = &b;
    //p = &a,&b;
    //p = (&a,&b);
    c = *p;
    printf("value of a = %d\n", a);
    printf("value of a = %d\n", *p);
    printf("address of a : %x\n", &a);
    printf("address of a : %x\n", p);
    printf("address of p : %x\n", &p);
    printf("c = %d\n", c);

}*/

/*#include "stdio.h"
void main() {
    double a = 10,b = 5;
    double *p,*q;
    p = &a;
    q = &b;
    *q = *p;
    printf("a =%lf %lf %lf", a,*p,*q);

}*/

/*#include "stdio.h"
int main() {
    int a = 10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;
    *p = 20;
    **q = 30;
    ***r = 40;

    printf("a = %d\n", a);
    printf("a = %d\n", *p);
    printf("a = %d\n", *(*q));
    printf("a = %d\n", *(*(*r)));
    printf("address of q = %x %x\n", r,&q);
    printf("address of p = %x %x\n", q,&p);
    printf("address of a = %x %x\n", p,&a);
}*/

/*#include <stdio.h>
int main() {
    int arr[5] = {1,4,2,-8,0};
    int *p = &arr[0];
    int *q = &arr[0];
    //p = p + q;
    printf("value is: %d\n", *p);
    printf("address of element is:%u\n", p);
    p = p + 2;
    printf("value of 3 element:%d\n", arr[2]);
    *p = 34;
    printf("value is: %d\n", *p);
    printf("address of element is:%u\n", p);
    printf("value of 3 element:%d\n", arr[2]);

}*/

/*#include "stdio.h"
int main() {
    int a[] = {2,4,3,0,-7};
    int *p = a;
    int *q = &a[3];
    printf("q-p = %d\n", q-p);
    printf("p-q = %d\n", p-q);
    printf("value = %d\n", *q);
    q = q-2;
    printf("value = %d\n", *q);
    p = p + 2;
    printf("q-p = %d\n", q-p);
    q = q - 2;
    printf("value = %d\n", *q); //print is garbage value outside of the array,

}*/

/*#include "stdio.h"
int main() {
    int a[] = {3,2,67,0,56};
    int *p;
    p = &a[3];
    printf("%d %d\n", *--p,*--p);
    printf("%d\n", *p);

}*/

/*#include "stdio.h"
void main() {
    int a[] = {10,11,-1,56,67,5,4};
    int *p,*q;
    p = a;
    printf("%d\n", *p);
    printf("%d %d %d\n", (*p)++,*p++,*++p);
    printf("%d\n", *p);
    q = p+3;
    printf("%d\n", *q - 3);
    printf("%d\n", *--p + 5);
    printf("%d\n", *p + *q);

}*/

/*#include "stdio.h"
void main() {
    const int a = -11;
    const int *ptr = &a;
    *ptr = 12; // Eroor,we can't modify this value.
    printf("a = %d\n", a);

}*/

/*#include <stdio.h>
void main() {
    char str[] = "welcome to jenny's lectures";
    char *ptr;
    ptr = str;
    printf("%c\n", *ptr);
    //printf("ptr address = %u\n", ptr);
    printf("%c\n", *(ptr++ + 1));
    //printf("ptr address = %u\n", ptr);
    printf("%c\n", *((ptr-- + 5)-1)+3);
    //printf("ptr address = %u\n", ptr);
    printf("%c\n", *(++ptr + 10)-32);
    printf("%c %c %c\n", *ptr,*++ptr,*--ptr);

}*/

/*#include <stdio.h>
void main() {
    void *vp;

    int a = 5;
    float b = 1.1;
    char c = 'c';

    vp = &a;
    printf("a = %d\n", *(int *)vp);
    vp = &b;
    printf("b = %.2f\n", *(float *)vp);
    vp = &c;
    printf("c = %c\n", *(char *)vp);

}*/

/*#include "stdio.h"
void main() {
    int a = 3;
    int *ptr1 = NULL;
    ptr1 = &a;
    //int *ptr2;
    if(ptr1 == NULL) {
        printf("this is null pointer.\n");
    }
    else {
        printf("%d\n", *ptr1);
    }
    //printf("%d\n", ptr2);

}*/

/*#include "stdio.h"
#include "stdlib.h" // use malloc,

int *f() {
    int a = 9;
    return &a;
}

void main() {
    int *ptr = NULL;
    {
        int a = 5;
        ptr = &a;
        printf("a = %d\n", *ptr);
    }

    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 10;
    printf("%d\n", *ptr);
    free(ptr);
    ptr = NULL;
    printf("%d\n", *ptr); // dangling pointer,

    printf("%d\n", *ptr);

}*/

#include "stdio.h"
#include <stdlib.h>
void main() {
    int a = 9;
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 67;
    printf("%d\n", *ptr);

    /*int a = 9;
    int *ptr = &a;
    printf("%d\n", *ptr);*/

    /*int *ptr = NULL;
    printf("%d\n", *ptr); // we can't use dereference operator,because cras your program*/



}