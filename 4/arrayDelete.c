#include <stdio.h>

int deleteElement(int a[], int size, int index);
void printIntegerArray(int a[], int n);

int main(void) {
    int arr[5] = { 11, 22, 33, 44, 55 };
    int size;

    size = deleteElement(arr, 5, 2);
    printIntegerArray(arr, size);
    return 0;
}

int deleteElement(int a[], int size, int index) {
    int i;

    if (size <= index || index < 0) {
        return -1;
    }
    if (size == 1) {
        return 0;
    }
    for(i = index; i + 1 < size; i++) {
        a[i] = a[i + 1];
    }
    return size - 1;
}

void printIntegerArray(int a[], int n) {
    int index;

    for(index = 0; index < n; index++) {
        printf("%d: %d\n", index + 1, a[index]);
    }
}