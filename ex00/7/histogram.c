#include <stdio.h>

void printIntegerArray(int a[], int n);
int getIntegerArray(int a[], int n, int s);
void printHistogram(int a[], int n);

int main(void) {
    int arr[20];
    int size;
    double avg;

    size = getIntegerArray(arr, 20, -1);
    // printIntegerArray(arr, size);
    printHistogram(arr, size);
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

void printHistogram(int a[], int n) {
    int index;
    int histogram[11] = { 0, };

    for (index = 0; index < n; index++) {
        histogram[a[index] / 10]++;
    }

    for (index = 0; index < 11; index++) {
        if (index == 10) {
            printf("%d\t| ", 100);
        } else {
            printf("%d-%d\t| ", index, index * 10 + 9);
        }
        for(int i = 0; i < histogram[index]; i++) {
            printf("*");
        }
        printf("\n");
    }
}


//47 100 95 88 86 92 75 89 81 70 55 80 -1