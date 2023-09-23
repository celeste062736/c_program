#include <stdio.h>

void toUpperString(char s[]);

int main(void) {
    char str[] = { 'h', 'i', '!', '\0'};

    printf("Before: %s\n", str);
    toUpperString(str);
    printf("After:  %s\n", str);
}

void toUpperString(char s[]) {
    int index;

    index = 0;
    while (s[index] != '\0') {
        if (s[index] >= 'a' && s[index] <= 'z') {
            s[index] -= 'a' - 'A';
        }
        index++;
    }
}