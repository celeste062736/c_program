#include <stdio.h>
#include <string.h>

int arrayCmp(int a1[], int a2[], int size) {
    return strncmp(a1, a2, size);
}

int main(void) {
    int arr1[] = { 10, 0, 20, 30, 0};
    int arr2[] = { 10, 0, 20, 30, 0};
    int arr3[] = { 10, 0, 30, 40, 10};

    if (arrayCmp(arr1, arr2, 5) == 0) {
        printf("arr1 and arr2 is same\n");
    } else {
        printf("arr1 and arr2 is different\n");
    }
    if (arrayCmp(arr1, arr3, 5) == 0) {
        printf("arr1 and arr3 is same\n");
    } else {
        printf("arr1 and arr3 is different\n");
    }
    return 0;
}