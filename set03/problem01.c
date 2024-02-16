#include <stdio.h>
#include <math.h>

void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main()
{
    float x1, x2, y1, y2, distance;
    input(&x1, &x2, &y1, &y2);
    distance = find_distance(x1, x2, y1, y2);
    output(x1, x2, y1, y2, distance);
    return 0;
}

void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("Enter the x coordinate of the first point: ");
    scanf("%f", x1);
    printf("Enter the y coordinate of the first point: ");
    scanf("%f", y1);
    printf("Enter the x coordinate of the second point: ");
    scanf("%f", x2);
    printf("Enter the y coordinate of the second point: ");
    scanf("%f", y2);
}

float find_distance(float x1, float y1, float x2, float y2)
{
    float distance;
    float dx = x2 - x1;
    float dy = y2 - y1;
    distance = sqrt(dx * dx + dy * dy);
    return distance;
}

void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("The distance formula among (%.2f, %.2f) and (%.2f, %.2f) is %f",x1,y1,x2,y2,distance);
}