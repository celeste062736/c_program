#include <stdio.h>

int removeZeroElement(int a[], int size);
void printIntegerArray(int a[], int n);

int main(void) {
    int score[] = { 65, 0, 95, 0, 0, 9, 82, 0, 84, 94, 86, 90, 0 };
    int new_size;

    printf("Before\n");
    printIntegerArray(score, 13);
    printf("\n");
    new_size = removeZeroElement(score, 13);
    printf("After\n");
    printIntegerArray(score, new_size);
    return 0;
}

int removeZeroElement(int a[], int size) {
    int index;
    int new_index;

    for (index = 0, new_index = 0; index < size; index++) {
        if (a[index] != 0) {
            a[new_index++] = a[index];
        }
    }
    return new_index;
}

void printIntegerArray(int a[], int n) {
    int index;

    for(index = 0; index < n; index++) {
        printf("%d: %d\n", index + 1, a[index]);
    }
}