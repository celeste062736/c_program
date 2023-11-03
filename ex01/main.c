#include <stdio.h>

typedef struct point {
    int x;
    int y;
}   pointT;

void getPoint(pointT* p);
int isEquals(pointT p1, pointT p2);

int main(void) {
    pointT p1;
    pointT p2;

    getPoint(&p1);
    getPoint(&p2);

    if (isEquals(p1, p2) == 1) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}

void getPoint(pointT* p) {
    printf("Get point.\n");
    printf("Enter x: ");
    scanf("%d", &(p->x));
    printf("Enter y: ");
    scanf("%d", &(p->y));
    printf("\n");
}

int isEquals(pointT p1, pointT p2) {
    return ((p1.x == p2.x) && (p1.y == p2.y));
}