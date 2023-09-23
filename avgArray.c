#include <stdio.h>

int getIntegerArray(int a[], int n, int s);
void printIntegerArray(int a[], int n);
double averageIntegerArray(int a[], int n);

int main(void) {
    int arr[10];
    int size;
    double avg;

    size = getIntegerArray(arr, 10, -1);
    printIntegerArray(arr, size);
    avg = averageIntegerArray(arr, size);
    printf("avg: %lf\n", avg);
    return 0;
}

int getIntegerArray(int a[], int n, int s) {
    int i;
    int temp;

    for (i = 0; i < n; i++) {
        scanf("%d", &temp);
        if (temp == -1) {
            break;
        }
        a[i] = temp;
    }
    return i;
}

void printIntegerArray(int a[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("%d: %d\n", i, a[i]);
    }
}

double averageIntegerArray(int a[], int n) {
    int sum;
    double result;
    int i;

    sum = 0;
    for (i = 0; i < n; i++) {
        sum += a[i];
    }
    result = (double)sum / n;
    return result;
}