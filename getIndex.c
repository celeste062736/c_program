#include <stdio.h>

int getIndex(int arr[], int size, int value);

int main(void) {
    int arr[] = { 11, 22, 33, 44, 55 };
    int value;
    int index;

    scanf("%d", &value);
    index = getIndex(arr, 5, value);
    if (index == -1) {
        printf("%d is not in arr\n", value);
    } else {
        printf("%d is at index %d in arr\n", value, index);
    }
}

int getIndex(int arr[], int size, int value) {
    int i;

    for(i = 0; i < size; i++) {
        if (arr[i] == value) {
            break;
        }
    }
    if (size <= i) {
        return -1;
    }
    return i;
}