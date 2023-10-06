#include <stdio.h>

int sumRangeWithPosition(int* pStart, int* pEnd);

int main(void) {
    int sum;
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    sum = sumRangeWithPosition(arr + 2, arr + 7);
    printf("Sum is %d\n", sum);
    return 0;
}

int sumRangeWithPosition(int* pStart, int* pEnd) {
    int sum;

    sum = 0;
    for (; pStart <= pEnd; pStart++) {
        sum += *pStart;
    }
    return sum;
}