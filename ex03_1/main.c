#include <stdio.h>

typedef struct person {
    char name[30];
    char phoneNum[12];
    char address[50];
}   personT;

personT inputPerson(void);
void printPerson(personT p);

int main(void) {
    personT p;

    p = inputPerson();
    printPerson(p);
    return 0;
}

personT inputPerson(void) {
    personT p;

    printf("Enter name. : ");
    scanf("%s", p.name);
    printf("Enter phone number. : ");
    scanf("%s", p.phoneNum);
    printf("Enter address. : ");
    scanf("%s", p.address);
    printf("\n");
    return p;
}

void printPerson(personT p) {
    printf("Person info.\n");
    printf("name: %s\n", p.name);
    printf("phone number: %s\n", p.phoneNum);
    printf("address: %s\n", p.address);
}
