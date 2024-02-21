#include <stdio.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main()
{
    float x1, x2, y1, y2, x3, y3;
    int result;    
    input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);
    result = is_triangle(x1, y1, x2, y2, x3, y3);
    output(x1, y1, x2, y2, x3, y3, result);
    return 0;
}

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("Enter the coordinates of the first point (x,y): ");
    scanf("%f %f",x1, y1);
    printf("Enter the coordinates of the second point (x,y): ");
    scanf("%f %f",x2, y2);
    printf("Enter the coordinates of the third point (x,y): ");
    scanf("%f %f",x3, y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    float slope1 = (y2 - y1) / (x2 - x1);
    float slope2 = (y3 - y2) / (x3 - x2);
    float slope3 = (y1 - y3) / (x1 - x3);

    if (slope1 != slope2 && slope2 != slope3 && slope1 != slope3)
    {
        return 1;
    }
    else
    {
         return 0;
    }
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    if (result == 1)
    {
        printf("The given points (%.2f, %.2f), (%.2f, %.2f) and (%.2f, %.2f) form a triangle",x1, y1, x2, y2, x3, y3);
    }
    else 
    {
        printf("The given points (%.2f, %.2f), (%.2f, %.2f) and (%.2f, %.2f) do not form a triangle",x1, y1, x2, y2, x3, y3);
    }
}