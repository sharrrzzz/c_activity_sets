#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct point {
    float x, y;
} Point;

typedef struct line {
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
    Point p = input_point();
    find_length(&l);
    output(l);
    return 0;
}

Point input_point()
{
    
}

Line input_line()
{
    
}

void find_length(Line *l)
{
    float dx = l->p2.x - l->p1.x;
    float dy = l->p2.y - l->p1.y;
    if (dx == 0 && dy == 0) 
    {
        l->distance = 0;
    } else {
        l->distance = sqrt(dx * dx + dy * dy);
    }
}

void output(Line l)
{
    printf("the length of the line is %.2f",l.distance);
}