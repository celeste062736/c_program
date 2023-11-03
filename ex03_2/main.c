#include <stdio.h>

typedef struct person {
    char name[30];
    char phoneNum[12];
    char address[50];
}   personT;

void inputPerson(personT* p);
void inputPersonList(personT arr_p[], int num);
void printPerson(personT p);
void printPersonList(personT arr_p[], int num);

int main(void) {
    personT arr_p[3];

    inputPersonList(arr_p, 3);
    printPersonList(arr_p, 3);
    return 0;
}

void inputPerson(personT* p) {
    printf("Enter name. : ");
    scanf("%s", p->name);
    printf("Enter phone number. : ");
    scanf("%s", p->phoneNum);
    printf("Enter address. : ");
    scanf("%s", p->address);
    printf("\n");
}

void inputPersonList(personT arr_p[], int num) {
    int i;

    for(i = 0; i < num; i++) {
        printf("Type person%d info.\n", i + 1);
        inputPerson(arr_p + i);
    }
    printf("\n");
}

void printPerson(personT p) {
    printf("name: %s\n", p.name);
    printf("phone number: %s\n", p.phoneNum);
    printf("address: %s\n", p.address);
    printf("\n");
}

void printPersonList(personT arr_p[], int num) {
    int i;

    for(i = 0; i < num; i++) {
        printf("Person%d info.\n", i + 1);
        printPerson(arr_p[i]);
    }
}
