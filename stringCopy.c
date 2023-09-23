#include <stdio.h>

void stringCopy(char dst[], char src[]);

int main(void) {
    char str1[] = { 'h', 'i', '!', '\0' };
    char str2[10];

    stringCopy(str1, str2);
    printf("str1: %s\nstr2: %s\n", str1, str2);
}

void stringCopy(char dst[], char src[]) {
    int i;

    i = 0;
    while (src[i] != '\0') {
        dst[i] = src[i++];
    }
    dst[i] = '\0';
}
