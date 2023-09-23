#include <stdio.h>

int arrayCmp(int a1[], int a2[], int size);

int main(void) {
    int arr1[5] = { 0, 10, 20, 0, 30 };
    int arr2[5] = { 0, 10, 20, 0, 30 };
    int arr3[5] = { 0, 20, 30, 0, 40 };

    if (arrayCmp(arr1, arr2, 5) == 0) {
        printf("arr1 and arr2 is same.\n");
    } else {
        printf("arr1 and arr2 is different.\n");
    }
    if (arrayCmp(arr1, arr3, 5) == 0) {
        printf("arr1 and arr3 is same.\n");
    } else {
        printf("arr1 and arr3 is different.\n");
    }
    return 0;
}

int arrayCmp(int a1[], int a2[], int size) {
    int index;

    for(index = 0; index < size; index++) {
        if (a1[index] != a2[index]) {
            return 1;
        }
    }
    return 0;
}