#include <stdio.h>

void stringCopy(char dst[], char src[]);

int main(void) {
    char str1[] = { 'h', 'i', '!','\0'};
    char str2[10] = { 0, };

    printf("Before\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n\n", str2);

    stringCopy(str2, str1);

    printf("After\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
}

void stringCopy(char dst[], char src[]) {
    int index;

    index = 0;
    while (src[index] != '\0') {
        dst[index] = src[index];
        index++;
    }
    dst[index] = '\0';
}