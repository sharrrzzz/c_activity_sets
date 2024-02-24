#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct point
{
    float x, y;
} Point;

typedef struct polygon
{
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

int input_n();
Point input_point(char *promt_msg);
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon *p);
void output(Polygon p);

int main()
{
    Polygon poly;
    input_polygon(&poly);
    find_perimeter(&poly);
    output(poly);
    return 0;
}

int input_n()
{
    int n;
    printf("Enter the number of sides of the polygon: ");
    scanf("%d", &n);
    return n;
}

Point input_point(char *promt_msg)
{
    Point p;
    printf("%s\n", promt_msg);
    scanf("%f %f", &p.x, &p.y);
    return p;
}

int input_polygon(Polygon *p)
{
    p->sides = input_n();
    printf("Enter the coordinates of the vertices of the polygon: \n");
    for (int i = 0; i < p->sides; i++)
    {
        printf("Point %d: \n", i + 1);
        p->p[i] = input_point("(x,y): ");
    }
    return p->sides;
}

float find_distance(Point a, Point b)
{
    float dx = b.x - a.x;
    float dy = b.y - a.y;
    float distance = dx * dx + dy * dy;
    float x_old = 1, x_new = distance / 2;
    float precision = 0.000001;
    while (fabs(x_new - x_old) > precision)
    {
        x_old = x_new;
        x_new = (x_old + distance / x_old) / 2;
    }
    return x_new;
}

void find_perimeter(Polygon *p)
{
    float perimeter = 0.0;
    for (int i = 0; i < p->sides; i++)
    {
        perimeter = perimeter + find_distance(p->p[i], p->p[(i + 1) % p->sides]);
    }
    p->perimeter = perimeter;
}

void output(Polygon p)
{
    printf("The perimeter of the polygon is %f", p.perimeter);
}