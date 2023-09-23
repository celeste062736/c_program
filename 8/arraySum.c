#include <stdio.h>

#define ROW (3)
#define COL (6)

void getIntegerArray(int a[][COL], int row, int col);
void printTable(int a[][COL], int row, int col);

int main(void) {
    int arr[ROW][COL];

    getIntegerArray(arr, ROW, COL);
    printTable(arr, ROW, COL);
    return 0;
}

void getIntegerArray(int a[][COL], int row, int col) {
    int i;
    int j;
    int temp;

    printf("Enter value\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &temp);
            a[i][j] = temp;
        }
    }
}

void printTable(int a[][COL], int row, int col) {
    int i;
    int j;
    int sumTotal;
    int sumTemp;

    sumTotal = 0;
    for(i = 0; i < row; i++) {
        sumTemp = 0;
        for(int j = 0; j < col; j++) {
            printf("%3d ", a[i][j]);
            sumTemp += a[i][j];
        }
        printf ("%4d\n", sumTemp);
        sumTotal += sumTemp;
    }

    for(j = 0; j < col; j++) {
        sumTemp = 0;
        for(i = 0; i < row; i++) {
            sumTemp += a[i][j];
        }
        printf("%3d ", sumTemp);
    }
    printf("%4d\n", sumTotal);
}