#include <stdio.h>

void inputDate(int* year, int* month, int* day);
void printBirthday(int year, int month, int day, int old);

int main(void) {
    int year;
    int month;
    int day;

    inputDate(&year, &month, &day);
    printBirthday(year, month, day, 60);
    return 0;
}

void inputDate(int* year, int* month, int* day) {
    printf("Enter your birthday.\n");
    
    printf("year: ");
    scanf("%d", year);

    printf("month: ");
    scanf("%d", month);

    printf("day: ");
    scanf("%d", day);
}

void printBirthday(int year, int month, int day, int age) {
    printf("Birthday in %d age. (yyyy-mm-dd)\n", age);
    printf("%4d-%02d-%02d\n", year + age, month, day);
}