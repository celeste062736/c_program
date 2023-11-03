#include <stdio.h>
#include <math.h>

typedef struct point {
    int x;
    int y;
}   pointT;

typedef struct line {
    pointT start;
    pointT end;
}   lineT;

void getPoint(pointT* p);
lineT inputLine(void);
double getLineLength(lineT line);

int main(void) {
    lineT line;

    line = inputLine();

    printf("line length is %lf\n", getLineLength(line));
    return 0;
}

void getPoint(pointT* p) {
    printf("Enter x: ");
    scanf("%d", &(p->x));
    printf("Enter y: ");
    scanf("%d", &(p->y));
    printf("\n");
}

lineT inputLine(void) {
    lineT line;

    printf("Type start point.\n");
    getPoint(&(line.start));
    printf("Type end point.\n");
    getPoint(&(line.end));
    return line;
}

double getLineLength(lineT line) {
    double dx;
    double dy;

    dx = line.end.x - line.start.x;
    dy = line.end.y - line.start.y;
    return sqrt(dx * dx + dy * dy);
}
