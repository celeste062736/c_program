#include <stdio.h>

int sumRangeWithIndex(int* array, int start, int end);

int main(void) {
    int sum;
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    sum = sumRangeWithIndex(arr, 2, 7);
    printf("Sum is %d\n", sum);
    return 0;
}

int sumRangeWithIndex(int* array, int start, int end) {
    int i;
    int sum;

    sum = 0;
    for(i = start; i <= end; i++) {
        sum += *(array + i);
    }
    return sum;
}