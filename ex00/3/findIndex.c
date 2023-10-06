#include <stdio.h>

int findIndex(int a[], int size, int value);

int main(void) {
    int temp;
    int index;
    int arr[5] = { 11, 22, 33, 44, 55 };

    while (1) {
        printf("Enter value that you want to find: ");
        scanf("%d", &temp);
        index = findIndex(arr, 5, temp);
        if (temp == -1) {
            break;
        }
        if (index == -1) {
            printf("There is no %d in array.\n", temp);
        } else {
            printf("%d is at index %d in array.\n", temp, index);
        }
    }
    return 0;
}

int findIndex(int a[], int size, int value) {
    int index;

    for(index = 0; index < size; index++) {
        if (a[index] == value) {
            break;
        }
    }
    if (index == size) {
        return -1;
    }
    return index;
}