#include <stdio.h>

void fun(int arr[]);

int main() {
    // for an array,
    int myArr[5] = {1,2,3,4,5};

    fun(myArr);
    /*printf("size of a pointer : %d\n", sizeof(int*));
    printf("size of a pointer : %d\n", sizeof(char*));
    printf("size of a pointer : %d\n", sizeof(double*));*/

    /*int size = sizeof(myArr)/sizeof(myArr[0]);
    printf("array size = %d\n", size);
    for(int i = 0;i < size;i++) {
        printf("%d ", myArr[i]);
    }*/

    // for a string,
    /*char name[] = "Chiron";

    printf("string size = %d\n", sizeof(name)/sizeof(name[0]));*/

}

void fun(int arr[]) {
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("array memory size = %d\n", sizeof(arr));
    printf("size of arr[0] = %d\n", sizeof(arr[0]));
    printf("array size = %d\n", size);
    for(int i = 0;i < size;i++) {
        printf("%d ", arr[i]);
    }
}