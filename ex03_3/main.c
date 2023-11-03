#include <stdio.h>
#include <string.h>

typedef struct person {
    char name[30];
    char phoneNum[12];
    char address[50];
}   personT;

void initArr(personT arr_p[]);
void printMenu(void);
int getMenuNum(void);
void selectMenu(personT arr_p[], int menu);

void printPerson(personT p);
void printPersonList(personT arr_p[]);
void searchByName(personT arr_p[]);
void inputPerson(personT* p);
void addNewPerson(personT arr_p[]);
void editPerson(personT arr_p[]);
void deletePerson(personT arr_p[]);

int main(void) {
    personT arr_p[10];
    int menuNum;

    initArr(arr_p);
    while (1) {
        printMenu();
        menuNum = getMenuNum();
        if (menuNum == 6) {
            break;
        }
        selectMenu(arr_p, menuNum);
    }
    return 0;
}

void initArr(personT arr_p[]) {
    int i;

    for (i = 0; i < 10; i++) {
        arr_p[i].name[0] = '\0';
    }
}

void printMenu(void) {
    printf("1. print list\n");
    printf("2. search person\n");
    printf("3. add new person\n");
    printf("4. edit person info\n");
    printf("5. delete person\n");
    printf("6. exit\n");
    printf("\n");
}

int getMenuNum(void) {
    int menuNum;

    printf("Select: ");
    scanf("%d", &menuNum);
    printf("\n");
    return menuNum;
}

void selectMenu(personT arr_p[], int menu) {
    switch(menu) {
    case 1:
        printPersonList(arr_p);
        break;
    case 2:
        searchByName(arr_p);
        break;
    case 3:
        addNewPerson(arr_p);
        break;
    case 4:
        editPerson(arr_p);
        break;
    case 5:
        deletePerson(arr_p);
        break;
    default:
        printf("Error. Enter 1 ~ 6.\n");
        break;
    }
}

void printPerson(personT p) {
    printf("------------------------------\n");
    printf("name: %s\n", p.name);
    printf("phone number: %s\n", p.phoneNum);
    printf("address: %s\n", p.address);
    printf("------------------------------\n");
}

void printPersonList(personT arr_p[]) {
    int i;

    for(i = 0; i < 10; i++) {
        if (arr_p[i].name[0] == '\0') {
            continue;
        }
        printf("Person%d info.\n", i + 1);
        printPerson(arr_p[i]);
        printf("\n");
    }
}

void searchByName(personT arr_p[]) {
    char name[30];
    int i;

    printf("Enter name you want to find: ");
    scanf("%s", name);
    for (i = 0; i < 10; i++) {
        if (strcmp(name, arr_p[i].name) == 0) {
            printf("Person%d info.\n", i + 1);
            printPerson(arr_p[i]);
            break;
        }
    }
    if (i == 11) {
        printf("%s not found.\n", name);
    }
    printf("\n");
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

void addNewPerson(personT arr_p[]) {
    int i;

    for (i = 0; i < 10; i++) {
        if (arr_p[i].name[0] == '\0') {
            printf("Store in person%d.\n", i + 1);
            inputPerson(arr_p + i);
            break;
        }
    }
    if (i == 11) {
        printf("No empty storage.\n");
    }
}

void editPerson(personT arr_p[]) {
    int num;

    printf("Enter number you want to edit: ");
    scanf("%d", &num);
    if (num <= 0 || num > 10) {
        printf("Wrong number. Enter 1 ~ 10.\n");
        return;
    }
    if (arr_p[num - 1].name[0] == '\0') {
        printf("Person%d info is empty.\n", num);
        return;
    }
    printf("Editing person%d info.\n", num);
    inputPerson(arr_p + num - 1);
}

void deletePerson(personT arr_p[]) {
    int num;

    printf("Enter number you want to delete: ");
    scanf("%d", &num);
    if (num <= 0 || num > 10) {
        printf("Wrong number. Enter 1 ~ 10.\n");
        return;
    }
    printf("Delete person%d info.\n", num);
    arr_p[num - 1].name[0] = '\0';
}
