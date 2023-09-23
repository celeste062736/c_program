#include <stdio.h>

int deleteElement(int a[], int s, int p);
void printIntegerArray(int a[], int n);

int main(void) {
    int arr1[] = { 11, 22, 33, 44, 55 };
    int size;

    size = deleteElement(arr1, 5, 2);
    printIntegerArray(arr1, size);
    return 0;
}

int deleteElement(int a[], int s, int p) {
    int i;

    if (s == 0) {
        return 0;
    }
    if (p < 0 || p >= s) {
        return -1;
    }
    for (i = p; i + 1 < s; i++) {
        a[i] = a[i + 1];
    }
    return s - 1;
}

void printIntegerArray(int a[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("%d: %d\n", i, a[i]);
    }
}