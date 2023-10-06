#include <stdio.h>

enum Date {
    YEAR = 0,
    MONTH,
    DAY,
};

void inputDate(int date[]);
void printBirthday(int date[] int old);

int main(void) {
    int data[3];

    inputDate(date);
    printBirthday(date, 60);
    return 0;
}

void inputDate(int date[]) {
    printf("Enter your birthday.\n");
    
    printf("year: ");
    scanf("%d", &date[YEAR]);

    printf("month: ");
    scanf("%d", &date[MONTH]);

    printf("day: ");
    scanf("%d", &date[DAY]);
}

void printBirthday(int date[], int age) {
    printf("Birthday in %d age. (yyyy-mm-dd)\n", age);
    printf("%4d-%02d-%02d\n", date[YEAR] + age, date[MONTH], date[DAY]);
}