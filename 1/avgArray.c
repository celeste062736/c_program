#include <stdio.h>

void printIntegerArray(int a[], int n);
int getIntegerArray(int a[], int n, int s);
double averageIntegerArray(int a[], int n);

int main(void) {
    int arr[10];
    int size;
    double avg;

    size = getIntegerArray(arr, 10, -1);
    printIntegerArray(arr, size);
    avg = averageIntegerArray(arr, size);
    printf("Avg: %lf\n", avg);
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

double averageIntegerArray(int a[], int n) {
    int index;
    int sum;
    double result;

    sum = 0;
    for(index = 0; index < n; index++) {
        sum += a[index];
    }
    result = (double)sum / n;
    return result;
}