#include <stdio.h>

int getTime(void);
void convertTimeToHMS(int time, int* hour, int* min, int* sec);
void printHMS(int time, int hour, int min, int sec);


int main(void) {
    int time;
    int hour;
    int min;
    int sec;

    time = getTime();
    convertTimeToHMS(time, &hour, &min, &sec);
    printHMS(time, hour, min, sec);
    return 0;
}

int getTime(void) {
    int time;

    printf("Enter seconds. : ");
    scanf("%d", &time);
    return time;
}

void convertTimeToHMS(int time, int* hour, int* min, int* sec) {
    int temp;

    *sec = time % 60;
    temp = time / 60;
    *min = temp % 60;
    temp /= 60;
    *hour = temp % 24;
}

void printHMS(int time, int hour, int min, int sec) {
    printf("%ds is %d hour %d min %d sec.\n", time, hour, min, sec);
}