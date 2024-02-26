#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct point
{
    float x, y;
} Point;

typedef struct line
{
    Point p1, p2;
    float distance;
} Line;

Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);

int main()
{
    Line l = input_line();
    find_length(&l);
    output(l);
    return 0;
}

Point input_point()
{
    Point p;
    scanf("%f %f", &p.x, &p.y);
    return p;
}

Line input_line()
{
    Line l;
    l.p1 = input_point();
    l.p2 = input_point();
    return l;
}

void find_length(Line *l)
{
    float dx = l->p2.x - l->p1.x;
    float dy = l->p2.y - l->p1.y;
    float distance = sqrt((dx * dx) + (dy * dy));
    l->distance = distance;
}

void output(Line l)
{
    printf("the length of the line is %.2f", l.distance);
}