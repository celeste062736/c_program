#include <stdio.h>

void printIntegerArray(int a[], int n);
int getIntegerArray(int a[], int n, int s);
void reverseIntegerArray(int a[], int n);

int main(void) {
    int arr[10];
    int size;
    double avg;

    size = getIntegerArray(arr, 10, -1);
    printf("\n");
    printIntegerArray(arr, size);
    printf("\n");
    reverseIntegerArray(arr, size);
    printIntegerArray(arr, size);
    return 0;
}

void printIntegerArray(int a[], int n) {
    int index;

    for(index = 0; index < n; index++) {
        printf("%d: %d\n", index + 1, a[index]);
    }
}

int getIntegerArray(int a[], int n, int s) {
    int index;
    int temp;

    for(index = 0; index < n; index++) {
        scanf("%d", &temp);
        if (temp == s) {
            break;
        }
        a[index] = temp;
    }
    return index;
}

void reverseIntegerArray(int a[], int n) {
    int index;
    int temp;

    for (index = 0; index < n / 2; index++) {
        temp = a[index];
        a[index] = a[n - 1 - index];
        a[n - 1 - index] = temp;
    }
}