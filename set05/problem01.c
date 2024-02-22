#include <stdio.h>
#include <math.h>

struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

int main()
{
    Point a,b;
    float res;
    printf("Enter the coordinates for the first point: \n");
    a = input();
    printf("Enter the coordinates for the second point: \n");
    b = input();
    dist(a,b,&res);
    output(a,b,res);
    return 0;
}

Point input()
{
    Point p;
    printf("Enter the x coordinate: ");
    scanf("%f",&p.x);
    printf("Enter the y coordinate: ");
    scanf("%f",&p.y);
    return p;
}

void dist(Point a, Point b, float *res)
{   
    *res = sqrt(((b.x - a.x) * (b.x - a.x)) + ((b.y - a.y) * (b.y - a.y)));
}

void output(Point a, Point b, float res)
{
    printf("Distance between (%.2f, %.2f) and (%.2f, %.2f) is %.2f",a.x,a.y,b.x,b.y,res);
}